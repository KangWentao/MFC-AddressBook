// 想做个通讯录希望别坑了w.h : main header file for the 想做个通讯录希望别坑了W application
//

#if !defined(AFX_W_H__27C4D089_7A3E_4BB0_B15C_F527CE32039C__INCLUDED_)
#define AFX_W_H__27C4D089_7A3E_4BB0_B15C_F527CE32039C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CWApp:
// See 想做个通讯录希望别坑了w.cpp for the implementation of this class
//

class CWApp : public CWinApp
{
public:
	CWApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CWApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_W_H__27C4D089_7A3E_4BB0_B15C_F527CE32039C__INCLUDED_)
