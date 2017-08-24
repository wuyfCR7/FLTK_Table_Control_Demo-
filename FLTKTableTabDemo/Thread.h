#pragma once
#include <boost/noncopyable.hpp>
#include <process.h>
#include <functional>
#include <Windows.h>
#include <cstdint>
#include <memory>
#define STDCALL __stdcall
namespace wyf
{
	class thread:public boost::noncopyable
	{
	private:
		std::function<void(void)> callback_fcn_;
		HANDLE thread_handle_;
	public:
		typedef std::function<void(void)> VoidFcn;

		thread(VoidFcn fcn_):
			callback_fcn_(fcn_), 
			thread_handle_(NULL)
		{
			thread_handle_ = (HANDLE)_beginthreadex(NULL, NULL, callback, this, NULL, NULL);
		}

		~thread(){}

		void join()
		{
			::WaitForSingleObject(thread_handle_, INFINITE);
		}

		static uint32_t STDCALL callback(void* v)
		{
			thread* t = (thread*)v;
			t->callback_fcn_();
			return NULL;
		} 
	};

	typedef std::shared_ptr<thread> ThreadPtr;

	class timer:public boost::noncopyable
	{
	private:
		bool running_;
		long millseconds_;
		std::function<void(void)> timer_callback_fcn_;
		ThreadPtr thread_ptr_;
	public:
		timer(long millseconds__, thread::VoidFcn fcn__):
			running_(true),
			millseconds_(millseconds__),
			timer_callback_fcn_(fcn__)
		{
			thread_ptr_.reset(new thread(std::bind(&timer::running_thread_fcn_, this)));
		}

		~timer(){}

		void running_thread_fcn_()
		{
			while(running_)
			{
				Sleep(millseconds_);
				timer_callback_fcn_();
			}
		}

		void join()
		{
			running_ = false;
			thread_ptr_->join();
		}
	};

	typedef std::shared_ptr<timer> TimerPtr;
};