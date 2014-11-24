
// SupervisorDlg.h : header file
//

#pragma once

#include <vector>
#include "afxwin.h"
#include "Com_class.h"

using namespace std;

// CSupervisorDlg dialog
class CSupervisorDlg : public CDialogEx
{
// Construction
public:
	CSupervisorDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_SUPERVISOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	vector<int> GetSerialPortList();
// Implementation
protected:
	HICON m_hIcon;
	_thread_com m_port;
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CButton m_btnOpenPort;
	CComboBox m_cboBaudRate;
	CComboBox m_cboPort;
	CEdit m_edtParamDistance;
	CEdit m_edtParamHumid;
	CEdit m_edtParamTemperature;
	CStatic m_lblFan;
	CStatic m_lblHumid;
	CStatic m_lblLocker;
	CStatic m_lblPIR;
	CStatic m_lblTemperature;
	CStatic m_lblDistance;
	afx_msg void OnBnClickedButtonOpenPort();
protected:

	afx_msg LRESULT OnComReceive(WPARAM wParam, LPARAM lParam);
};
