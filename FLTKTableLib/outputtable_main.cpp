#include "FLTKOutputRowTable.h"
#include <random>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Int_Input.H>
#include <FL/Fl_Output.H>
#include <iostream>
#include <FL/fl_ask.H>

#define FLTK_OUTPUT_ROW_TABLE 

std::default_random_engine RANDOM_ENGINE_;
std::uniform_int_distribution<int> INT_DISTRIBUTION_(-1000, 1000);

void one_cb(Fl_Widget*, void*);
void row_cb(Fl_Widget*, void*);
void col_cb(Fl_Widget*, void*);
void table_cb(Fl_Widget*, void*);
Fl_Int_Input* input_row_;
Fl_Int_Input* input_col_;
Fl_Output_Table_Row* table_;

int main()
{
	Fl_Window* window_ = new Fl_Window(50, 50, 600, 600);
	window_->begin();

#ifdef FLTK_OUTPUT_ROW_TABLE 

	table_ = new Fl_Output_Table_Row(10, 10, 580, 400);
	table_->setRowWidth(52);
	table_->setColWidth(78);
	table_->col_resize(1);
	table_->setColorSetType(Fl_Output_Table_Row::COL_TYPE);
	window_->begin();

	input_row_ = new Fl_Int_Input(40, 420, 50, 30, "row");
	input_row_->labelfont(FL_TIMES_BOLD);
	input_row_->textfont(FL_TIMES_BOLD);
	input_col_ = new Fl_Int_Input(130, 420, 50, 30, "col");
	input_col_->labelfont(FL_TIMES_BOLD);
	input_col_->textfont(FL_TIMES_BOLD);

	Fl_Button* btn1_ = new Fl_Button(190, 420, 50, 30, "One");
	Fl_Button* btn2_ = new Fl_Button(250, 420, 50, 30, "Row");
	Fl_Button* btn3_ = new Fl_Button(310, 420, 50, 30, "Col");
	btn1_->labelfont(FL_TIMES_BOLD);
	btn2_->labelfont(FL_TIMES_BOLD);
	btn3_->labelfont(FL_TIMES_BOLD);
	btn1_->callback(one_cb);
	btn2_->callback(row_cb);
	btn3_->callback(col_cb);

	Fl_Output* output_ = new Fl_Output(120, 460, 100, 30, "Selected Row");
	output_->labelfont(FL_TIMES_BOLD);
	output_->textfont(FL_TIMES_BOLD);
	table_->callback(table_cb, output_);

#endif

	window_->show();
	return Fl::run();
}
void one_cb(Fl_Widget*, void*){
	int row_ = atoi(input_row_->value());
	int col_ = atoi(input_col_->value());
	try
	{
		int val_ = INT_DISTRIBUTION_(RANDOM_ENGINE_);
		table_->setCellData(row_, col_, std::to_string(val_));
		table_->redraw();
	}
	catch(std::runtime_error& error_)
	{
		fl_alert(error_.what());
	}
}
void row_cb(Fl_Widget*, void*){
	int row_ = atoi(input_row_->value());
	int col_ = table_->cols();
	std::vector<std::string> vec_(col_);
	for(int t = 0;t < col_;++t)
	{
		vec_[t] = std::to_string(INT_DISTRIBUTION_(RANDOM_ENGINE_));
	}
	try
	{
		table_->setRowData(row_, vec_);
		table_->redraw();
	}
	catch(std::runtime_error& error_)
	{
		fl_alert(error_.what());
	}
}
void col_cb(Fl_Widget*, void*){
	int col_ = atoi(input_col_->value());
	int row_ = table_->rows();
	std::vector<std::string> vec_(row_);
	for(int t = 0;t < row_;++t)
	{
		vec_[t] = std::to_string(INT_DISTRIBUTION_(RANDOM_ENGINE_));
	}
	try
	{
		table_->setColData(col_, vec_);
		table_->redraw();
	}
	catch(std::runtime_error& error_)
	{
		fl_alert(error_.what());
	}
}
void table_cb(Fl_Widget*, void* v){
	Fl_Output* output_ = (Fl_Output*)v;
	std::string str_ = std::to_string(table_->getSelectRowNum());
	output_->value(str_.c_str());
}