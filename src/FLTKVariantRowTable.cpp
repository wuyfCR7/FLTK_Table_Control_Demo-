#include "FLTKVariantRowTable.h"
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
void Fl_Variant_Table_Row::OnInitCtrlDlg(int row_amount_, int col_amount_) {
	clear();		

	boost::array<int, 2> dimension_;
	dimension_[0] = row_amount_;
	dimension_[1] = col_amount_;
	data_.resize(dimension_);
	for(int i = 0;i < row_amount_;++i){
		for(int j = 0;j < col_amount_;++j){
			data_[i][j] = NULL;
		}
	}

	rows(row_amount_);
	cols(col_amount_);
	begin();		
		
	UIType one_col_type_;
	Fl_Color label_color_;

	char s[40];

	for (int r = 0; r< row_amount_; r++) 
	{
		for (int c = 0; c< col_amount_; c++) 
		{
			int X, Y, W, H;
			find_cell(CONTEXT_TABLE, r, c, X, Y, W, H);

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
					//one_->color(FL_BLACK);
					one_->textcolor(label_color_);
					one_->textfont(FL_TIMES_BOLD);
					one_->box(FL_UP_BOX);
					data_[r][c] = (void*)one_;
				}
				break;
			case EDIT:
				{
					Fl_Input* one_ = new Fl_Input(X, Y, W, H);
					one_->value(s);
					one_->textfont(FL_TIMES_BOLD);
					one_->box(FL_UP_BOX);
					data_[r][c] = (void*)one_;
				}
				break;
			case BUTTON:
				{
					Fl_Button* one_ = new Fl_Button(X, Y, W, H);
					one_->copy_label(s);
					//one_->color(FL_BLACK);
					one_->labelfont(FL_TIMES_BOLD);
					one_->labelcolor(label_color_);
					one_->box(FL_UP_BOX);
					data_[r][c] = (void*)one_;
				}
				break;
			case CHECK:
				{
					Fl_Check_Button* one_ = new Fl_Check_Button(X, Y, W, H);
					one_->copy_label(s);
					//one_->color(FL_BLACK);
					one_->labelfont(FL_TIMES_BOLD);
					one_->labelcolor(label_color_);
					one_->box(FL_UP_BOX);
					data_[r][c] = (void*)one_;
				}
				break;
			case RADIO:
				{
					Fl_Round_Button* one_ = new Fl_Round_Button(X, Y, W, H);
					one_->copy_label(s);
					//one_->color(FL_BLACK);
					one_->labelfont(FL_TIMES_BOLD);
					one_->labelcolor(label_color_);
					one_->box(FL_UP_BOX);
					data_[r][c] = (void*)one_;
				}
				break;
			case POPUPMENU:
				{
					Fl_Choice* one_ = new Fl_Choice(X, Y, W, H);
					one_->textfont(FL_TIMES_BOLD);
					one_->clear();
					one_->add("Please Select");
					one_->box(FL_UP_BOX);
					data_[r][c] = (void*)one_;
				}
				break;
			}
		}
	}

	end();
}

Fl_Variant_Table_Row::Fl_Variant_Table_Row
	(
	int x,         // X position
	int y,         // Y position
	int w,         // W width
	int h,         // H height
	const char* label, // label 
	std::vector<UIType>& ui_typelist_,  // UI控件类型
	std::vector<int>& ui_colwidth_,     // UI控件宽度
	int row_amount_,                    // Row Amount
	ColorSetType ty_             
	):Fl_Table_Row(x, y, w, h, label),
	col_type_(ui_typelist_),
	col_width_(ui_colwidth_),
	color_set_ty_(ty_),
	font_size_(14)
{
	rowamount_ = row_amount_;
	colamount_ = int(ui_colwidth_.size());

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
		int col_amount_ = int(ui_colwidth_.size());
		row_name_.resize(rowamount_);
		col_name_.resize(colamount_);
		for(int t = 0;t < rowamount_;++t)
			row_name_[t] = std::to_string(t);
		for(int t = 0;t < colamount_;++t)
			col_name_[t] = std::to_string(t);
		OnInitCtrlDlg(row_amount_, col_amount_);
		setColWidth();
	}
	else
		throw std::runtime_error("Fl_Variant_Table_Row Error Constructor");
}

Fl_Variant_Table_Row::~Fl_Variant_Table_Row()
{

}

/// 设置宽度
void Fl_Variant_Table_Row::setColWidth(int wid_)
{
	col_width_all(wid_);
}

void Fl_Variant_Table_Row::setRowWidth(int wid_)
{
	row_header_width(wid_);
}

/// 设置宽度[指定列]
void Fl_Variant_Table_Row::setColWidth
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
void Fl_Variant_Table_Row::setColWidth(std::vector<int>& col_widths_)
{
	int colnum_ = int(col_widths_.size());
	if(colnum_ == colamount_)
	{
		col_width_.assign(col_widths_.begin(), col_widths_.end());
		setColWidth();
	}else{
		throw std::runtime_error("Col Width List Out Of Range");
	}
}

void Fl_Variant_Table_Row::setColWidth()
{
	int colnum_ = int(col_width_.size());
	for(int t = 0;t < colnum_;++t)
		setColWidth(t, col_width_[t]);
}

/// 获取单元格数据
void Fl_Variant_Table_Row::getColData
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
			export_[t] = data_[t][col_index_];
		}
	}else{
		throw std::runtime_error("Col Index Out Of Range");
	}
}

void Fl_Variant_Table_Row::getRowData
	(
	int row_index_,              
	std::vector<void*>& export_
	)
{
	if(row_index_ >= 0 && row_index_ < rowamount_)
	{
		export_.clear();
		export_.resize(colamount_);
		for(int t = 0;t < colamount_;++t)
		{
			export_[t] = data_[row_index_][t];
		}
	}else{
		throw std::runtime_error("Row Index Out Of Range");
	}
}

std::vector<void*> Fl_Variant_Table_Row::getColData(int col_amount_)
{
	std::vector<void*> v;
	getColData(col_amount_, v);
	return v;
}

std::vector<void*> Fl_Variant_Table_Row::getRowData(int row_amount_)
{
	std::vector<void*> v;
	getRowData(row_amount_, v);
	return v;
}

void* Fl_Variant_Table_Row::getCellData
	(
	int row_index_, // 行索引
	int col_index_  // 列索引
	)
{
	void* res_ = NULL;
	bool condition_ = (row_index_ >= 0 && row_index_ < rowamount_);
	condition_ = condition_ && (col_index_ >= 0 && col_index_ < colamount_);
	if(condition_)
		res_ = data_[row_index_][col_index_];
	else
		throw std::runtime_error("getCellData Out Of Range");
	return res_;
}

/// 获取列控件类型
Fl_Variant_Table_Row::UIType Fl_Variant_Table_Row::getColCtrlType(int col_index_)
{
	return col_type_[col_index_];
}

std::vector<Fl_Variant_Table_Row::UIType> Fl_Variant_Table_Row::getColCtrlType()
{
	return col_type_;
}

/// 设置行列名称
void Fl_Variant_Table_Row::setRowName(std::vector<std::string>& rowname__)
{
	if(rowname__.size() == row_name_.size())
	{
		row_name_.assign(rowname__.begin(), rowname__.end());
		redraw();
	}	
}

void Fl_Variant_Table_Row::setColName(std::vector<std::string>& colname__)
{
	if(colname__.size() == col_name_.size())
	{
		col_name_.assign(colname__.begin(), colname__.end());
		redraw();
	}	
}

int Fl_Variant_Table_Row::getSelectRowNum()
{
	int total_row_ = Fl_Table_Row::rows();
	for(int t = 0;t < total_row_;++t)
	{
		if(row_selected(t))
			return t;
	}
	return -1;
}

void Fl_Variant_Table_Row::draw_cell(TableContext context, int R, int C, int X, int Y, int W, int H) 
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
			for (int r = 0; r<rows(); r++)
			{
				for (int c = 0; c<cols(); c++) 
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
		return;	
	default:
		return;
	}
}