#include "MainDlg.h"
#include <FL/Fl.H>
#pragma comment(lib, "fltk.lib")
#pragma comment(lib, "FLTKOutPutRowTableLib.lib")
#pragma comment(lib, "FLTKVariantRowTableLib.lib")
int main()
{
	MainDlg::GetInstance().OnInitDialog();
	MainDlg::GetInstance().show();


	/// UI�߳�ȫ�ֱ�����ʼ��
	Fl::lock();
	Fl::unlock();

	Fl::run();
	return NULL;
}