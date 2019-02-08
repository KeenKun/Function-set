#pragma once


// CCompressionDisplay 对话框

class CCompressionDisplay : public CDialogEx
{
	DECLARE_DYNAMIC(CCompressionDisplay)

public:
	CCompressionDisplay(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CCompressionDisplay();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
