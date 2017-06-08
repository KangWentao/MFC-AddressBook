#if !defined(AFX_SHOWDLG_H__5D6B642C_797B_46FD_A6A0_8FBE8F34E6F2__INCLUDED_)
#define AFX_SHOWDLG_H__5D6B642C_797B_46FD_A6A0_8FBE8F34E6F2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ShowDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CShowDlg dialog

class CShowDlg : public CDialog
{
// Construction
public:
	void SetValue(CString name,CString number);
	CShowDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CShowDlg)
	enum { IDD = IDD_SHOW_DIALOG };
	CString	m_strName;
	CString	m_strNumber;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CShowDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void PostNcDestroy();
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CShowDlg)
	afx_msg void OnOk();
	afx_msg void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHOWDLG_H__5D6B642C_797B_46FD_A6A0_8FBE8F34E6F2__INCLUDED_)
