// 想做个通讯录希望别坑了wDlg.h : header file
//

#if !defined(AFX_WDLG_H__23A7114C_DF7B_4F87_8F8C_7DA7A2CFEC0A__INCLUDED_)
#define AFX_WDLG_H__23A7114C_DF7B_4F87_8F8C_7DA7A2CFEC0A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CWDlg dialog

class CWDlg : public CDialog
{
// Construction
public:
	void refreshList(HTREEITEM parent);
	CWDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CWDlg)
	enum { IDD = IDD_W_DIALOG };
	CListCtrl	m_listPhone;
	CTreeCtrl	m_treePhone;
	CImageList  	m_imageList;

	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CWDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnAdd();
	afx_msg void OnDelete();
	afx_msg void OnSelchangedTree(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnRclickList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnModify();
	afx_msg void OnDblclkTree(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnGroupadd();
	afx_msg void OnGroupdel();
	afx_msg void OnFound();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WDLG_H__23A7114C_DF7B_4F87_8F8C_7DA7A2CFEC0A__INCLUDED_)
