/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/dialog.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:           wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_DIALOG_H_
#define _WX_ANDROID_DIALOG_H_

//class WXDLLIMPEXP_FWD_CORE wxGUIEventLoop;

//-----------------------------------------------------------------------------
// wxDialog
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxDialog: public wxDialogBase
{
public:
    wxDialog() { };
    bool Create( wxWindow *parent, wxWindowID id,
            const wxString &title,
            const wxPoint &pos = wxDefaultPosition,
            const wxSize &size = wxDefaultSize,
            long style = wxDEFAULT_DIALOG_STYLE,
            const wxString &name = wxDialogNameStr );
    virtual ~wxDialog();

    virtual bool Show( bool show = true ) wxOVERRIDE;
    virtual int ShowModal() wxOVERRIDE;
    virtual void EndModal( int retCode ) wxOVERRIDE;
    virtual bool IsModal() const wxOVERRIDE;
    
    virtual void SetLabel(const wxString&);
    virtual wxString GetLabel() const;
private:
    void Init();

    DECLARE_DYNAMIC_CLASS(wxDialog)
};

#endif // _WX_ANDROID_DIALOG_H_