/* 
* FLTK控件展示表格LIB
* 能够自由添加和删除行元素
* 控件的第一列为CHECK
* 吴云峰 20170904
*/
#ifndef _FLTK_FLEX_VARIANT_ROW_TABLE_H_
#define _FLTK_FLEX_VARIANT_ROW_TABLE_H_
#if _MSC_VER > 1000
#pragma once
#endif

#include <list>
#include <vector>
#include <string>
#include <cstdint>
#include <Fl\Fl_Table_Row.H>

class Fl_Flex_Variant_Table_Row :public Fl_Table_Row
{
public:

	/// 着色类型:[行顺序着色 | 列顺序着色]
	enum ColorSetType
	{
		ROW_TYPE, 
		COL_TYPE
	};

	/// 列控件类型
	/*
	* TEXT-->Fl_Output
	* EDIT-->Fl_Input
	* BUTTON-->Fl_Button
	* CHECK-->Fl_Check_Button
	* RADIO-->Fl_Round_Button
	* POPUPMENU-->Fl_Choice
	*/
	enum UIType
	{
		TEXT,
		EDIT,
		BUTTON,
		CHECK,
		RADIO,
		POPUPMENU
	};

private:

	/// 显示
	int rowamount_;
	int colamount_;
	/* 
	* 每行控件的状态
	* -1-需要删除的状态 1-需要保持的状态
	*/
	std::list<int> status_;
	std::list<std::vector<void*>> data_;

	std::vector<std::string> col_name_;
	std::vector<std::string> row_name_;
	std::vector<int> col_width_;
	std::vector<Fl_Flex_Variant_Table_Row::UIType> col_type_;

	/// 顺序颜色
	std::vector<Fl_Color> order_color_;
	int order_color_len_;

	/// 着色类型
	ColorSetType color_set_ty_;

	/// 字体大小
	Fl_Fontsize font_size_;

private:

	/// 控件的更新
	void UpdateCtrlDlg();

public:
	/// 构造析构
	Fl_Flex_Variant_Table_Row
		(
		int,         // X position
		int,         // Y position
		int,         // W width
		int,         // H height
		const char*, // label 
		std::vector<UIType>&,        // UI控件类型
		std::vector<int>&,           // UI控件宽度
		ColorSetType ty_ = COL_TYPE  // 着色类型
		);
	~Fl_Flex_Variant_Table_Row();

	/// 行列的自主添加和删除
	void AddLines(uint32_t);
	void RmLines();

	/// 设置宽度[所有列]
	void setColWidth(int);
	void setRowWidth(int);

	/// 设置宽度[指定列]
	void setColWidth
		(
		int, // 列索引[0开始]
		int  // 宽度
		);

	/// 设置所有列宽度
	void setColWidth(std::vector<int>&);
	void setColWidth();

	/// 获取单元格数据
	void getColData
		(
		int,                 // 列索引[0开始]
		std::vector<void*>&  // 获取的控件句柄
		);
	void getRowData
		(
		int,                 // 行索引[0开始]
		std::vector<void*>&  // 获取的控件句柄
		);
	std::vector<void*> getColData(int);
	std::vector<void*> getRowData(int);

	void* getCellData
		(
		int, // 行索引[0开始]
		int  // 列索引[0开始]
		);

	/// 获取列控件类型
	Fl_Flex_Variant_Table_Row::UIType              getColCtrlType(int);
	std::vector<Fl_Flex_Variant_Table_Row::UIType> getColCtrlType();

	/// 设置行列名称
	void setRowName(std::vector<std::string>&);
	void setColName(std::vector<std::string>&);

	/// 返回选中的行,如未选中则返回-1
	int getSelectRowNum();

	/// 获取RowAmount与ColAmount
	int GetRowAmount() const;
	int GetColAmount() const;

private:
	void draw_cell(TableContext context, int R, int C, int X, int Y, int W, int H);
};











#endif