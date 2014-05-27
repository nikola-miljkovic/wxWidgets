#include <wx/app.h>

// TO-DO:

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
