// AddDlg.cpp : implementation file
//

#include "stdafx.h"
#include "想做个通讯录希望别坑了w.h"
#include "AddDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAddDlg dialog


CAddDlg::CAddDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAddDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAddDlg)
	m_strName = _T("");
	m_strNumber = _T("");
	//}}AFX_DATA_INIT
}


void CAddDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAddDlg)
	DDX_Text(pDX, IDC_NAME, m_strName);
	DDX_Text(pDX, IDC_NUMBER, m_strNumber);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAddDlg, CDialog)
	//{{AFX_MSG_MAP(CAddDlg)
	ON_BN_CLICKED(IDC_OK, OnOk)
	ON_BN_CLICKED(IDC_CANCEL, OnCancel)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddDlg message handlers

void CAddDlg::OnOk() 
{
	UpdateData(TRUE);
	if(m_strName == "" || m_strNumber== "")
	{
		AfxMessageBox("信息不全，重新输入！");
		return;
	}
	CDialog::OnOK();
}

void CAddDlg::OnCancel() 
{
	CDialog::OnCancel();
}
