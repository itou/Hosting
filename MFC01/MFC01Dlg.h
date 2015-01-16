
// MFC01Dlg.h : ヘッダー ファイル
//

#pragma once


// CMFC01Dlg ダイアログ
class CMFC01Dlg : public CDialogEx
{
	// コンストラクション
public:
	CMFC01Dlg(CWnd* pParent = NULL);	// 標準コンストラクター

	// ダイアログ データ
	enum { IDD = IDD_MFC01_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート
	// ...
	// Data member for the .NET User Control:
	CWinFormsControl<WindowsFormsControlLibrary1::UserControl1> m_ctrl1;


	// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
