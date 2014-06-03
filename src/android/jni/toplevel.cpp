///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/toplevel.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include <wx/toplevel.h>

BEGIN_EVENT_TABLE(wxTopLevelWindowAndroid, wxTopLevelWindowBase)
END_EVENT_TABLE()

bool wxTopLevelWindowAndroid::Create(wxWindow *parent,
                wxWindowID id,
                const wxString& title,
                const wxPoint& pos,
                const wxSize& size,
                long style,
                const wxString& name)
{
}

void wxTopLevelWindowAndroid::Init() 
{
}

wxTopLevelWindowAndroid::~wxTopLevelWindowAndroid()
{
}

void wxTopLevelWindowAndroid::SetTitle( const wxString& title)
{
}

wxString wxTopLevelWindowAndroid::GetTitle() const
{
	return wxString();
}

void wxTopLevelWindowAndroid::Maximize(bool maximize)
{
}

bool wxTopLevelWindowAndroid::IsMaximized() const
{
	return true; // always?
}

void wxTopLevelWindowAndroid::Iconize(bool iconize)
{
}


bool wxTopLevelWindowAndroid::IsIconized() const
{
	return true;
}

void wxTopLevelWindowAndroid::SetIcons(const wxIconBundle& icons )
{
}

void wxTopLevelWindowAndroid::Restore()
{
}

void wxTopLevelWindowAndroid::SetLayoutDirection(wxLayoutDirection dir)
{
}


void wxTopLevelWindowAndroid::RequestUserAttention(int flags)
{
}

bool wxTopLevelWindowAndroid::Show(bool show)
{
	return true;
}

void wxTopLevelWindowAndroid::Raise()
{
}

void wxTopLevelWindowAndroid::ShowWithoutActivating()
{
}

bool wxTopLevelWindowAndroid::ShowFullScreen(bool show, long style)
{
	return true;
}

bool wxTopLevelWindowAndroid::IsFullScreen() const
{
	return true;
}
