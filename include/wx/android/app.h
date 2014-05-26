/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/app.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_APP_H_
#define _WX_ANDROID_APP_H_

// android specific
#include <jni.h>

#include "wx/event.h"
#include "wx/icon.h"

// Represents the application. Derive OnInit and declare
// a new App object to start application
class WXDLLIMPEXP_CORE wxApp : public wxAppBase
{
public:
    wxApp();
    virtual ~wxApp();

    // override base class (pure) virtuals
    virtual bool Initialize(int& argc, wxChar **argv);
    virtual void CleanUp();

    virtual void WakeUpIdle();

    // implementation only
    void OnIdle(wxIdleEvent& event);
    void OnEndSession(wxCloseEvent& event);
    void OnQueryEndSession(wxCloseEvent& event);

protected:
    wxDECLARE_NO_COPY_CLASS(wxApp);
    DECLARE_DYNAMIC_CLASS(wxApp)
};


#endif // _WX_ANDROID_APP_H_
