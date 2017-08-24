#include "FLTKOutputRowTable.h"
#include <boost\array.hpp>
#include <boost\assign.hpp>

/// 构造函数
Fl_Output_Table_Row::Fl_Output_Table_Row
	(
	int x, 
	int y, 
	int w, 
	int h, 
	const char* lab_
	):Fl_Table_Row(x, y, w, h, lab_),
	sel_bg_color_(FL_CYAN),
	sel_fg_color_(FL_BLACK),
	font_size_(14),
	color_set_ty_(ROW_TYPE)
{
	type(Fl_Table_Row::SELECT_SINGLE);
	col_width_all(66);
	row_header_width(66);
	row_header(TRUE);
	col_header(TRUE);

	// 背景颜色
	color(FL_BLACK);

	// 头部颜色
	col_header_color(FL_DARK_BLUE);
	row_header_color(FL_DARK_BLUE);

	// 设置默认数据
	setDefaultData();

	// 设置顺序的颜色
	order_color_.clear();
	boost::assign::push_back(order_color_)(FL_RED)(Fl_Color(92))(FL_YELLOW)(FL_GREEN)(FL_CYAN)(Fl_Color(181))
		(FL_MAGENTA)(Fl_Color(12))(Fl_Color(80))(Fl_Color(87))(Fl_Color(125))(Fl_Color(126))(Fl_Color(143))
		(Fl_Color(168))(Fl_Color(173))(Fl_Color(180))(Fl_Color(198))(Fl_Color(199))(Fl_Color(200));
	order_color_len_ = order_color_.size();

	// 设置回调函数类型
	when(FL_WHEN_RELEASE);
}

/// 析构函数
Fl_Output_Table_Row::~Fl_Output_Table_Row()
{

}

/// 着色类型
void Fl_Output_Table_Row::setColorSetType(Fl_Output_Table_Row::ColorSetType color_set_)
{
	color_set_ty_ = color_set_;
}

/// 选中行颜色设置
void Fl_Output_Table_Row::setSelectedBgColor(Fl_Color clr_)
{
	sel_bg_color_ = clr_;
}

void Fl_Output_Table_Row::setSelectedFgColor(Fl_Color clr_)
{
	sel_fg_color_ = clr_;
}

/// 设置宽度
void Fl_Output_Table_Row::setColWidth(int wid_)
{
	col_width_all(wid_);
}

void Fl_Output_Table_Row::setRowWidth(int wid_)
{
	row_header_width(wid_);
}

/// 设置字体大小
void Fl_Output_Table_Row::setFontSize(Fl_Fontsize sz_)
{
	font_size_ = sz_;
}

/// 设置默认数据
void Fl_Output_Table_Row::setDefaultData()
{
	int rr_ = 20;
	int cc_ = 3;

	// 设置默认数据
	boost::array<int, 2> arr_;
	arr_[0] = rr_;
	arr_[1] = cc_; 
	data_.resize(arr_);
	for(int i = 0;i < rr_;++i){
		for(int j = 0;j < cc_;++j){
			data_[i][j] = "***";
		}
	}

	// 设置行列名称
	col_name_.resize(cc_);
	row_name_.resize(rr_);
	for(int t = 0;t < cc_;++t)
		col_name_[t] = std::to_string(t);
	for(int t = 0;t < rr_;++t)
		row_name_[t] = std::to_string(t);
	rows(rr_);
	cols(cc_);
}

/// 设置数据
void Fl_Output_Table_Row::setData(boost::multi_array<std::string, 2>& input_)
{
	int rr_ = input_.shape()[0];
	int cc_ = input_.shape()[1];
	boost::array<int, 2> arr_;
	arr_[0] = rr_;
	arr_[1] = cc_;
	data_.resize(arr_);
	for(int i = 0;i < rr_;++i){
		for(int j = 0;j < cc_;++j){
			data_[i][j] = input_[i][j];
		}
	}

	// 设置行列名称
	col_name_.resize(cc_);
	row_name_.resize(rr_);
	for(int t = 0;t < cc_;++t)
		col_name_[t] = std::to_string(t);
	for(int t = 0;t < rr_;++t)
		row_name_[t] = std::to_string(t);
	rows(rr_);
	cols(cc_);	
}

/// 设置数据
void Fl_Output_Table_Row::setData
	(
	boost::multi_array<std::string, 2>& input_, // 数据
	std::vector<std::string>& c_name_,		    // 列名称 
	std::vector<std::string>& r_name_           // 行名称
	)         
{
	setData(input_);
	int rr_ = input_.shape()[0];
	int cc_ = input_.shape()[1];
	if(int(c_name_.size()) == cc_)
	{
		col_name_.assign(c_name_.begin(), c_name_.end());
	}
	if(int(r_name_.size()) == rr_)
	{
		row_name_.assign(r_name_.begin(), r_name_.end());
	}
}         

	/// 设置单元格数据
void Fl_Output_Table_Row::setCellData(int row_num_, int col_num_, std::string val_)
{
	int real_row_num_ = data_.shape()[0];
	int real_col_num_ = data_.shape()[1];
	if(row_num_ >= real_row_num_ || row_num_ < 0)
		throw std::runtime_error("Row Num Has Been Out Of Range");
	if(col_num_ >= real_col_num_ || col_num_ < 0)
		throw std::runtime_error("Col Num Has Been Out Of Range");
	data_[row_num_][col_num_] = val_;
}

/// 设置行数据
void Fl_Output_Table_Row::setRowData(int row_num_, std::vector<std::string>& row_data_)
{
	int real_row_num_ = data_.shape()[0];
	int real_col_num_ = data_.shape()[1];
	if(row_num_ >= real_row_num_ || row_num_ < 0)
		throw std::runtime_error("Row Num Has Been Out Of Range");
	if((int)row_data_.size() == real_col_num_)
	{
		for(int t = 0;t < real_col_num_;++t)
			data_[row_num_][t] = row_data_[t];
	}else
		throw std::runtime_error("Row Data Has Been Out Of Range");
}

/// 设置列数据
void Fl_Output_Table_Row::setColData(int col_num_, std::vector<std::string>& col_data_)
{
	int real_row_num_ = data_.shape()[0];
	int real_col_num_ = data_.shape()[1];
	if(col_num_ >= real_col_num_ || col_num_ < 0)
		throw std::runtime_error("Col Num Has Been Out Of Range");
	if((int)col_data_.size() == real_row_num_)
	{
		for(int t = 0;t < real_row_num_;++t)
			data_[t][col_num_] = col_data_[t];
	}else
		throw std::runtime_error("Col Data Has Been Out Of Range");
}

/// 画表格
void Fl_Output_Table_Row::draw_cell(Fl_Table::TableContext context_,int r, int c, int x, int y, int w, int h)
{
	static std::string str_;
	static char buf_[64];
	switch (context_)
	{
	case CONTEXT_STARTPAGE:fl_font(FL_COURIER_BOLD, font_size_); break;
	case CONTEXT_COL_HEADER:
		fl_push_clip(x, y, w, h);
		{
			fl_draw_box(FL_THIN_UP_BOX, x, y, w, h, col_header_color());
			fl_color(FL_WHITE);
			fl_draw(col_name_[c].c_str(), x, y, w, h, FL_ALIGN_CENTER);
		}
		fl_pop_clip();
		break;
	case CONTEXT_ROW_HEADER:
		fl_push_clip(x, y, w, h);
		{
			fl_draw_box(FL_THIN_UP_BOX, x, y, w, h, col_header_color());
			fl_color(FL_WHITE);
			fl_draw(row_name_[r].c_str(), x, y, w, h, FL_ALIGN_CENTER);
		}
		fl_pop_clip();
		break;
	case CONTEXT_CELL:
		fl_push_clip(x, y, w, h);
		{
			fl_color(row_selected(r) ? sel_bg_color_ : FL_BLACK);
			// 制作矩形
			fl_rectf(x, y, w, h);
			// TEXT
			switch(color_set_ty_){
			case ROW_TYPE:
				fl_color(row_selected(r) ? sel_fg_color_ : order_color_[r%order_color_len_]);
				break;
			case COL_TYPE:
				fl_color(row_selected(r) ? sel_fg_color_ : order_color_[c%order_color_len_]);
				break;
			}
			fl_draw(data_[r][c].c_str(), x, y, w, h, FL_ALIGN_CENTER);
			// BORDER
			fl_color(FL_DARK_BLUE);
			fl_rect(x, y, w, h);
		}
		fl_pop_clip();
		break;
	case CONTEXT_TABLE:break;
	case CONTEXT_ENDPAGE:break;
	case CONTEXT_RC_RESIZE:break;
	case CONTEXT_NONE:break;
	}
}

int Fl_Output_Table_Row::getSelectRowNum()
{
	int total_row_ = Fl_Table_Row::rows();
	for(int t = 0;t < total_row_;++t)
	{
		if(row_selected(t))
			return t;
	}
	return -1;
}