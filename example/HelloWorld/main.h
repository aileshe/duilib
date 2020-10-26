#pragma once
#include "stdafx.h"

class MainWndFrame : public WindowImplBase
{
protected:
	virtual CDuiString GetSkinFolder() override;			 // ��ȡƤ���ļ���Ŀ¼������ж��Ŀ¼�����������
	virtual CDuiString GetSkinFile() override;				 // ����Ƥ���ļ�����
	virtual LPCTSTR GetWindowClassName(void) const override; // ���õ�ǰ���ڵ� class name

public:
	static const LPCTSTR kClassName;
	static const LPCTSTR kMainWndFrame;
};

DuiLib::CDuiString MainWndFrame::GetSkinFolder()
{
	// GetInstancePath �ӿڷ���Ĭ�ϵ�Ƥ���ļ�λ��
	// �� main ���������ǿ���ͨ�� SetResourcePath ������·��
	return m_PaintManager.GetInstancePath();
}

DuiLib::CDuiString MainWndFrame::GetSkinFile()
{
	// ��Ա���������Ƥ���ļ���
	return kMainWndFrame;
}

LPCTSTR MainWndFrame::GetWindowClassName(void) const
{
	// ��Ա��������Ĵ��� class name
	return kClassName;
}

const LPCTSTR MainWndFrame::kClassName = _T("main_wnd_frame");
const LPCTSTR MainWndFrame::kMainWndFrame = _T("main_wnd_frame.xml");
