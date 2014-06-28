/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/button.h
// Purpose:
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_BUTTON_H_
#define _WX_ANDROID_BUTTON_H_

//-----------------------------------------------------------------------------
// wxButton
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxButton : public wxButtonBase
{
public:
    wxButton() {}
    wxButton(wxWindow *parent, wxWindowID id,
           const wxString& label = wxEmptyString,
           const wxPoint& pos = wxDefaultPosition,
           const wxSize& size = wxDefaultSize, long style = 0,
           const wxValidator& validator = wxDefaultValidator,
           const wxString& name = wxButtonNameStr)
    {
        Create(parent, id, label, pos, size, style, validator, name);
    }

    bool Create(wxWindow *parent, wxWindowID id,
           const wxString& label = wxEmptyString,
           const wxPoint& pos = wxDefaultPosition,
           const wxSize& size = wxDefaultSize, long style = 0,
           const wxValidator& validator = wxDefaultValidator,
           const wxString& name = wxButtonNameStr);

    virtual ~wxButton();
    
    virtual wxWindow *SetDefault() wxOVERRIDE;
    virtual void SetLabel( const wxString &label ) wxOVERRIDE;

    // implementation
    // --------------

    static wxVisualAttributes
    GetClassDefaultAttributes(wxWindowVariant variant = wxWINDOW_VARIANT_NORMAL);
    void MoveWindow(int x, int y, int width, int height) { DoMoveWindow(x, y, width, height); }


protected:
    virtual wxSize DoGetBestSize() const wxOVERRIDE;
    virtual void DoApplyWidgetStyle(WXStyle *style) wxOVERRIDE;

#if wxUSE_MARKUP
    virtual bool DoSetLabelMarkup(const wxString& markup) wxOVERRIDE;
#endif // wxUSE_MARKUP

private:
    // this is temploraly, until wxWindow is implemented
    wxWindowID		m_parentId;
    wxWindowID		m_id;

    DECLARE_DYNAMIC_CLASS(wxButton)
};

#endif // _WX_ANDROID_BUTTON_H_
