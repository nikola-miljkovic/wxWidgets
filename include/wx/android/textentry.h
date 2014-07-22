/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/textentry.h
// Purpose:
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_TEXTENTRY_H_
#define _WX_ANDROID_TEXTENTRY_H_

//-----------------------------------------------------------------------------
// wxTextEntry
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxTextEntry : public wxTextEntryBase
{
public:
    wxTextEntry() { };
    virtual ~wxTextEntry() { };

    virtual void WriteText(const wxString& text) {};
    virtual void Remove(long from, long to) {};

    virtual void Copy() {};
    virtual void Cut() {};
    virtual void Paste() {};

    virtual void Undo() {};
    virtual void Redo() {};
    virtual bool CanUndo() const { };
    virtual bool CanRedo() const { };

    virtual void SetInsertionPoint(long pos) {};
    virtual long GetInsertionPoint() const { };
    virtual long GetLastPosition() const { };

    virtual void SetSelection(long from, long to)
        { DoSetSelection(from, to); }
    virtual void GetSelection(long *from, long *to) const { };

    virtual bool IsEditable() const { };
    virtual void SetEditable(bool editable) {};

    virtual void SetMaxLength(unsigned long len) {};
     
    virtual wxWindow *GetEditableWindow() {};
protected:
    virtual wxString DoGetValue() const { };

    enum
    {
        SetSel_NoScroll = 0,    
        SetSel_Scroll = 1    
    };

    virtual void DoSetSelection(long from, long to, int flags = SetSel_Scroll) {};

    virtual bool DoSetMargins(const wxPoint& pt) {};
    virtual wxPoint DoGetMargins() const { };
};


#endif // _WX_ANDROID_TEXTENTRY_H_
