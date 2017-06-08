#if !defined(AFX_MODIFYDLG_H__8B70E717_E35D_485A_B131_B75299D12B39__INCLUDED_)
#define AFX_MODIFYDLG_H__8B70E717_E35D_485A_B131_B75299D12B39__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ModifyDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CModifyDlg dialog

class CModifyDlg : public CDialog
{
// Construction
public:
	void SetValue(CString name,CString number);
	CModifyDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CModifyDlg)
	enum { IDD = IDD_MODIFY_DIALOG };
	CString		m_strName;
	CString		m_strNumber;
	CString	m_strModifyName;
	CString	m_strModifyNumber;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CModifyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CModifyDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MODIFYDLG_H__8B70E717_E35D_485A_B131_B75299D12B39__INCLUDED_)
