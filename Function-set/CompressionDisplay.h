#pragma once


// CCompressionDisplay �Ի���

class CCompressionDisplay : public CDialogEx
{
	DECLARE_DYNAMIC(CCompressionDisplay)

public:
	CCompressionDisplay(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CCompressionDisplay();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
