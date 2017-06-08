#if !defined(AFX_GROUPADD_H__77687171_39E0_45CB_A6C7_D16ACABFB18D__INCLUDED_)
#define AFX_GROUPADD_H__77687171_39E0_45CB_A6C7_D16ACABFB18D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GroupAdd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CGroupAdd dialog

class CGroupAdd : public CDialog
{
// Construction
public:
	CGroupAdd(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CGroupAdd)
	enum { IDD = IDD_GROUPADD_DIALOG };
	CString	m_strGroupName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGroupAdd)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CGroupAdd)
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GROUPADD_H__77687171_39E0_45CB_A6C7_D16ACABFB18D__INCLUDED_)
