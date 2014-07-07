///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/toplevel.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/toplevel.h"

#include "wx/android/private/definitions.h"
#include "wx/android/private/globals.h"
#include "wx/android/private/wrappers.h"

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
	if (!CreateBase( parent, id, pos, size, style, wxDefaultValidator, name ))
        return false;
    
    m_id = id;

    SetTitle(title);
}

void wxTopLevelWindowAndroid::Init() 
{
}

wxTopLevelWindowAndroid::~wxTopLevelWindowAndroid()
{
}

void wxTopLevelWindowAndroid::SetTitle( const wxString& title )
{
    m_label = title;
}

wxString wxTopLevelWindowAndroid::GetTitle() const
{
	return m_label;
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
	if(!show)
		return false;

	CALL_STATIC_VOID("createWindow", "(ILjava/lang/String;)V", 
		m_id, WXSTR(m_label));

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