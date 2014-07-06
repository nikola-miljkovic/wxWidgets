/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/toplevel.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_TOPLEVEL_H_
#define _WX_ANDROID_TOPLEVEL_H_

#include <jni.h>

// ----------------------------------------------------------------------------
// wxTopLevelWindowAndroid
// ----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxTopLevelWindowAndroid : public wxTopLevelWindowBase
{
public:
    wxTopLevelWindowAndroid() { Init(); }

    wxTopLevelWindowAndroid(wxWindow *parent,
                        wxWindowID id,
                        const wxString& title,
                        const wxPoint& pos = wxDefaultPosition,
                        const wxSize& size = wxDefaultSize,
                        long style = wxDEFAULT_FRAME_STYLE,
                        const wxString& name = wxFrameNameStr)
    {
        Init();

        (void)Create(parent, id, title, pos, size, style, name);
    }

    bool Create(wxWindow *parent,
                wxWindowID id,
                const wxString& title,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = wxDEFAULT_FRAME_STYLE,
                const wxString& name = wxFrameNameStr);

    virtual ~wxTopLevelWindowAndroid();

    // implement base class pure virtuals
    virtual void SetTitle( const wxString& title);
    virtual wxString GetTitle() const;
    virtual void Maximize(bool maximize = true);
    virtual bool IsMaximized() const;
    virtual void Iconize(bool iconize = true);
    virtual bool IsIconized() const;
    virtual void SetIcons(const wxIconBundle& icons );
    virtual void Restore();

    virtual void SetLayoutDirection(wxLayoutDirection dir);

    virtual void RequestUserAttention(int flags = wxUSER_ATTENTION_INFO);

    virtual bool Show(bool show = true);
    virtual void Raise();

    virtual void ShowWithoutActivating();
    virtual bool ShowFullScreen(bool show, long style = wxFULLSCREEN_ALL);
    virtual bool IsFullScreen() const;
	
protected:
    void Init();

    // set to true when we get response from activity

    DECLARE_EVENT_TABLE()
    wxDECLARE_NO_COPY_CLASS(wxTopLevelWindowAndroid);
};


#endif // _WX_ANDROID_TOPLEVEL_H_
