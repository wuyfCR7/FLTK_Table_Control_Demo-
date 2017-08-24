#pragma once
#include <boost/serialization/singleton.hpp>
#include <boost/noncopyable.hpp>
#include <FL/Fl_Tabs.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Menu_Bar.H>
#include "ChildRes.h"
#include "ChildConfig.h"

/// Ö÷½çÃæ
class MainDlg:public boost::noncopyable
{
private:
	typedef boost::serialization::singleton<MainDlg> MainDlgInstanceTy;
public:
	Fl_Window*   window_;
	Fl_Menu_Bar* menubar_;
	Fl_Tabs*     tab_;

	ChildResult* child_result_;
	ChildConfig* child_config_;
private:
	int tab_pos_x_; // tab_ XPos
	int tab_pos_y_; // tab_ YPos
	int tab_pos_w_; // tab_ Width
	int tab_pos_h_; // tab_ Height

public:

	MainDlg();
	~MainDlg();

	void OnInitDialog();
	void show();
	
	static MainDlg& GetInstance();
	static void callback_exit_window(Fl_Widget*, void*);
	static void callback_menu_bar(Fl_Widget*, void*);
};