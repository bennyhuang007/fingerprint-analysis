// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__CEF34407_BAE3_11D6_AF70_C559F9C10445__INCLUDED_)
#define AFX_STDAFX_H__CEF34407_BAE3_11D6_AF70_C559F9C10445__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#include <afxtempl.h>		// MFC templete class support

#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

//ActiveSkin type library and add ATL support 
#import "actskin4.ocx" no_implementation raw_interfaces_only raw_native_types
using namespace ACTIVESKINLib;

#include "atlbase.h"


//Image specific
#include "image.h"

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__CEF34407_BAE3_11D6_AF70_C559F9C10445__INCLUDED_)
