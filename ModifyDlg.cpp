// ModifyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "想做个通讯录希望别坑了w.h"
#include "ModifyDlg.h"
#include "AddDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CModifyDlg dialog


CModifyDlg::CModifyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CModifyDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CModifyDlg)
	m_strModifyName = _T("");
	m_strModifyNumber = _T("");
	//}}AFX_DATA_INIT
}


void CModifyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CModifyDlg)
	DDX_Text(pDX, IDC_NAME, m_strModifyName);
	DDX_Text(pDX, IDC_NUMBER, m_strModifyNumber);
	//}}AFX_DATA_MAP
}

void CModifyDlg::SetValue(CString name,CString number)
{
	m_strModifyName=name;
	m_strModifyNumber=number;
}

BEGIN_MESSAGE_MAP(CModifyDlg, CDialog)
	//{{AFX_MSG_MAP(CModifyDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CModifyDlg message handlers


