// CompressionDisplay.cpp : 实现文件
//

#include "stdafx.h"
#include "Function-set.h"
#include "CompressionDisplay.h"
#include "afxdialogex.h"


// CCompressionDisplay 对话框

IMPLEMENT_DYNAMIC(CCompressionDisplay, CDialogEx)

CCompressionDisplay::CCompressionDisplay(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCompressionDisplay::IDD, pParent)
{

}

CCompressionDisplay::~CCompressionDisplay()
{
}

void CCompressionDisplay::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCompressionDisplay, CDialogEx)
END_MESSAGE_MAP()


// CCompressionDisplay 消息处理程序
