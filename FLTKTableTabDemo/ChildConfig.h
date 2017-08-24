#pragma once
#include "FLTKVariantRowTable.h"
#include <FL/Fl_Button.H>
#include <FL/Fl_Int_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Tabs.H>

class ChildConfig:public boost::noncopyable
{
public:
	Fl_Group* group_;
	Fl_Tabs* parent_; 
	// 组群控件的位置
	int x;
	int y;
	int w;
	int h;
	Fl_Variant_Table_Row* table_;
public:
	ChildConfig(int, int, int, int, const char*, Fl_Tabs*);
	~ChildConfig();

	void OnInitDialog();

	static void callback_button(Fl_Widget*, void*);
	static void callback_output(Fl_Widget*, void*);
};