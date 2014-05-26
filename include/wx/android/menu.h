///////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/menu.h
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_MENU_H_
#define _WX_ANDROID_MENU_H_

#include "wx/bitmap.h"

//-----------------------------------------------------------------------------
// wxMenu
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxMenu : public wxMenuBase
{
public:
    wxMenu(const wxString& title, long style = 0)
        : wxMenuBase(title, style) { Init(); }

    wxMenu(long style = 0) : wxMenuBase(style) { Init(); }

    virtual ~wxMenu();

    virtual void Break();

    virtual void SetTitle(const wxString& title);

protected:
    // common part of all ctors
    void Init();

    
    virtual wxMenuItem* DoAppend(wxMenuItem *item);
    virtual wxMenuItem* DoInsert(size_t pos, wxMenuItem *item);
    virtual wxMenuItem* DoRemove(wxMenuItem *item);

private:
    DECLARE_DYNAMIC_CLASS_NO_COPY(wxMenu)
};

#endif // _WX_ANDROID_MENUITEM_H_
