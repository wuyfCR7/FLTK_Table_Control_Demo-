#include "ChildConfig.h"
#include <FL/fl_ask.H>
#include <boost/assign.hpp>

ChildConfig::ChildConfig(int xx, int yy, int ww, int hh, const char* label, Fl_Tabs* tab_):
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

ChildConfig::~ChildConfig()
{
	
}

void ChildConfig::OnInitDialog()
{
	group_->begin();

	std::vector<Fl_Variant_Table_Row::UIType> ui_typelist_;
	std::vector<int> ui_colwidth_;
	boost::assign::push_back(ui_typelist_)
		(Fl_Variant_Table_Row::BUTTON) /// 第一列Button
		(Fl_Variant_Table_Row::TEXT)   /// 第二列TEXT
		(Fl_Variant_Table_Row::EDIT)   /// 第三列EDIT
		(Fl_Variant_Table_Row::EDIT)
		(Fl_Variant_Table_Row::EDIT)
		(Fl_Variant_Table_Row::TEXT)
		(Fl_Variant_Table_Row::BUTTON);
	boost::assign::push_back(ui_colwidth_)(88)(88)(88)(88)(88)(88)(88);

	/// 行的数目
	int row_amount_ = 30;          
	Fl_Variant_Table_Row::ColorSetType ty_ = Fl_Variant_Table_Row::COL_TYPE;
	table_ = new Fl_Variant_Table_Row(int(x+0.01*w), int(y+0.01*h), int(0.98*w), int(0.98*h), "", ui_typelist_, ui_colwidth_, row_amount_, ty_);
	table_->select_row(0);

	/// CAllBACK
	int cols_ = (int)ui_colwidth_.size();
	for(int t = 0;t < cols_;++t)
	{
		auto ui_ptr_list_ = table_->getColData(t);
		auto ui_ty_ = table_->getColCtrlType(t);
		for(auto x:ui_ptr_list_)
		{
			Fl_Widget* w_ = (Fl_Widget*)x;
			if(ui_ty_ == Fl_Variant_Table_Row::BUTTON)
			{
				w_->callback(callback_button, this);
			}
			else if(ui_ty_ == Fl_Variant_Table_Row::EDIT)
			{
				w_->when(FL_WHEN_RELEASE);
				w_->callback(callback_output, this);
			}
		}
	}
}

void ChildConfig::callback_button(Fl_Widget* w, void* v)
{
	ChildConfig* dlg_ = static_cast<ChildConfig*>(v);
	void* btn_ = (void*)w;
	int select_row_num_ = dlg_->table_->getSelectRowNum();
	if(select_row_num_ == -1)
		return;

	auto select_row_ui_ptr_ = dlg_->table_->getRowData(select_row_num_);
	/// 寻找对应的迭代器
	auto ptr_iter_ = std::find(select_row_ui_ptr_.begin(), select_row_ui_ptr_.end(), btn_);
	int select_col_num_ = (int)std::distance(select_row_ui_ptr_.begin(), ptr_iter_);

	fl_alert("Find This Button %d Row %d Col", select_row_num_, select_col_num_);
}

void ChildConfig::callback_output(Fl_Widget* w, void* v)
{
	ChildConfig* dlg_ = static_cast<ChildConfig*>(v);
	void* edit_ = (void*)w;
	int select_row_num_ = dlg_->table_->getSelectRowNum();
	if(select_row_num_ == -1)
		return;

	auto select_row_ui_ptr_ = dlg_->table_->getRowData(select_row_num_);
	/// 寻找对应的迭代器
	auto ptr_iter_ = std::find(select_row_ui_ptr_.begin(), select_row_ui_ptr_.end(), edit_);
	int select_col_num_ = (int)std::distance(select_row_ui_ptr_.begin(), ptr_iter_);

	fl_alert("Find This Text %d Row %d Col", select_row_num_, select_col_num_);
}