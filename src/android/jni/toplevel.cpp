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

    m_title = title;

    m_hasRefs = false;
}

void wxTopLevelWindowAndroid::Init() 
{
}

wxTopLevelWindowAndroid::~wxTopLevelWindowAndroid()
{
}

void wxTopLevelWindowAndroid::SetTitle( const wxString& title)
{
    m_title = title;

    if(m_hasRefs)
    	CALL_VOID(wxAndroid::Env->FindClass(BIND_ACTIVITY), 
    		m_jobject, BIND_SET_TITLE_METHOD, BIND_SET_TITLE_ARGS,
    		wxAndroid::Env->NewStringUTF((const char*)m_title));
}

wxString wxTopLevelWindowAndroid::GetTitle() const
{
	return m_title;
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

	// we cannot get activity until we display it 
	// here we assign it to m_class/m_object
	wxAndroid::NewWindow = this;
	CALL_VOID(wxAndroid::MainActivityClass, wxAndroid::MainActivity, 
		BIND_NEW_WINDOW_METHOD, BIND_NEW_WINDOW_ARGS, 
		wxAndroid::Env->NewStringUTF((const char*)m_title), (size_t)wxAndroid::NewWindow);

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

void wxTopLevelWindowAndroid::SetJavaObject(jobject jjobject, jclass jjclass) 
{
	m_jclass = jjclass;
	m_jobject = jjobject;
	m_hasRefs = true;
}
