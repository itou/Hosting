
// MFC01Dlg.h : �w�b�_�[ �t�@�C��
//

#pragma once


// CMFC01Dlg �_�C�A���O
class CMFC01Dlg : public CDialogEx
{
	// �R���X�g���N�V����
public:
	CMFC01Dlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^�[

	// �_�C�A���O �f�[�^
	enum { IDD = IDD_MFC01_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g
	// ...
	// Data member for the .NET User Control:
	CWinFormsControl<WindowsFormsControlLibrary1::UserControl1> m_ctrl1;


	// ����
protected:
	HICON m_hIcon;

	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
