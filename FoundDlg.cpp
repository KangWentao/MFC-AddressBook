// FoundDlg.cpp : implementation file
//

#include "stdafx.h"
#include "想做个通讯录希望别坑了w.h"
#include "FoundDlg.h"
#include "afxcmn.h"
#include "ShowDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFoundDlg dialog


CFoundDlg::CFoundDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CFoundDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CFoundDlg)
	m_strFoundName = _T("");
	//}}AFX_DATA_INIT
}


void CFoundDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CFoundDlg)
	DDX_Text(pDX, IDC_FOUND, m_strFoundName);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CFoundDlg, CDialog)
	//{{AFX_MSG_MAP(CFoundDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFoundDlg message handlers

void CFoundDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void CFoundDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}



/*HTREEITEM FindItem(HTREEITEM item, CString m_strFoundName)
{
	HTREEITEM hfind;   
	if(item == NULL)   
		return NULL;   
	while(item!=NULL)   
	{   
		if(GetItemText(item) == m_strFoundName)   
			return item;   
		if(ItemHasChildren(item))   
		{   
			item = GetChildItem(item);  
			hfind = FindItem(item,m_strFoundName);   
			if(hfind)   
			{   
				return hfind;   
			}   
			else 
				item = GetNextSiblingItem(GetParentItem(item));   
		}   
		else
		{ 
			item = GetNextSiblingItem(item);   
		}   
	}   
	return item;  
}*/
