#include "ChildRes.h"
#include <random>
std::default_random_engine RANDOM_ENGINE_;
std::uniform_int_distribution<int> INT_DISTRIBUTION_(-1000, 1000);

ChildResult::ChildResult(int xx, int yy, int ww, int hh, const char* label, Fl_Tabs* tab_):
	parent_(tab_)
{
	tab_->begin();
	group_ = new Fl_Group(xx, yy, ww, hh, label);
	group_->selection_color(FL_WHITE);
	group_->color(Fl_Color(49));
	group_->labelfont(FL_COURIER_BOLD);

	x = xx;
	y = yy;
	w = ww;
	h = hh;

	OnInitDialog();
	group_->hide();
	tab_->add(group_);
	tab_->end();

	Fl_Group::current()->resizable(group_);
}

ChildResult::~ChildResult()
{
	
}

void ChildResult::OnInitDialog()
{
	group_->begin();

	table_ = new Fl_Output_Table_Row(int(x+0.01*w), int(y+0.01*h), int(0.98*w), int(0.79*h));
	table_->labelfont(FL_TIMES_BOLD);
	table_->setRowWidth(36);
	table_->setColWidth(66);
	table_->col_resize(1);
	table_->setColorSetType(Fl_Output_Table_Row::COL_TYPE);

	boost::multi_array<std::string, 2> data_;
	boost::array<int, 2> dimension_; 
	dimension_[0] = 15;
	dimension_[1] = 16;
	data_.resize(dimension_);
	int row_ = data_.shape()[0];
	int col_ = data_.shape()[1];
	for(int t = 0;t < row_;++t)
	{
		for(int k = 0;k < col_;++k)
		{
			data_[t][k] = std::to_string(INT_DISTRIBUTION_(RANDOM_ENGINE_));
		}
	}
	table_->setData(data_);
	table_->select_row(0);
	group_->end();


	group_->begin();

	btn_start_thread_ = new Fl_Button(int(x+0.01*w), int(y+0.82*h), int(0.14*w), int(0.05*h), "Start Thread");
	btn_exit_thread_  = new Fl_Button(int(x+0.16*w), int(y+0.82*h), int(0.14*w), int(0.05*h), "Exit Thread");
	output_line_      = new Fl_Output(int(x+0.31*w), int(y+0.82*h), int(0.14*w), int(0.05*h));
	btn_start_thread_->labelfont(FL_TIMES_BOLD);
	btn_exit_thread_->labelfont(FL_TIMES_BOLD);
	output_line_->textfont(FL_TIMES_BOLD);
	output_line_->value("Welcome");

	btn_start_thread_->callback(callback_start_thread, this);
	btn_exit_thread_->callback(callback_exit_thread, this);
	table_->callback(callback_line_selection, this);

	group_->end();
}

void ChildResult::TableShow()
{
	int row_ = table_->rows();
	int col_ = table_->cols();
	static std::default_random_engine e_;
	static std::uniform_int_distribution<int> row_creator_(0, row_-1);
	static std::uniform_int_distribution<int> col_creator_(0, col_-1);
	static long long sel_ = 0;

	if(sel_%2)
	{
		std::vector<std::string> vec_(col_);
		for(auto& x:vec_)
			x = std::to_string(INT_DISTRIBUTION_(RANDOM_ENGINE_));
		int special_row_ = row_creator_(e_);
		table_->setRowData(special_row_, vec_);
	}
	else
	{
		std::vector<std::string> vec_(row_);
		for(auto& x:vec_)
			x = std::to_string(INT_DISTRIBUTION_(RANDOM_ENGINE_));
		int special_col_ = col_creator_(e_);
		table_->setColData(special_col_, vec_);
	}
	table_->redraw();
	/// »½ÐÑ
	Fl::awake(table_);
	sel_ = ++sel_;
}

void ChildResult::start()
{
	if(timer_ptr_.get() == NULL)
	{
		timer_ptr_.reset(new wyf::timer(300, std::bind(&ChildResult::TableShow, this)));
	}
}

void ChildResult::join()
{
	if(timer_ptr_.get() == NULL)
	{

	}
	else
	{
		timer_ptr_->join();
		timer_ptr_.reset();
	}
}

void ChildResult::callback_start_thread(Fl_Widget*, void* v)
{
	ChildResult* dlg_ = (ChildResult*)v;
	dlg_->start();
}

void ChildResult::callback_exit_thread(Fl_Widget*, void* v)
{
	ChildResult* dlg_ = (ChildResult*)v;
	dlg_->join();
}

void ChildResult::callback_line_selection(Fl_Widget*, void* v)
{
	ChildResult* dlg_ = (ChildResult*)v;
	int sel_ = dlg_->table_->getSelectRowNum();
	char buffer[64];
	sprintf_s(buffer, "Select Line:%d", sel_);
	dlg_->output_line_->value(buffer);
}