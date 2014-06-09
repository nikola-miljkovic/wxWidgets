///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/frame.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include <wx/frame.h>

BEGIN_EVENT_TABLE(wxFrame, wxFrameBase)
END_EVENT_TABLE()

void wxFrame::Init()
{
}

bool wxFrame::Create( wxWindow *parent,
                      wxWindowID id,
                      const wxString& title,
                      const wxPoint& pos,
                      const wxSize& sizeOrig,
                      long style,
                      const wxString &name )
{
    return wxTopLevelWindow::Create(parent, id, title, pos, sizeOrig, style, name);
}

wxFrame::~wxFrame()
{
}

void wxFrame::AttachMenuBar(wxMenuBar *mbar)
{
}

void wxFrame::DetachMenuBar()
{
}

void wxFrame::SetMenuBar(wxMenuBar *menubar)
{
}

wxPoint wxFrame::GetClientAreaOrigin() const 
{
	return wxPoint();
}
