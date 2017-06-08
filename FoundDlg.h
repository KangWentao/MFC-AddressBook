#if !defined(AFX_FOUNDDLG_H__0C84FE85_64E4_437B_A03E_9B554BB250C0__INCLUDED_)
#define AFX_FOUNDDLG_H__0C84FE85_64E4_437B_A03E_9B554BB250C0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FoundDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CFoundDlg dialog

class CFoundDlg : public CDialog
{
// Construction
public:
	HTREEITEM FindItem(HTREEITEM item, CString m_strFoundName);
	CFoundDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CFoundDlg)
	enum { IDD = IDD_FOUND_DIALOG };
	CString	m_strFoundName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFoundDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CFoundDlg)
	virtual void OnCancel();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FOUNDDLG_H__0C84FE85_64E4_437B_A03E_9B554BB250C0__INCLUDED_)
