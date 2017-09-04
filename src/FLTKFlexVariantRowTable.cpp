#include "FLTKFlexVariantRowTable.h"
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Choice.H>
#include <boost/assign.hpp>
#include <boost/foreach.hpp>
#include <Fl/fl_draw.H>

/// 初始化控件
void Fl_Flex_Variant_Table_Row::UpdateCtrlDlg()
{
	// 删除UI控件
	bool rm_status_ = false;
	auto status_iter_ = status_.begin();
	while(status_iter_ != status_.end())
	{
		if(*status_iter_ == -1)
		{
			rm_status_ = true;
			auto iter_distance_ = std::distance(status_.begin(), status_iter_);
			auto data_iter_ = data_.begin();
			std::advance(data_iter_, iter_distance_);
			BOOST_FOREACH(auto ui_ptr_, *data_iter_)
			{
				Fl_Widget* wgt_ = static_cast<Fl_Widget*>(ui_ptr_);
				wgt_->hide();
				this->remove(*wgt_);
			}
			data_.erase(data_iter_);
			status_iter_ = status_.erase(status_iter_);
		}
		else
			++status_iter_;
	}

	// 更新控件行数
	rowamount_ = int(status_.size());
	if(rowamount_ == 0){
		return;
	}
	colamount_ = int(data_.begin()->size());
	if(rm_status_){}
	else{
		if(rowamount_ > rows())
			rows(rowamount_);
	}
	row_name_.resize(rows());
	for(int t = 0;t < rows();++t)
		row_name_[t] = std::to_string(t);		

	// 控件重置控件
	begin();		
	UIType one_col_type_;
	Fl_Color label_color_;
	auto line_iter_ = data_.begin();
	char s[32];
	for (int r = 0; r< rowamount_; r++) 
	{
		line_iter_ = data_.begin();
		std::advance(line_iter_, r);

		for (int c = 0; c< colamount_; c++) 
		{
			int X, Y, W, H;
			find_cell(CONTEXT_TABLE, r, c, X, Y, W, H);

			if(line_iter_->at(c) == NULL)
			{
				sprintf_s(s, "%d-%d", r, c);
				switch(color_set_ty_)
				{
				case ROW_TYPE:
					label_color_ = order_color_[r%order_color_len_];
					break;
				case COL_TYPE:
					label_color_ = order_color_[c%order_color_len_];
					break;
				}
				one_col_type_ = col_type_[c];
				switch(one_col_type_)
				{
				case TEXT:
					{
						Fl_Output* one_ = new Fl_Output(X, Y, W, H);
						one_->value(s);
						one_->textcolor(label_color_);
						one_->textfont(FL_TIMES_BOLD);
						one_->box(FL_UP_BOX);
						line_iter_->at(c) = (void*)one_;
					}
					break;
				case EDIT:
					{
						Fl_Input* one_ = new Fl_Input(X, Y, W, H);
						one_->value(s);
						one_->textfont(FL_TIMES_BOLD);
						one_->box(FL_UP_BOX);
						line_iter_->at(c) = (void*)one_;
					}
					break;
				case BUTTON:
					{
						Fl_Button* one_ = new Fl_Button(X, Y, W, H);
						one_->copy_label(s);
						one_->labelfont(FL_TIMES_BOLD);
						one_->labelcolor(label_color_);
						one_->box(FL_UP_BOX);
						line_iter_->at(c) = (void*)one_;
					}
					break;
				case CHECK:
					{
						Fl_Check_Button* one_ = new Fl_Check_Button(X, Y, W, H);
						if(c == 0){}
						else{
							one_->copy_label(s);
						}
						one_->labelfont(FL_TIMES_BOLD);
						one_->labelcolor(label_color_);
						one_->box(FL_UP_BOX);
						line_iter_->at(c) = (void*)one_;
					}
					break;
				case RADIO:
					{
						Fl_Round_Button* one_ = new Fl_Round_Button(X, Y, W, H);
						one_->copy_label(s);
						one_->labelfont(FL_TIMES_BOLD);
						one_->labelcolor(label_color_);
						one_->box(FL_UP_BOX);
						line_iter_->at(c) = (void*)one_;
					}
					break;
				case POPUPMENU:
					{
						Fl_Choice* one_ = new Fl_Choice(X, Y, W, H);
						one_->textfont(FL_TIMES_BOLD);
						one_->clear();
						one_->add("Please Select");
						one_->box(FL_UP_BOX);
						line_iter_->at(c) = (void*)one_;
					}
					break;
				}
			}
			else
			{
				Fl_Widget* wgt_ = (Fl_Widget*)line_iter_->at(c);
				wgt_->resize(X, Y, W, H);
			}
		}
	}
	end();
}

Fl_Flex_Variant_Table_Row::Fl_Flex_Variant_Table_Row
	(
	int x,         // X position
	int y,         // Y position
	int w,         // W width
	int h,         // H height
	const char* label, // label 
	std::vector<UIType>& ui_typelist_,  // UI控件类型
	std::vector<int>& ui_colwidth_,     // UI控件宽度
	ColorSetType ty_             
	):Fl_Table_Row(x, y, w, h, label),
	color_set_ty_(ty_),
	font_size_(14)
{
	colamount_ = int(ui_colwidth_.size()) + 1;
	rowamount_ = 0;
	rows(rowamount_);
	cols(colamount_);
	status_.clear();
	data_.clear();
	boost::assign::push_back(col_type_)(CHECK).range(ui_typelist_);
	boost::assign::push_back(col_width_)(50).range(ui_colwidth_);

	type(Fl_Table_Row::SELECT_SINGLE);
	col_width_all(66);
	row_header_width(66);
	row_header(1);
	col_header(1);

	// 背景颜色
	color(FL_BLACK);

	// 头部颜色
	col_header_color(FL_DARK_BLUE);
	row_header_color(FL_DARK_BLUE);

	// 设置顺序的颜色
	order_color_.clear();
	boost::assign::push_back(order_color_)(FL_RED)(Fl_Color(92))(FL_DARK_YELLOW)(FL_DARK_GREEN)(FL_DARK_CYAN)(Fl_Color(181))
		(FL_DARK_MAGENTA)(Fl_Color(80))(Fl_Color(88))(Fl_Color(137))(Fl_Color(138))(Fl_Color(144))
		(Fl_Color(168))(Fl_Color(177))(Fl_Color(180))(Fl_Color(192))(Fl_Color(200));
	order_color_len_ = order_color_.size();

	// 设置回调函数类型
	when(FL_WHEN_RELEASE);

	// 初始化
	if(ui_typelist_.size() == ui_colwidth_.size())
	{
		col_name_.resize(colamount_);
		for(int t = 0;t < colamount_;++t)
			col_name_[t] = std::to_string(t);
		col_name_[0] = "Delete";
		setColWidth();
	}
	else
		throw std::runtime_error("Fl_Flex_Variant_Table_Row Error Constructor");
}

Fl_Flex_Variant_Table_Row::~Fl_Flex_Variant_Table_Row()
{
}

/// 行列的自主添加和删除
void Fl_Flex_Variant_Table_Row::AddLines(uint32_t nline_)
{
	if(nline_ > 0)
	{
		std::list<int> status_add_(nline_, 1);
		status_.insert(status_.end(), status_add_.begin(), status_add_.end());
		std::vector<void*> ui_ptr_(colamount_, NULL);
		for(uint32_t t = 0;t < nline_;++t)
			data_.push_back(ui_ptr_);
		UpdateCtrlDlg();
		redraw();
	}
}

void Fl_Flex_Variant_Table_Row::RmLines()
{
	bool rm_require_ = false;
	for(int t = 0;t < rowamount_;++t)
	{
		auto row_iter_ = data_.begin();
		std::advance(row_iter_, t);
		Fl_Check_Button* check_btn_ = (Fl_Check_Button*)row_iter_->at(0);
		if(check_btn_->value())
		{
			auto status_iter_ = status_.begin();
			std::advance(status_iter_, t);
			(*status_iter_) = -1;
			rm_require_ = true;
		}
	}
	if(rm_require_)
	{
		UpdateCtrlDlg();
		redraw();
	}
}

/// 设置宽度
void Fl_Flex_Variant_Table_Row::setColWidth(int wid_)
{
	col_width_all(wid_);
}

void Fl_Flex_Variant_Table_Row::setRowWidth(int wid_)
{
	row_header_width(wid_);
}

/// 设置宽度[指定列]
void Fl_Flex_Variant_Table_Row::setColWidth
	(
	int col_index_, // 列索引
	int width_      // 宽度
	)
{
	if(col_index_ >= colamount_)
		throw std::runtime_error("Col Index Out Of Range");
	col_width(col_index_, width_);
}

/// 设置所有列宽度
void Fl_Flex_Variant_Table_Row::setColWidth(std::vector<int>& col_widths_)
{
	int colnum_ = int(col_widths_.size());
	if(colnum_ == colamount_ - 1)
	{
		col_width_.clear();
		boost::assign::push_back(col_width_)(50).range(col_widths_);
		setColWidth();
	}else{
		throw std::runtime_error("Col Width List Out Of Range");
	}
}

void Fl_Flex_Variant_Table_Row::setColWidth()
{
	int colnum_ = int(col_width_.size());
	for(int t = 0;t < colnum_;++t)
		setColWidth(t, col_width_[t]);
}

/// 获取单元格数据
void Fl_Flex_Variant_Table_Row::getColData
	(
	int col_index_,          
	std::vector<void*>& export_      
	)
{
	if(col_index_ >= 0 && col_index_ < colamount_)
	{
		export_.clear();
		export_.resize(rowamount_);
		for(int t = 0;t < rowamount_;++t)
		{
			auto data_iter_ = data_.begin();
			std::advance(data_iter_, t);
			export_[t] = data_iter_->at(col_index_);
		}
	}else{
		throw std::runtime_error("Col Index Out Of Range");
	}
}

void Fl_Flex_Variant_Table_Row::getRowData
	(
	int row_index_,              
	std::vector<void*>& export_
	)
{
	if(row_index_ >= 0 && row_index_ < rowamount_)
	{
		auto data_iter_ = data_.begin();
		std::advance(data_iter_, row_index_);
		export_.clear();
		export_.resize(colamount_);
		for(int t = 0;t < colamount_;++t)
			export_[t] = data_iter_->at(t);
	}else{
		throw std::runtime_error("Row Index Out Of Range");
	}
}

std::vector<void*> Fl_Flex_Variant_Table_Row::getColData(int col_amount_)
{
	std::vector<void*> v;
	getColData(col_amount_, v);
	return v;
}

std::vector<void*> Fl_Flex_Variant_Table_Row::getRowData(int row_amount_)
{
	std::vector<void*> v;
	getRowData(row_amount_, v);
	return v;
}

void* Fl_Flex_Variant_Table_Row::getCellData
	(
	int row_index_, // 行索引
	int col_index_  // 列索引
	)
{
	void* res_ = NULL;
	bool condition_ = (row_index_ >= 0 && row_index_ < rowamount_);
	condition_ = condition_ && (col_index_ >= 0 && col_index_ < colamount_);
	if(condition_)
	{
		auto data_iter_ = data_.begin();
		std::advance(data_iter_, row_index_);
		res_ = data_iter_->at(col_index_);
	}
	else
		throw std::runtime_error("getCellData Out Of Range");
	return res_;
}

/// 获取列控件类型
Fl_Flex_Variant_Table_Row::UIType Fl_Flex_Variant_Table_Row::getColCtrlType(int col_index_)
{
	return col_type_[col_index_];
}

std::vector<Fl_Flex_Variant_Table_Row::UIType> Fl_Flex_Variant_Table_Row::getColCtrlType()
{
	return col_type_;
}

/// 设置行列名称
void Fl_Flex_Variant_Table_Row::setRowName(std::vector<std::string>& rowname__)
{
	if(int(rowname__.size()) == rows())
	{
		row_name_.assign(rowname__.begin(), rowname__.end());
		redraw();
	}	
}

void Fl_Flex_Variant_Table_Row::setColName(std::vector<std::string>& colname__)
{
	if(int(colname__.size()) == colamount_ - 1)
	{
		col_name_.clear();
		boost::assign::push_back(col_name_)(std::string("Delete")).range(colname__);
		redraw();
	}	
}

int Fl_Flex_Variant_Table_Row::getSelectRowNum()
{
	int total_row_ = Fl_Table_Row::rows();
	for(int t = 0;t < total_row_;++t)
	{
		if(row_selected(t))
			return t;
	}
	return -1;
}

/// 获取RowAmount与ColAmount
int Fl_Flex_Variant_Table_Row::GetRowAmount() const
{
	return rowamount_;
}

int Fl_Flex_Variant_Table_Row::GetColAmount() const
{
	return colamount_;
}

void Fl_Flex_Variant_Table_Row::draw_cell(TableContext context, int R, int C, int X, int Y, int W, int H) 
{
	switch (context) 
	{
	case CONTEXT_STARTPAGE:
		fl_font(FL_COURIER_BOLD, font_size_); 
		break;
	case CONTEXT_RC_RESIZE: 
		{
			int X, Y, W, H;
			int index = 0;
			for (int r = 0; r<rowamount_; r++)
			{
				for (int c = 0; c<colamount_; c++) 
				{
					if (index >= children())
						break;
					find_cell(CONTEXT_TABLE, r, c, X, Y, W, H);
					child(index++)->resize(X, Y, W, H);
				}
			}
			init_sizes();			
			return;
		}
		break;
	case CONTEXT_ROW_HEADER:
		fl_push_clip(X, Y, W, H);
		{
			fl_draw_box(FL_THIN_UP_BOX, X, Y, W, H, col_header_color());
			fl_color(FL_WHITE);
			fl_draw(row_name_[R].c_str(), X, Y, W, H, FL_ALIGN_CENTER);
		}
		fl_pop_clip();
		break;
	case CONTEXT_COL_HEADER:
		fl_push_clip(X, Y, W, H);
		{
			fl_draw_box(FL_THIN_UP_BOX, X, Y, W, H, col_header_color());
			fl_color(FL_WHITE);
			fl_draw(col_name_[C].c_str(), X, Y, W, H, FL_ALIGN_CENTER);
		}
		fl_pop_clip();
		break;
	case CONTEXT_CELL:
		{
			if(R >= rowamount_)
			{
				fl_push_clip(X, Y, W, H);
				{
					fl_color(row_selected(R) ? FL_DARK_CYAN : FL_BLACK);
					// 制作矩形
					fl_rectf(X, Y, W, H);
					// TEXT
					switch(color_set_ty_){
					case ROW_TYPE:
						fl_color(row_selected(R) ? FL_WHITE : order_color_[R%order_color_len_]);
						break;
					case COL_TYPE:
						fl_color(row_selected(R) ? FL_WHITE : order_color_[C%order_color_len_]);
						break;
					}
					fl_draw("***", X, Y, W, H, FL_ALIGN_CENTER);
					// BORDER
					fl_color(FL_DARK_BLUE);
					fl_rect(X, Y, W, H);
				}
				fl_pop_clip();
			}
		}
		return;	
	default:
		return;
	}
}