// ShowDlg.cpp : implementation file
//

#include "stdafx.h"
#include "afxwin.h"
#include "想做个通讯录希望别坑了w.h"
#include "ShowDlg.h"
#include "AddDlg.h"
#include "ModifyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CShowDlg dialog


CShowDlg::CShowDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CShowDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CShowDlg)
	m_strName = _T("");
	m_strNumber = _T("");
	//}}AFX_DATA_INIT
}


void CShowDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CShowDlg)
	DDX_Text(pDX, IDC_EDITNAME, m_strName);
	DDX_Text(pDX, IDC_EDITNUM, m_strNumber);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CShowDlg, CDialog)
	//{{AFX_MSG_MAP(CShowDlg)
	ON_BN_CLICKED(IDC_OK, OnOk)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CShowDlg message handlers

void CShowDlg::SetValue(CString name,CString number)
{
	m_strName=name;
	m_strNumber=number;
}



void CShowDlg::OnCancel()
{
	DestroyWindow();
}

void CShowDlg::PostNcDestroy() 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CDialog::PostNcDestroy();
	delete this;
}

void CShowDlg::OnOk() 
{
	CDialog::OnOK();
}


