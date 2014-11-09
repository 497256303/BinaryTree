// BinaryTreeDlg.h : header file
//

#if !defined(AFX_BINARYTREEDLG_H__6916145A_805A_4FB6_A8C6_CCF9744FC220__INCLUDED_)
#define AFX_BINARYTREEDLG_H__6916145A_805A_4FB6_A8C6_CCF9744FC220__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CBinaryTreeDlg dialog

class CBinaryTreeDlg : public CDialog
{
protected:
	typedef struct BiTNode
	{
		char data;
		struct BiTNode *lchild,*rchild;       //���Һ���ָ��
		CPoint LT;                         //��Ҫ���Ľڵ�����Ͻǵ�����
}BiTNode,*BiTree;
// Construction
public:
	CBinaryTreeDlg(CWnd* pParent = NULL);	// standard constructor
	void setCH();//��������ַ���Cstring����ת����char*
	void CreateBiTree(BiTree&T,int nodeType,CPoint location);//����������
	void disptree(BiTree&p);//Ƕ�����ű�ʾ������
	int depth(BiTree&p);//������������
	int leaf(BiTree&p);//���������Ҷ�ӽڵ���
	void drawObject(COLORREF nodecolor,char text,COLORREF textcolor,CPoint LF);//���ڵ����ɫ��λ�á��ڵ��ʾ�ı����ı���ɫ
	void drawLine(CPoint start,CPoint over);//������ʵ����ֹ���껭ֱ��  
	void drawTree(BiTree&T);//�����������������
	void preorder(BiTree&p);//�������
	void inorder(BiTree&p);//�������
	void postorder(BiTree&p);//��������
	void playMusic() ;       //��������
	int judgeTree();//�ж�������ǲ���һ����
// Dialog Data
	//{{AFX_DATA(CBinaryTreeDlg)
	enum { IDD = IDD_BINARYTREE_DIALOG };
	CListBox	output;
	CListBox	display;
	CString	input;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBinaryTreeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation

protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CBinaryTreeDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCreateTree();
	afx_msg void OnChangeInput();
	afx_msg void Ondisptree();
	afx_msg void OnExit();
	afx_msg void Ondepth();
	afx_msg void OnButton6();
	afx_msg void Onleaf();
	afx_msg void Onpreorder();
	afx_msg void Oninorder();
	afx_msg void Onpostorder();
	afx_msg void Onversion();
	afx_msg void Onhelp();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	char *ch;
	int i; 
	BiTree bitree;
	CString str;
	//CreateBiTree(bitree);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BINARYTREEDLG_H__6916145A_805A_4FB6_A8C6_CCF9744FC220__INCLUDED_)
