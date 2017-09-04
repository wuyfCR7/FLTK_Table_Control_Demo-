#include "FLTKFlexVariantRowTable.h"
#include <random>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Int_Input.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/fl_ask.H>
#include <boost/assign.hpp>
#pragma comment(lib, "fltk.lib")

Fl_Flex_Variant_Table_Row* table_;
Fl_Button* button_add_;
Fl_Button* button_remove_;
Fl_Int_Input* input_lines_;

void add_line_callback(Fl_Widget*, void*);
void rm_line_callback(Fl_Widget*, void*);

Fl_Int_Input* input_row_;
Fl_Int_Input* input_col_;
void one_cb(Fl_Widget*, void*);
void row_cb(Fl_Widget*, void*);
void col_cb(Fl_Widget*, void*);

std::default_random_engine RANDOM_ENGINE_;
std::uniform_int_distribution<int> INT_DISTRIBUTION_(-1000, 1000);

int main()
{
	Fl_Window* window_ = new Fl_Window(100, 100, 600, 600, "FLTKFlexVariantRowTable");
	window_->begin();
	std::vector<Fl_Flex_Variant_Table_Row::UIType> ui_typelist_;
	std::vector<int> ui_colwidth_;
	boost::assign::push_back(ui_typelist_)
		(Fl_Flex_Variant_Table_Row::BUTTON)
		(Fl_Flex_Variant_Table_Row::TEXT)
		(Fl_Flex_Variant_Table_Row::EDIT)
		(Fl_Flex_Variant_Table_Row::BUTTON)
		(Fl_Flex_Variant_Table_Row::POPUPMENU)
		(Fl_Flex_Variant_Table_Row::POPUPMENU)
		(Fl_Flex_Variant_Table_Row::CHECK)
		(Fl_Flex_Variant_Table_Row::RADIO)
		(Fl_Flex_Variant_Table_Row::TEXT)
		(Fl_Flex_Variant_Table_Row::EDIT);
	boost::assign::push_back(ui_colwidth_)
		(76)(76)(76)(76)(98)(98)(76)(76)(76)(76);

	Fl_Flex_Variant_Table_Row::ColorSetType ty_ = Fl_Flex_Variant_Table_Row::COL_TYPE;
	table_ = new Fl_Flex_Variant_Table_Row(10, 10, 580, 400, "", ui_typelist_, ui_colwidth_, ty_);
	table_->setRowWidth(50);
	window_->begin();

	button_add_ = new Fl_Button(10, 420, 130, 25, "Add Lines");
	button_add_->labelcolor(FL_CYAN);
	button_add_->color(FL_BLACK);
	button_add_->labelfont(FL_COURIER_BOLD);
	button_add_->callback(add_line_callback);

	button_remove_ = new Fl_Button(140, 420, 130, 25, "Remove Lines");
	button_remove_->labelcolor(FL_CYAN);
	button_remove_->color(FL_BLACK);
	button_remove_->labelfont(FL_COURIER_BOLD);
	button_remove_->callback(rm_line_callback);

	input_lines_ = new Fl_Int_Input(150, 450, 100, 25, "Import Line Amount");
	input_lines_->labelfont(FL_COURIER_BOLD);
	input_lines_->textfont(FL_COURIER_BOLD);

	input_row_ = new Fl_Int_Input(50, 485, 50, 25, "row");
	input_row_->labelfont(FL_TIMES_BOLD);
	input_row_->textfont(FL_TIMES_BOLD);
	input_col_ = new Fl_Int_Input(150, 485, 50, 25, "col");
	input_col_->labelfont(FL_TIMES_BOLD);
	input_col_->textfont(FL_TIMES_BOLD);

	Fl_Button* btn1_ = new Fl_Button(50, 520, 50, 30, "One");
	Fl_Button* btn2_ = new Fl_Button(150, 520, 50, 30, "Row");
	Fl_Button* btn3_ = new Fl_Button(250, 520, 50, 30, "Col");
	btn1_->labelfont(FL_TIMES_BOLD);
	btn2_->labelfont(FL_TIMES_BOLD);
	btn3_->labelfont(FL_TIMES_BOLD);
	btn1_->callback(one_cb);
	btn2_->callback(row_cb);
	btn3_->callback(col_cb);

	window_->resizable(window_);
	window_->show();
	return Fl::run();
}

void add_line_callback(Fl_Widget*, void*)
{
	int val_ = atoi(input_lines_->value());
	table_->AddLines(val_);
}

void rm_line_callback(Fl_Widget*, void*)
{
	table_->RmLines();
}

void one_cb(Fl_Widget*, void*)
{
	int row_ = atoi(input_row_->value());
	int col_ = atoi(input_col_->value());
	try
	{
		int val_ = INT_DISTRIBUTION_(RANDOM_ENGINE_);
		auto ty_ = table_->getColCtrlType(col_);
		switch(ty_)
		{
		case Fl_Flex_Variant_Table_Row::TEXT:
			{
				Fl_Output* one_ = static_cast<Fl_Output*>(table_->getCellData(row_, col_));
				one_->value(std::to_string(val_).c_str());
				one_->redraw();
			}
		break;
		case Fl_Flex_Variant_Table_Row::EDIT:
			{
				Fl_Input* one_ = static_cast<Fl_Input*>(table_->getCellData(row_, col_));
				one_->value(std::to_string(val_).c_str());
				one_->redraw();
			}
			break;
		case Fl_Flex_Variant_Table_Row::BUTTON:
		case Fl_Flex_Variant_Table_Row::CHECK:
		case Fl_Flex_Variant_Table_Row::RADIO:
			{
				Fl_Button* one_ = static_cast<Fl_Button*>(table_->getCellData(row_, col_));
				one_->copy_label(std::to_string(val_).c_str());
				one_->redraw();
			}
			break;
		case Fl_Flex_Variant_Table_Row::POPUPMENU:
			{
				Fl_Choice* one_ = static_cast<Fl_Choice*>(table_->getCellData(row_, col_));
				one_->add(std::to_string(val_).c_str());
				one_->redraw();
			}
			break;
		}
	}
	catch(std::runtime_error& error_)
	{
		fl_alert(error_.what());
	}
}

void row_cb(Fl_Widget*, void*)
{
	int row_ = atoi(input_row_->value());
	int col_ = table_->GetColAmount();
	std::vector<std::string> vec_(col_);
	for(int t = 0;t < col_;++t)
	{
		vec_[t] = std::to_string(INT_DISTRIBUTION_(RANDOM_ENGINE_));
	}
	try
	{
		auto ctrl_ = table_->getRowData(row_);
		for(int t = 0;t < col_;++t)
		{
			auto ty_ = table_->getColCtrlType(t);
			switch(ty_)
			{
			case Fl_Flex_Variant_Table_Row::TEXT:
				{
					Fl_Output* one_ = static_cast<Fl_Output*>(ctrl_[t]);
					one_->value(vec_[t].c_str());
					one_->redraw();
				}
				break;
			case Fl_Flex_Variant_Table_Row::EDIT:
				{
					Fl_Input* one_ = static_cast<Fl_Input*>(ctrl_[t]);
					one_->value(vec_[t].c_str());
					one_->redraw();
				}
				break;
			case Fl_Flex_Variant_Table_Row::BUTTON:
			case Fl_Flex_Variant_Table_Row::CHECK:
			case Fl_Flex_Variant_Table_Row::RADIO:
				{
					Fl_Button* one_ = static_cast<Fl_Button*>(ctrl_[t]);
					one_->copy_label(vec_[t].c_str());
					one_->redraw();
				}
				break;
			case Fl_Flex_Variant_Table_Row::POPUPMENU:
				{
					Fl_Choice* one_ = static_cast<Fl_Choice*>(ctrl_[t]);
					one_->add(vec_[t].c_str());
					one_->redraw();
				}
				break;
			}
		}
	}
	catch(std::runtime_error& error_)
	{
		fl_alert(error_.what());
	}
}

void col_cb(Fl_Widget*, void*)
{
	int col_ = atoi(input_col_->value());
	int row_ = table_->GetRowAmount();
	std::vector<std::string> vec_(row_);
	for(int t = 0;t < row_;++t)
	{
		vec_[t] = std::to_string(INT_DISTRIBUTION_(RANDOM_ENGINE_));
	}
	try
	{
		auto ty_ = table_->getColCtrlType(col_);
		auto ctrl_ = table_->getColData(col_);
		for(int t = 0;t < row_;++t)
		{
			switch(ty_)
			{
			case Fl_Flex_Variant_Table_Row::TEXT:
				{
					Fl_Output* one_ = static_cast<Fl_Output*>(ctrl_[t]);
					one_->value(vec_[t].c_str());
					one_->redraw();
				}
				break;
			case Fl_Flex_Variant_Table_Row::EDIT:
				{
					Fl_Input* one_ = static_cast<Fl_Input*>(ctrl_[t]);
					one_->value(vec_[t].c_str());
					one_->redraw();
				}
				break;
			case Fl_Flex_Variant_Table_Row::BUTTON:
			case Fl_Flex_Variant_Table_Row::CHECK:
			case Fl_Flex_Variant_Table_Row::RADIO:
				{
					Fl_Button* one_ = static_cast<Fl_Button*>(ctrl_[t]);
					one_->copy_label(vec_[t].c_str());
					one_->redraw();
				}
				break;
			case Fl_Flex_Variant_Table_Row::POPUPMENU:
				{
					Fl_Choice* one_ = static_cast<Fl_Choice*>(ctrl_[t]);
					one_->add(vec_[t].c_str());
					one_->redraw();
				}
				break;
			}
		}
	}
	catch(std::runtime_error& error_)
	{
		fl_alert(error_.what());
	}
}