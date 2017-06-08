; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CWDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "想做个通讯录希望别坑了w.h"

ClassCount=8
Class1=CWApp
Class2=CWDlg
Class3=CAboutDlg

ResourceCount=9
Resource1=IDD_GROUPADD_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Class4=CAddDlg
Resource4=IDD_W_DIALOG
Resource5=IDD_ADD_DIALOG
Class5=CModifyDlg
Resource6=IDD_MODIFY_DIALOG
Class6=CShowDlg
Resource7=IDD_SHOW_DIALOG
Class7=CGroupAdd
Resource8=IDD_FOUND_DIALOG
Class8=CFoundDlg
Resource9=IDR_MENU1

[CLS:CWApp]
Type=0
HeaderFile=想做个通讯录希望别坑了w.h
ImplementationFile=想做个通讯录希望别坑了w.cpp
Filter=N

[CLS:CWDlg]
Type=0
HeaderFile=想做个通讯录希望别坑了wDlg.h
ImplementationFile=想做个通讯录希望别坑了wDlg.cpp
Filter=D
LastObject=IDC_TREE
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=想做个通讯录希望别坑了wDlg.h
ImplementationFile=想做个通讯录希望别坑了wDlg.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_W_DIALOG]
Type=1
Class=CWDlg
ControlCount=10
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,button,1342177287
Control3=IDC_TREE,SysTreeView32,1350631431
Control4=IDC_ADD,button,1342242816
Control5=IDC_DELETE,button,1342242816
Control6=IDC_STATIC,button,1342177287
Control7=IDC_LIST,SysListView32,1350631425
Control8=IDC_GROUPADD,button,1342242816
Control9=IDC_GROUPDEL,button,1342242816
Control10=IDC_FOUND,button,1342242816

[DLG:IDD_ADD_DIALOG]
Type=1
Class=CAddDlg
ControlCount=7
Control1=IDC_STATIC,static,1342308352
Control2=IDC_NAME,edit,1350631552
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,button,1342177287
Control5=IDC_NUMBER,edit,1350631552
Control6=IDC_OK,button,1342242816
Control7=IDC_CANCEL,button,1342242816

[CLS:CAddDlg]
Type=0
HeaderFile=AddDlg.h
ImplementationFile=AddDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_OK

[MNU:IDR_MENU1]
Type=1
Class=?
Command1=ID_MODIFY
CommandCount=1

[DLG:IDD_MODIFY_DIALOG]
Type=1
Class=CModifyDlg
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_NAME,edit,1350631552
Control6=IDC_NUMBER,edit,1350631552

[CLS:CModifyDlg]
Type=0
HeaderFile=ModifyDlg.h
ImplementationFile=ModifyDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CModifyDlg

[DLG:IDD_SHOW_DIALOG]
Type=1
Class=CShowDlg
ControlCount=6
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,static,1342308352
Control3=IDC_EDITNAME,edit,1350631552
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDITNUM,edit,1350631552
Control6=IDC_OK,button,1342242816

[CLS:CShowDlg]
Type=0
HeaderFile=ShowDlg.h
ImplementationFile=ShowDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CShowDlg
VirtualFilter=dWC

[DLG:IDD_GROUPADD_DIALOG]
Type=1
Class=CGroupAdd
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552

[CLS:CGroupAdd]
Type=0
HeaderFile=GroupAdd.h
ImplementationFile=GroupAdd.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDCANCEL

[DLG:IDD_FOUND_DIALOG]
Type=1
Class=CFoundDlg
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,button,1342177287
Control5=IDC_FOUND,edit,1350631552

[CLS:CFoundDlg]
Type=0
HeaderFile=FoundDlg.h
ImplementationFile=FoundDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_FOUND
VirtualFilter=dWC

