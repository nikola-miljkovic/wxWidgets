/////////////////////////////////////////////////////////////////////////////
// Name:        src/android/jni/control.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#include "wx/control.h"

// ============================================================================
// wxControl implementation
// ============================================================================

// ----------------------------------------------------------------------------
// wxControl creation
// ----------------------------------------------------------------------------

IMPLEMENT_DYNAMIC_CLASS(wxControl, wxWindow)

wxControl::wxControl()
{
}

wxControl::~wxControl() 
{

}

bool wxControl::Create( wxWindow *parent,
                      wxWindowID id,
                      const wxPoint &pos,
                      const wxSize &size,
                      long style,
                      const wxValidator& validator,
                      const wxString &name )
{
    return wxWindow::Create(parent, id, pos, size, style, name);
}

void wxControl::Command(wxCommandEvent& event) 
{

}

wxSize wxControl::DoGetBestSize() const
{
    return wxSize();
}

void wxControl::SetLabel(const wxString &label)
{
    m_label = label;
}

wxString wxControl::GetLabel() const
{
    return m_label;
}

wxString wxControl::GetLabelText() const
{
    return m_label;
}
