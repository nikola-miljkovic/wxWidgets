///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/app.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/app.h"

IMPLEMENT_DYNAMIC_CLASS(wxApp,wxEvtHandler)

wxApp::wxApp() 
{

}

wxApp::~wxApp()
{

}

bool wxApp::Initialize(int& argc, wxChar **argv) 
{
    return true;
}

void wxApp::CleanUp()
{
}

void wxApp::WakeUpIdle()
{
}
