/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/brush.h
// Purpose:
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_BRUSH_H_
#define _WX_ANDROID_BRUSH_H_

class WXDLLIMPEXP_FWD_CORE wxBitmap;
class WXDLLIMPEXP_FWD_CORE wxColour;

//-----------------------------------------------------------------------------
// wxBrush
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxBrush: public wxBrushBase
{
public:
    wxBrush() { }

    wxBrush( const wxColour &colour, wxBrushStyle style = wxBRUSHSTYLE_SOLID );
    wxBrush( const wxBitmap &stippleBitmap );
    virtual ~wxBrush();

    bool operator==(const wxBrush& brush) const { return *this == brush; };
    bool operator!=(const wxBrush& brush) const { return !(*this == brush); }

    wxBrushStyle GetStyle() const wxOVERRIDE;
    wxColour GetColour() const wxOVERRIDE;
    wxBitmap *GetStipple() const wxOVERRIDE;

    void SetColour( const wxColour& col ) wxOVERRIDE;
    void SetColour( unsigned char r, unsigned char g, unsigned char b ) wxOVERRIDE;
    void SetStyle( wxBrushStyle style ) wxOVERRIDE;
    void SetStipple( const wxBitmap& stipple ) wxOVERRIDE;

    wxBrush(const wxColour& col, int style);
    void SetStyle(int style) { SetStyle((wxBrushStyle)style); }

protected:
    virtual wxGDIRefData *CreateGDIRefData() const wxOVERRIDE;
    virtual wxGDIRefData *CloneGDIRefData(const wxGDIRefData *data) const wxOVERRIDE;

    DECLARE_DYNAMIC_CLASS(wxBrush)
};

#endif // _WX_ANDROID_BRUSH_H_