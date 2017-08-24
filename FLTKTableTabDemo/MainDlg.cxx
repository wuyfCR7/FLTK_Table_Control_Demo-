#include "MainDlg.h"
#include "Icon.h"
#include <FL/Fl_Pixmap.H>
#include <FL/fl_ask.H>
#include <string>

MainDlg::MainDlg():
	window_(NULL),
	menubar_(NULL),
	tab_(NULL),
	child_result_(NULL)
{
}

MainDlg::~MainDlg()
{

}

void MainDlg::OnInitDialog()
{
	static Fl_Menu_Item menu_bar_item_[] = 
	{
		{"Start", NULL, NULL, NULL, FL_SUBMENU},
			{"Load File", NULL, callback_menu_bar, NULL, FL_MENU_DIVIDER},
			{"Other Operation", NULL, NULL, NULL, FL_SUBMENU},
				{"Add", NULL, callback_menu_bar, NULL},
				{"Get", NULL, callback_menu_bar, NULL},
				{"Make", NULL, callback_menu_bar, NULL},
				{NULL},
			{"Exit", NULL, callback_exit_window, this},
			{NULL},
		{"Config", NULL, NULL, NULL, FL_SUBMENU},
			{"OpenFire", NULL, callback_menu_bar, NULL},
			{"StopFire", NULL, callback_menu_bar, NULL},
			{NULL},
		{"Exit", NULL, callback_exit_window, this},
		{NULL}
	};

	/// Window
	window_ = new Fl_Window(10, 10, 800, 600, "FLTKTableTabDemo");
	window_->box(FL_UP_BOX);
	window_->begin();
	window_->callback(callback_exit_window, this);

	/// Menubar
	menubar_ = new Fl_Menu_Bar(0, 0, 800, 30);
	menubar_->menu(menu_bar_item_);
	menubar_->textfont(FL_COURIER_BOLD);

	/// Tab
	tab_ = new Fl_Tabs(10, 40, 780, 550);
	tab_->selection_color(FL_BLACK);
	tab_->labelcolor(FL_WHITE);
	tab_->labelfont(FL_COURIER_BOLD);
	tab_->box(FL_UP_BOX);
	tab_->end();
	tab_pos_x_ = 10; 
	tab_pos_y_ = 70;
	tab_pos_w_ = 780;
	tab_pos_h_ = 520;

	/// Tab×Ó½çÃæ
	child_result_ = new ChildResult(tab_pos_x_, tab_pos_y_, tab_pos_w_, tab_pos_h_, "Result", tab_);
	child_config_ = new ChildConfig(tab_pos_x_, tab_pos_y_, tab_pos_w_, tab_pos_h_, "Config", tab_);

	window_->end();
}

void MainDlg::show()
{
	static Fl_Pixmap PIXMAP_WINDOW(WINDOW_ICON_TRANSFORMER);
	static Fl_RGB_Image IMAGE_WINDOW(&PIXMAP_WINDOW, FL_WHITE);
	window_->default_icon(&IMAGE_WINDOW);
	window_->show();
}
	
MainDlg& MainDlg::GetInstance()
{
	return MainDlgInstanceTy::get_mutable_instance();
}

void MainDlg::callback_exit_window(Fl_Widget* w, void* v)
{
	MainDlg* dlg_ = static_cast<MainDlg*>(v);
	dlg_->window_->hide();
	dlg_->child_result_->join();
}

void MainDlg::callback_menu_bar(Fl_Widget* w, void* v)
{
	Fl_Menu_Bar* bar_ = (Fl_Menu_Bar*)w;
	auto item_ = bar_->mvalue();
	fl_alert(item_->label());
}