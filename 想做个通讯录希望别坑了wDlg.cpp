// 想做个通讯录希望别坑了wDlg.cpp : implementation file
//

#include "stdafx.h"
#include "afxwin.h"
#include "想做个通讯录希望别坑了w.h"
#include "想做个通讯录希望别坑了wDlg.h"
#include "AddDlg.h"
#include "ModifyDlg.h"
#include "ShowDlg.h"
#include "GroupAdd.h"
#include "FoundDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();
	
	// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA
	
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL
	
	// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
//{{AFX_MSG_MAP(CAboutDlg)
// No message handlers
//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWDlg dialog

CWDlg::CWDlg(CWnd* pParent /*=NULL*/)
: CDialog(CWDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CWDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CWDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CWDlg)
	DDX_Control(pDX, IDC_LIST, m_listPhone);
	DDX_Control(pDX, IDC_TREE, m_treePhone);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CWDlg, CDialog)
//{{AFX_MSG_MAP(CWDlg)
ON_WM_SYSCOMMAND()
ON_WM_PAINT()
ON_WM_QUERYDRAGICON()
ON_BN_CLICKED(IDC_ADD, OnAdd)
ON_BN_CLICKED(IDC_DELETE, OnDelete)
ON_NOTIFY(TVN_SELCHANGED, IDC_TREE, OnSelchangedTree)
ON_NOTIFY(NM_RCLICK, IDC_LIST, OnRclickList)
ON_COMMAND(ID_MODIFY, OnModify)
	ON_NOTIFY(NM_DBLCLK, IDC_TREE, OnDblclkTree)
	ON_BN_CLICKED(IDC_GROUPADD, OnGroupadd)
	ON_BN_CLICKED(IDC_GROUPDEL, OnGroupdel)
	ON_BN_CLICKED(IDC_FOUND, OnFound)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWDlg message handlers

BOOL CWDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	
	// Add "About..." menu item to system menu.
	
	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);
	
	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}
	
	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	HICON hIcon[3];
	
	m_imageList.Create(16,16,ILC_COLOR,3,3);
	hIcon[0]=AfxGetApp()->LoadIcon(IDI_ICON1);
	hIcon[1]=AfxGetApp()->LoadIcon(IDI_ICON2);
	hIcon[2]=AfxGetApp()->LoadIcon(IDI_ICON3);
	for(int n=0;n<3;n++)
		m_imageList.Add(hIcon[n]);
	m_treePhone.SetImageList(&m_imageList,TVSIL_NORMAL);
	
	HTREEITEM hRoot=m_treePhone.InsertItem("电话簿分组",0,0,TVI_ROOT);
	HTREEITEM hFamily=m_treePhone.InsertItem("家庭成员",1,1,hRoot);
	HTREEITEM hFriend=m_treePhone.InsertItem("朋友",1,1,hRoot);
	HTREEITEM hClassMate=m_treePhone.InsertItem("同学",1,1,hRoot);
	HTREEITEM h1=m_treePhone.InsertItem("Member1",2,2,hFamily);
	HTREEITEM h2=m_treePhone.InsertItem("Member2",2,2,hFriend);
	HTREEITEM h3=m_treePhone.InsertItem("Member3",2,2,hClassMate);
	CString *pString=new CString("041212345678");
	m_treePhone.SetItemData(h1,(DWORD)pString);
	pString=new CString("041287654321");
	m_treePhone.SetItemData(h2,(DWORD)pString);
	pString=new CString("041209876655");
	m_treePhone.SetItemData(h3,(DWORD)pString);
	m_listPhone.InsertColumn(0,"姓名",LVCFMT_LEFT,100);
	m_listPhone.InsertColumn(1,"电话号码",LVCFMT_LEFT,120);
	m_listPhone.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CWDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CWDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting
		
		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);
		
		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;
		
		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CWDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CWDlg::OnAdd() 
{
	HTREEITEM selItem=m_treePhone.GetSelectedItem();
	if(selItem==NULL)
		return;
	if(selItem==m_treePhone.GetRootItem())
		return;
	DWORD data=m_treePhone.GetItemData(selItem);
	if (data==NULL)
	{
		CAddDlg dlg;
		if(dlg.DoModal()==IDOK)
		{
			HTREEITEM item=m_treePhone.InsertItem(dlg.m_strName,2,2,selItem);
			CString *pString=new  CString(dlg.m_strNumber);
			m_treePhone.SetItemData(item,(DWORD)pString);
			refreshList(selItem);
		}
	}
}

void CWDlg::OnDelete() 
{
	HTREEITEM selItem=m_treePhone.GetSelectedItem();
	if(selItem==NULL)
		return;
	if(selItem==m_treePhone.GetRootItem())
		return;
	DWORD m=m_treePhone.GetItemData(selItem);
	if(m!=NULL)
	{
		if(AfxMessageBox("确定要删除"+m_treePhone.GetItemText(selItem)+"?",MB_OKCANCEL)==IDOK)
		{
			HTREEITEM parent=m_treePhone.GetParentItem(selItem);
			CString *pString=(CString*)m;
			delete pString;
			m_treePhone.DeleteItem(selItem);
			refreshList(parent);
		}
	}
}

void CWDlg::OnSelchangedTree(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_TREEVIEW* pNMTreeView = (NM_TREEVIEW*)pNMHDR;
	HTREEITEM selItem=m_treePhone.GetSelectedItem();
	if(selItem==m_treePhone.GetRootItem())
		return;
	DWORD m=m_treePhone.GetItemData(selItem);
	if(m==NULL)
	{
		refreshList(selItem);
	}
	*pResult = 0;
}

void CWDlg::refreshList(HTREEITEM parent)
{
	m_listPhone.DeleteAllItems();
	int index=0;
	HTREEITEM child=m_treePhone.GetChildItem(parent);
	while(child!=NULL)
	{
		DWORD phone=m_treePhone.GetItemData(child);
		CString *pString=(CString*)phone;
		m_listPhone.InsertItem(index,m_treePhone.GetItemText(child));
		m_listPhone.SetItemText(index,1,*pString);
		index++;
		child=m_treePhone.GetNextSiblingItem(child);
	}
}

void CWDlg::OnRclickList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	CMenu menu;
	menu.LoadMenu(IDR_MENU1);
	CMenu*pMenu=menu.GetSubMenu(0);
	POINT p;
	GetCursorPos(&p);
	pMenu->TrackPopupMenu(TPM_LEFTALIGN|TPM_RIGHTBUTTON,p.x,p.y,this);
	pMenu->DestroyMenu();
	
	*pResult = 0;
}

void CWDlg::OnModify() 
{
	int i;
	for(i=0;i<m_listPhone.GetItemCount();i++)
		if(m_listPhone.GetItemState(i,LVIS_SELECTED)==LVIS_SELECTED)
			break;
	if(i==m_listPhone.GetItemCount())
		return;

	CString name=m_listPhone.GetItemText(i,0);
	CString number=m_listPhone.GetItemText(i,1);
	CModifyDlg dlg;
	dlg.SetValue(name,number);
	if(dlg.DoModal()==IDOK)
	{
		CString newName=dlg.m_strModifyName;
		CString newNumber=dlg.m_strModifyNumber;
		HTREEITEM child=m_treePhone.GetChildItem(m_treePhone.GetSelectedItem());
		while(child)
		{
			if(name==m_treePhone.GetItemText(child))
			{
				m_treePhone.SetItemText(child,newName);
				CString *pString=(CString*)m_treePhone.GetItemData(child);
				*pString=newNumber;
				break;
			}
			child=m_treePhone.GetNextSiblingItem(child);
		}
		m_listPhone.SetItemText(i,0,newName);
		m_listPhone.SetItemText(i,1,newNumber);
		
	}
}

void CWDlg::OnDblclkTree(NMHDR* pNMHDR, LRESULT* pResult) 
{
	HTREEITEM selItem=m_treePhone.GetSelectedItem();
	if(selItem)
	{
		CString name=m_treePhone.GetItemText(selItem);
		CString *pNumber=(CString *)m_treePhone.GetItemData(selItem);
		if(pNumber!=NULL)
		{
			CShowDlg *pDlg=new CShowDlg();
			pDlg->SetValue(name,*pNumber);
			pDlg->Create(IDD_SHOW_DIALOG,this);
			pDlg->ShowWindow(SW_SHOW);
		}
	}

	*pResult = 0;
}


void CWDlg::OnGroupadd() 
{
	HTREEITEM selItem=m_treePhone.GetRootItem();
	CGroupAdd Dlg;
	if (Dlg.DoModal()==IDOK)
	{
		HTREEITEM item=m_treePhone.InsertItem(Dlg.m_strGroupName,1,1,selItem);
		
	}
	
}

void CWDlg::OnGroupdel() 
{
	HTREEITEM selItem=m_treePhone.GetSelectedItem();
	if(selItem==NULL)
		return;
	if(selItem==m_treePhone.GetRootItem())
		return;
	if(AfxMessageBox("确定要删除分组“"+m_treePhone.GetItemText(selItem)+"”及分组下的所有联系人吗?",MB_OKCANCEL)==IDOK)
	{
		m_treePhone.DeleteItem(selItem);
	}

}

void CWDlg::OnFound() 
{
	// TODO: Add your control notification handler code here
	CFoundDlg dlg;
	dlg.DoModal();
	if(IDOK)
	{
		int i;
		for(i=0;i<m_listPhone.GetItemCount();i++)
		{
			if(dlg.m_strFoundName==m_listPhone.GetItemText(i,0))
			{
				CString Foundname=m_listPhone.GetItemText(i,0);
				CString Foundnumber=m_listPhone.GetItemText(i,1);
				CModifyDlg dlga;
				dlga.SetValue(Foundname,Foundnumber);
				dlga.DoModal();
			}
			else
			{
				AfxMessageBox("联系人未找到");
			}
		}
	}
}
