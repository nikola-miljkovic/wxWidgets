/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/cursor.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_CURSOR_H
#define _WX_ANDROID_CURSOR_H

#include "wx/gdiobj.h"
#include "wx/gdicmn.h"

class WXDLLIMPEXP_FWD_CORE wxColour;
class WXDLLIMPEXP_FWD_CORE wxImage;

//-----------------------------------------------------------------------------
// wxCursor
//-----------------------------------------------------------------------------

// android has motion events related to graphicaly present pointer
// normaly used on devices such as Asus Transformer
// this should relate to that class 

class WXDLLIMPEXP_CORE wxCursor : public wxGDIObject
{
public:
    wxCursor() { };

#if wxUSE_IMAGE
    wxCursor(const wxImage & image);
    wxCursor(const wxString& name,
             wxBitmapType type = wxCURSOR_DEFAULT_TYPE,
             int hotSpotX = 0, int hotSpotY = 0);
#endif
    wxCursor(wxStockCursor id) { InitFromStock(id); }
    wxCursor( const char bits[], int width, int height,
        int hotSpotX = -1, int hotSpotY = -1,
        const char maskBits[] = NULL,
        const wxColour* fg = NULL, const wxColour* bg = NULL) { };

    virtual ~wxCursor();

protected:
    void InitFromStock(wxStockCursor) { };
#if wxUSE_IMAGE
    void InitFromImage(const wxImage& image);
#endif

    virtual wxGDIRefData *CreateGDIRefData() const wxOVERRIDE;
    virtual wxGDIRefData *CloneGDIRefData(const wxGDIRefData *data) const wxOVERRIDE;

private:
    DECLARE_DYNAMIC_CLASS(wxCursor)
};

#endif // _WX_ANDROID_CURSOR_H
