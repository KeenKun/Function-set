
// Function-set.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CFunctionsetApp: 
// �йش����ʵ�֣������ Function-set.cpp
//

class CFunctionsetApp : public CWinApp
{
public:
	CFunctionsetApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CFunctionsetApp theApp;