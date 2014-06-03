///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/dialog.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/dialog.h"


void wxDialog::Init()
{
}

bool wxDialog::Create( wxWindow *parent,
                       wxWindowID id, const wxString &title,
                       const wxPoint &pos, const wxSize &size,
                       long style, const wxString &name )
{
	return true;
}

wxDialog::~wxDialog()
{
}

bool wxDialog::Show( bool show )
{
	return show;
}

bool wxDialog::IsModal() const
{
	return false;
}

void wxDialog::EndModal( int retCode )
{
}

int wxDialog::ShowModal() 
{
	return 0;
}

void wxDialog::SetLabel(const wxString& label)
{
}

wxString wxDialog::GetLabel() const
{
	return wxString();
}
