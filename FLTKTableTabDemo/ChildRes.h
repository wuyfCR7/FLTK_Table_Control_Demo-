#pragma once
#include "Thread.h"
#include <FL/Fl_Tabs.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
#include "FLTKOutputRowTable.h"

class ChildResult:public boost::noncopyable
{
public:
	Fl_Group* group_;
	Fl_Tabs* parent_; 
	// ��Ⱥ�ؼ���λ��
	int x;
	int y;
	int w;
	int h;
	// �����߳�
	wyf::TimerPtr timer_ptr_;
	Fl_Output_Table_Row* table_;
	Fl_Button* btn_start_thread_;
	Fl_Button* btn_exit_thread_;
	Fl_Output* output_line_;

public:
	ChildResult(int, int, int, int, const char*, Fl_Tabs*);
	~ChildResult();

	void OnInitDialog();

	/// ����ˢ��
	void start();
	void join();

	/// Table��̬չʾ
	void TableShow();

	static void callback_start_thread(Fl_Widget*, void*);
	static void callback_exit_thread(Fl_Widget*, void*);
	static void callback_line_selection(Fl_Widget*, void*);
};