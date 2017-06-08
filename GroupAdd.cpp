// GroupAdd.cpp : implementation file
//

#include "stdafx.h"
#include "想做个通讯录希望别坑了w.h"
#include "GroupAdd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGroupAdd dialog


CGroupAdd::CGroupAdd(CWnd* pParent /*=NULL*/)
	: CDialog(CGroupAdd::IDD, pParent)
{
	//{{AFX_DATA_INIT(CGroupAdd)
	m_strGroupName = _T("");
	//}}AFX_DATA_INIT
}


void CGroupAdd::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CGroupAdd)
	DDX_Text(pDX, IDC_EDIT1, m_strGroupName);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CGroupAdd, CDialog)
	//{{AFX_MSG_MAP(CGroupAdd)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGroupAdd message handlers

void CGroupAdd::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(TRUE);
	if(m_strGroupName=="")
	{
		AfxMessageBox("请输入新分组的名称");
		return;
	}
	CDialog::OnOK();
}

void CGroupAdd::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
