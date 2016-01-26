
// FontsDlg.h : header file
//

#pragma once
#include "afxwin.h"

int CALLBACK EnumFontFamProc(LPENUMLOGFONT lpelf,
	LPNEWTEXTMETRIC lpntm, DWORD nFontType, long lParam);

// CFontsDlg dialog
class CFontsDlg : public CDialogEx
{
// Construction
public:
	CFontsDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FONTS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_ctlDisplayText;
	CString m_strDisplayText;
	CListBox m_ctlFontList;
	CString m_strFontName;
	afx_msg void OnClickedExit();
private:
	void FillFontList();
};
