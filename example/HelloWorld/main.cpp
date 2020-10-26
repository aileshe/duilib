#include "stdafx.h"
#include "main.h"

#pragma comment(lib, "Gdi32.lib")

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	// ���ô��ڹ�����ʵ��
	CPaintManagerUI::SetInstance(hInstance);

	// ����Ƥ����Ĭ��·��
	CPaintManagerUI::SetCurrentPath(CPaintManagerUI::GetInstancePath());
	CPaintManagerUI::SetResourcePath(_T("theme"));

	// ��������
	MainWndFrame* pMainWndFrame = new MainWndFrame;
	pMainWndFrame->Create(nullptr, MainWndFrame::kClassName, UI_WNDSTYLE_DIALOG, 0);
	pMainWndFrame->CenterWindow();
	pMainWndFrame->ShowWindow();

	CPaintManagerUI::MessageLoop();

	if (nullptr != pMainWndFrame)
	{
		delete pMainWndFrame;
	}

	return 0;
}