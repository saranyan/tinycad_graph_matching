/*
 * Project:		TinyCAD program for schematic capture
 *				http://tinycad.sourceforge.net
 * Copyright:	© 1994-2005 Matt Pyne
 * License:		Lesser GNU Public License 2.1 (LGPL)
 *				http://www.opensource.org/licenses/lgpl-license.html
 */

#include "stdafx.h"
#include "resource.h"
#include "DlgAboutTurunga.h"
#include "TinyCad.h"

//*************************************************************************
//*                                                                       *
//* Shows information of the program like name of the programmer e.g.     *
//*                                                                       *
//*************************************************************************

//=========================================================================
//== ctor/dtor/initializing                                              ==
//=========================================================================

//-------------------------------------------------------------------------
CDlgAboutTurunga::CDlgAboutTurunga()
: super( IDD_TURUNGABOUTBOX )
{
}
//-------------------------------------------------------------------------
BOOL CDlgAboutTurunga::OnInitDialog()
{
	super::OnInitDialog();

	//CString sVersion = CTinyCadApp::GetName() + " " + CTinyCadApp::GetVersion();
	CString sVersion = "Turunga version Alpha (Prototype)";
	GetDlgItem( IDC_TURUNGAVERSION )->SetWindowText( sVersion );

	return TRUE;
}
//-------------------------------------------------------------------------
