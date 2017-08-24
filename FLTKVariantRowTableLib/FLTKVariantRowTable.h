/* 
* FLTK�ؼ�չʾ���LIB
* ���Ʒ� 20170823
*/
#ifndef _FLTK_VARIANT_ROW_TABLE_H_
#define _FLTK_VARIANT_ROW_TABLE_H_
#if _MSC_VER > 1000
#pragma once
#endif

#include <vector>
#include <string>
#include <Fl\Fl_Table_Row.H>
#include <boost\multi_array.hpp>

class Fl_Variant_Table_Row :public Fl_Table_Row
{
public:

	/// ��ɫ����:[��˳����ɫ | ��˳����ɫ]
	enum ColorSetType
	{
		ROW_TYPE, 
		COL_TYPE
	};

	/// �пؼ�����
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

	/// ��ʾ
	int rowamount_;
	int colamount_;
	boost::multi_array<void*, 2> data_;
	std::vector<std::string> col_name_;
	std::vector<std::string> row_name_;
	std::vector<int> col_width_;
	std::vector<Fl_Variant_Table_Row::UIType> col_type_;

	/// ˳����ɫ
	std::vector<Fl_Color> order_color_;
	int order_color_len_;

	/// ��ɫ����
	ColorSetType color_set_ty_;

	/// �����С
	Fl_Fontsize font_size_;

private:

	/// ��ʼ���ؼ�
	void OnInitCtrlDlg(int, int);

public:
	/// ��������
	Fl_Variant_Table_Row
		(
		int,         // X position
		int,         // Y position
		int,         // W width
		int,         // H height
		const char*, // label 
		std::vector<UIType>&,        // UI�ؼ�����
		std::vector<int>&,           // UI�ؼ����
		int,                         // Row Amount
		ColorSetType ty_ = COL_TYPE  // ��ɫ����
		);
	~Fl_Variant_Table_Row();

	/// ���ÿ��[������]
	void setColWidth(int);
	void setRowWidth(int);

	/// ���ÿ��[ָ����]
	void setColWidth
		(
		int, // ������[0��ʼ]
		int  // ���
		);

	/// ���������п��
	void setColWidth(std::vector<int>&);
	void setColWidth();

	/// ��ȡ��Ԫ������
	void getColData
		(
		int,                 // ������[0��ʼ]
		std::vector<void*>&  // ��ȡ�Ŀؼ����
		);
	void getRowData
		(
		int,                 // ������[0��ʼ]
		std::vector<void*>&  // ��ȡ�Ŀؼ����
		);
	std::vector<void*> getColData(int);
	std::vector<void*> getRowData(int);

	void* getCellData
		(
		int, // ������[0��ʼ]
		int  // ������[0��ʼ]
		);

	/// ��ȡ�пؼ�����
	Fl_Variant_Table_Row::UIType              getColCtrlType(int);
	std::vector<Fl_Variant_Table_Row::UIType> getColCtrlType();

	/// ������������
	void setRowName(std::vector<std::string>&);
	void setColName(std::vector<std::string>&);

	/// ����ѡ�е���,��δѡ���򷵻�-1
	int getSelectRowNum();

private:
	void draw_cell(TableContext context, int R, int C, int X, int Y, int W, int H);
};











#endif