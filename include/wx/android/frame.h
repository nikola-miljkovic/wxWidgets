/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/frame.h
// Purpose:     
// Author:      Nikola MIljkovic
// Created:     
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_FRAME_H
#define _WX_ANDROID_FRAME_H

class WXDLLIMPEXP_FWD_CORE wxMenuBar;
class WXDLLIMPEXP_FWD_CORE wxStatusBar;

class WXDLLIMPEXP_CORE wxFrame: public wxFrameBase
{
public:
    wxFrame() { Init(); }
    wxFrame(wxWindow *parent,
            wxWindowID winid,
            const wxString& title,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = wxDEFAULT_FRAME_STYLE,
            const wxString& name = wxFrameNameStr)
    {
        Init();
        Create(parent, winid, title, pos, size, style, name);
    }

    virtual ~wxFrame();

    bool Create(wxWindow *parent,
                wxWindowID winid,
                const wxString& title,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = wxDEFAULT_FRAME_STYLE,
                const wxString& name = wxFrameNameStr);
    
    // implementation
    virtual void AttachMenuBar(wxMenuBar *mbar);
    virtual void DetachMenuBar();
    virtual void SetMenuBar(wxMenuBar *menubar);

    virtual wxPoint GetClientAreaOrigin() const;

#if wxUSE_STATUSBAR
    virtual wxStatusBar* CreateStatusBar(int number = 1,
                                         long style = wxSTB_DEFAULT_STYLE,
                                         wxWindowID winid = 0,
                                         const wxString& name =
                                            wxStatusLineNameStr);
    void SetStatusBar(wxStatusBar *statBar);
#endif //wxUSE_STATUSBAR

#if wxUSE_TOOLBAR
    virtual wxToolBar* CreateToolBar(long style = -1,
                                     wxWindowID winid = wxID_ANY,
                                     const wxString& name = wxToolBarNameStr);
    virtual void SetToolBar(wxToolBar *toolbar);
#endif //wxUSE_TOOLBAR
protected:
    void Init();

private:
    DECLARE_EVENT_TABLE()
    DECLARE_DYNAMIC_CLASS(wxFrame)
};

#endif // _WX_ANDROID_FRAME_H
