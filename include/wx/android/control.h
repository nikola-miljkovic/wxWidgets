/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/control.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:           wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_CONTROL_H_
#define _WX_ANDROID_CONTROL_H_

#if wxUSE_CONTROLS

//-----------------------------------------------------------------------------
// wxControl
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxControl : public wxControlBase
{
public:
    wxControl();
    wxControl(wxWindow *parent, wxWindowID id,
             const wxPoint& pos = wxDefaultPosition,
             const wxSize& size = wxDefaultSize, long style = 0,
             const wxValidator& validator = wxDefaultValidator,
             const wxString& name = wxControlNameStr)
    {
        Create(parent, id, pos, size, style, validator, name);
    }

    bool Create(wxWindow *parent, wxWindowID id,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize, long style = 0,
            const wxValidator& validator = wxDefaultValidator,
            const wxString& name = wxControlNameStr);

    virtual ~wxControl();
    

    virtual void Command(wxCommandEvent& event);

    virtual void SetLabel(const wxString &label);
    virtual wxString GetLabel() const;
    virtual wxString GetLabelText() const;

protected:
    virtual wxSize DoGetBestSize() const;

private:
    wxString m_label;

    DECLARE_DYNAMIC_CLASS(wxControl)
};

#endif // wxUSE_CONTROLS

#endif // _WX_ANDROID_CONTROL_H_
