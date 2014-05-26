///////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/menuitem.h
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 1998 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_MENUITEM_H_
#define _WX_ANDROID_MENUITEM_H_

#include "wx/bitmap.h"

//-----------------------------------------------------------------------------
// wxMenuItem
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxMenuItem : public wxMenuItemBase
{
public:
    wxMenuItem(wxMenu *parentMenu = NULL,
               int id = wxID_SEPARATOR,
               const wxString& text = wxEmptyString,
               const wxString& help = wxEmptyString,
               wxItemKind kind = wxITEM_NORMAL,
               wxMenu *subMenu = NULL);
    virtual ~wxMenuItem();

    // implement base class virtuals
    virtual void SetItemLabel( const wxString& str ) wxOVERRIDE;
    virtual void Enable( bool enable = true ) wxOVERRIDE;
    virtual void Check( bool check = true ) wxOVERRIDE;
    virtual bool IsChecked() const wxOVERRIDE;
    virtual void SetBitmap(const wxBitmap& bitmap);
    virtual const wxBitmap& GetBitmap() const { return m_bitmap; }

    // implementation
    void SetMenuItem(WXWidget *menuItem);
    WXWidget *GetMenuItem() const { return m_menuItem; }
    void SetLabel();

private:
    wxBitmap  m_bitmap; // Bitmap for menuitem, if any
    WXWidget *m_menuItem;  // GtkMenuItem

    DECLARE_DYNAMIC_CLASS(wxMenuItem)
};

#endif // _WX_ANDROID_MENUITEM_H_
