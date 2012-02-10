// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "agentctlcharacterex1.h"

// Dispatch interfaces referenced by this interface
#include "AgentCtlBalloonEx1.h"
#include "agentctlcommandsex1.h"
#include "agentctlrequest1.h"
#include "AgentCtlAnimationNames1.h"


/////////////////////////////////////////////////////////////////////////////
// CAgentCtlCharacterEx properties

/////////////////////////////////////////////////////////////////////////////
// CAgentCtlCharacterEx operations

CAgentCtlBalloonEx CAgentCtlCharacterEx::GetBalloon()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAgentCtlBalloonEx(pDispatch);
}

CAgentCtlCommandsEx CAgentCtlCharacterEx::GetCommands()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAgentCtlCommandsEx(pDispatch);
}

CString CAgentCtlCharacterEx::GetName()
{
	CString result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString CAgentCtlCharacterEx::GetDescription()
{
	CString result;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CAgentCtlCharacterEx::GetVisible()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetLeft(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CAgentCtlCharacterEx::GetLeft()
{
	short result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetTop(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CAgentCtlCharacterEx::GetTop()
{
	short result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetHeight(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CAgentCtlCharacterEx::GetHeight()
{
	short result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetWidth(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CAgentCtlCharacterEx::GetWidth()
{
	short result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

long CAgentCtlCharacterEx::GetSpeed()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CAgentCtlCharacterEx::GetPitch()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetIdleOn(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CAgentCtlCharacterEx::GetIdleOn()
{
	BOOL result;
	InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CAgentCtlCharacterEx::Activate(const VARIANT& State)
{
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&State);
	return result;
}

CAgentCtlRequest CAgentCtlCharacterEx::Play(LPCTSTR Animation)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		Animation);
	return CAgentCtlRequest(pDispatch);
}

CAgentCtlRequest CAgentCtlCharacterEx::Get(LPCTSTR Type, LPCTSTR Name, const VARIANT& Queue)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_VARIANT;
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		Type, Name, &Queue);
	return CAgentCtlRequest(pDispatch);
}

void CAgentCtlCharacterEx::Stop(const VARIANT& Request)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Request);
}

CAgentCtlRequest CAgentCtlCharacterEx::Wait(LPDISPATCH WaitForRequest)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		WaitForRequest);
	return CAgentCtlRequest(pDispatch);
}

CAgentCtlRequest CAgentCtlCharacterEx::Interrupt(LPDISPATCH InterruptRequest)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		InterruptRequest);
	return CAgentCtlRequest(pDispatch);
}

CAgentCtlRequest CAgentCtlCharacterEx::Speak(const VARIANT& Text, const VARIANT& Url)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		&Text, &Url);
	return CAgentCtlRequest(pDispatch);
}

CAgentCtlRequest CAgentCtlCharacterEx::GestureAt(short x, short y)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I2 VTS_I2;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		x, y);
	return CAgentCtlRequest(pDispatch);
}

CAgentCtlRequest CAgentCtlCharacterEx::MoveTo(short x, short y, const VARIANT& Speed)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I2 VTS_I2 VTS_VARIANT;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		x, y, &Speed);
	return CAgentCtlRequest(pDispatch);
}

CAgentCtlRequest CAgentCtlCharacterEx::Hide(const VARIANT& Fast)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		&Fast);
	return CAgentCtlRequest(pDispatch);
}

CAgentCtlRequest CAgentCtlCharacterEx::Show(const VARIANT& Fast)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		&Fast);
	return CAgentCtlRequest(pDispatch);
}

void CAgentCtlCharacterEx::StopAll(const VARIANT& Types)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x1f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Types);
}

short CAgentCtlCharacterEx::GetMoveCause()
{
	short result;
	InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short CAgentCtlCharacterEx::GetVisibilityCause()
{
	short result;
	InvokeHelper(0x21, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

BOOL CAgentCtlCharacterEx::GetHasOtherClients()
{
	BOOL result;
	InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetSoundEffectsOn(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x23, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CAgentCtlCharacterEx::GetSoundEffectsOn()
{
	BOOL result;
	InvokeHelper(0x23, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void CAgentCtlCharacterEx::SetDescription(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CAgentCtlCharacterEx::GetExtraData()
{
	CString result;
	InvokeHelper(0x24, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CAgentCtlCharacterEx::ShowPopupMenu(short x, short y)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I2 VTS_I2;
	InvokeHelper(0x25, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		x, y);
	return result;
}

void CAgentCtlCharacterEx::SetAutoPopupMenu(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x26, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CAgentCtlCharacterEx::GetAutoPopupMenu()
{
	BOOL result;
	InvokeHelper(0x26, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetHelpModeOn(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x27, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CAgentCtlCharacterEx::GetHelpModeOn()
{
	BOOL result;
	InvokeHelper(0x27, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetHelpContextID(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x28, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CAgentCtlCharacterEx::GetHelpContextID()
{
	long result;
	InvokeHelper(0x28, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

short CAgentCtlCharacterEx::GetActive()
{
	short result;
	InvokeHelper(0x29, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

BOOL CAgentCtlCharacterEx::Listen(BOOL Listen)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Listen);
	return result;
}

void CAgentCtlCharacterEx::SetLanguageID(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CAgentCtlCharacterEx::GetLanguageID()
{
	long result;
	InvokeHelper(0x2b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString CAgentCtlCharacterEx::GetSRModeID()
{
	CString result;
	InvokeHelper(0x2e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetSRModeID(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CAgentCtlCharacterEx::GetTTSModeID()
{
	CString result;
	InvokeHelper(0x2f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetTTSModeID(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CAgentCtlCharacterEx::GetHelpFile()
{
	CString result;
	InvokeHelper(0x30, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CAgentCtlCharacterEx::SetHelpFile(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x30, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CAgentCtlCharacterEx::GetGuid()
{
	CString result;
	InvokeHelper(0x31, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

short CAgentCtlCharacterEx::GetOriginalHeight()
{
	short result;
	InvokeHelper(0x32, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short CAgentCtlCharacterEx::GetOriginalWidth()
{
	short result;
	InvokeHelper(0x33, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

CAgentCtlRequest CAgentCtlCharacterEx::Think(LPCTSTR Text)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x34, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		Text);
	return CAgentCtlRequest(pDispatch);
}

CString CAgentCtlCharacterEx::GetVersion()
{
	CString result;
	InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CAgentCtlAnimationNames CAgentCtlCharacterEx::GetAnimationNames()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x36, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAgentCtlAnimationNames(pDispatch);
}

long CAgentCtlCharacterEx::GetSRStatus()
{
	long result;
	InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}
