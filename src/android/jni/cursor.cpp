///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/cursor.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include <wx/cursor.h>

IMPLEMENT_DYNAMIC_CLASS(wxCursor, wxGDIObject)

wxCursor::~wxCursor()
{
}

void wxBeginBusyCursor(const wxCursor* cursor)
{
}

void wxEndBusyCursor()
{
}

wxGDIRefData *wxCursor::CreateGDIRefData() const
{
    return NULL;
}

wxGDIRefData *wxCursor::CloneGDIRefData(const wxGDIRefData *data) const
{
    return NULL;
}


