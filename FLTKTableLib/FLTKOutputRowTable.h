/* 
* FLTKչʾ���LIB
* ���Ʒ� 20170823
* ע�������ƺ������������������,���ڲ�������,��Ҫ��������е���,����ʹ��Ӣ��
*/
#ifndef _FLTK_OUTPUT_ROW_TABLE_H_
#define _FLTK_OUTPUT_ROW_TABLE_H_
#if _MSC_VER > 1000
#pragma once
#endif

#include <string>
#include <vector>
#include <Fl\fl_draw.H>
#include <Fl\Fl_Table_Row.H>
#include <boost\multi_array.hpp>

class Fl_Output_Table_Row :public Fl_Table_Row
{
public:

	/// ��ɫ����:[��˳����ɫ | ��˳����ɫ]
	enum ColorSetType
	{
		ROW_TYPE, 
		COL_TYPE
	};

private:

	/// ѡ���б�����ɫ��ǰ����ɫ
	Fl_Color sel_bg_color_;
	Fl_Color sel_fg_color_;

	/// ��ʾ����
	boost::multi_array<std::string, 2> data_;
	std::vector<std::string> col_name_;
	std::vector<std::string> row_name_;

	/// ˳����ɫ
	std::vector<Fl_Color> order_color_;
	int order_color_len_;

	/// ��ɫ����
	ColorSetType color_set_ty_;

	/// �����С
	Fl_Fontsize font_size_;

public:
	/// ��������
	Fl_Output_Table_Row(int, int, int, int, const char* lab_ = NULL);
	~Fl_Output_Table_Row();

	/// ��ɫ˳������
	void setColorSetType(Fl_Output_Table_Row::ColorSetType);

	/// ѡ������ɫ����
	void setSelectedBgColor(Fl_Color);
	void setSelectedFgColor(Fl_Color);

	/// ���ÿ��
	void setColWidth(int);
	void setRowWidth(int);

	/// ���������С
	void setFontSize(Fl_Fontsize);

	/// ��������
	void setDefaultData();
	void setData(boost::multi_array<std::string, 2>&);
	void setData
		(
		boost::multi_array<std::string, 2>&, // ����
		std::vector<std::string>&,			 // ������ 
		std::vector<std::string>&            // ������
		);     

	/// ���õ�Ԫ������
	void setCellData
		(
		int,        // �����(0��ʼ)
		int,        // �����(0��ʼ)
		std::string // ����
		);

	/// ������������
	void setRowData(int, std::vector<std::string>&);
	void setColData(int, std::vector<std::string>&);


	/// ����ѡ�е���,��δѡ���򷵻�-1
	int getSelectRowNum();

private:
	/// �����
	void draw_cell(Fl_Table::TableContext context_, int r = 0, int c = 0, int x = 0, int y = 0, int w = 0, int h = 0);
};










#endif