/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/textctrl.h
// Purpose:
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_TEXTCTRL_H_
#define _WX_ANDROID_TEXTCTRL_H_

//-----------------------------------------------------------------------------
// wxTextCtrl
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxTextCtrl: public wxTextCtrlBase
{
public:
    wxTextCtrl() { Init(); }
    wxTextCtrl(wxWindow *parent,
               wxWindowID id,
               const wxString &value = wxEmptyString,
               const wxPoint &pos = wxDefaultPosition,
               const wxSize &size = wxDefaultSize,
               long style = 0,
               const wxValidator& validator = wxDefaultValidator,
               const wxString &name = wxTextCtrlNameStr)
    {
        Create(parent, id, value, pos, size, style, validator, name);
    }

    virtual ~wxTextCtrl();

    bool Create(wxWindow *parent,
                wxWindowID id,
                const wxString &value = wxEmptyString,
                const wxPoint &pos = wxDefaultPosition,
                const wxSize &size = wxDefaultSize,
                long style = 0,
                const wxValidator& validator = wxDefaultValidator,
                const wxString &name = wxTextCtrlNameStr);

    // implement base class pure virtuals
    // ----------------------------------

    virtual void WriteText(const wxString& text) wxOVERRIDE;
    virtual wxString GetValue() const wxOVERRIDE;
    virtual bool IsEmpty() const;

    virtual int GetLineLength(long lineNo) const wxOVERRIDE;
    virtual wxString GetLineText(long lineNo) const wxOVERRIDE;
    virtual int GetNumberOfLines() const wxOVERRIDE;

    virtual bool IsModified() const wxOVERRIDE;
    virtual bool IsEditable() const wxOVERRIDE;

    virtual void GetSelection(long* from, long* to) const wxOVERRIDE;

    virtual void Remove(long from, long to) wxOVERRIDE;

    virtual void MarkDirty() wxOVERRIDE;
    virtual void DiscardEdits() wxOVERRIDE;

    virtual bool SetStyle(long start, long end, const wxTextAttr& style) wxOVERRIDE;
    virtual bool GetStyle(long position, wxTextAttr& style) wxOVERRIDE;

    void OnDropFiles( wxDropFilesEvent &event );
    void OnChar( wxKeyEvent &event );

    void OnCut(wxCommandEvent& event);
    void OnCopy(wxCommandEvent& event);
    void OnPaste(wxCommandEvent& event);
    void OnUndo(wxCommandEvent& event);
    void OnRedo(wxCommandEvent& event);

    void OnUpdateCut(wxUpdateUIEvent& event);
    void OnUpdateCopy(wxUpdateUIEvent& event);
    void OnUpdatePaste(wxUpdateUIEvent& event);
    void OnUpdateUndo(wxUpdateUIEvent& event);
    void OnUpdateRedo(wxUpdateUIEvent& event);

    bool SetFont(const wxFont& font);
    bool SetForegroundColour(const wxColour& colour);
    bool SetBackgroundColour(const wxColour& colour);
    
    virtual long XYToPosition(long x, long y) const;
    virtual bool PositionToXY(long pos, long *x, long *y) const;

    virtual void ShowPosition(long pos);

protected:
   

private:
    void Init();
    wxString m_value;
    
    DECLARE_EVENT_TABLE()
    DECLARE_DYNAMIC_CLASS(wxTextCtrl)
};

#endif // _WX_ANDROID_TEXTCTRL_H_
