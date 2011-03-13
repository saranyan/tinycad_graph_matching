/*
	TinyCAD program for schematic capture
	Copyright 1994/1995/2002 Matt Pyne.

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with this library; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#if !defined(AFX_STDAFX_H__7554172E_EEA9_40FA_8A4A_C9D910CB873F__INCLUDED_)
#define AFX_STDAFX_H__7554172E_EEA9_40FA_8A4A_C9D910CB873F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//Tell the Visual Studio 2008 compiler to compile for Windows XP.  95, 98, no longer supported by VS2008
#define WINVER 0x0501
#define _WIN32_WINNT 0x0501

//Tell the compiler to automatically replace old character handling functions 
//with their newer more secure equivalents that check for buffer overflows.
//#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
//#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1

//This one shouldn't be necessary, but there are still a few files where the overload (above)
//doesn't seem to take.  _wfopen and wcscpy seem to be the hold outs.
//#define _CRT_SECURE_NO_WARNINGS 1

//I am not sure why Visual Studio 2008 deprecated the CDaoDatabase class, but it
//may have to do with the fact that there is no 64 bit processor support for it.
//This will disable the warnings, for now
#define _AFX_DISABLE_DEPRECATED 1

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <tchar.h>

#include <afxdao.h>			// MFC db support

#include <afxsock.h>		// MFC socket extensions

#include <OdbcInst.h>		// ODBC Installer support

#include <afxrich.h>		// RichEditView support

// The STL classes we use.
#include <vector>
#include <map>
#include <set>
#include <list>
#include <deque>

// Other useful stuff
#include <math.h>
#include <assert.h>

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__7554172E_EEA9_40FA_8A4A_C9D910CB873F__INCLUDED_)
