/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/bitmap.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_BITMAP_H_
#define _WX_ANDROID_BITMAP_H_

class WXDLLIMPEXP_FWD_CORE wxPixelDataBase;
class WXDLLIMPEXP_FWD_CORE wxBitmap;

//-----------------------------------------------------------------------------
// wxMask
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxMask: public wxMaskBase
{
public:
    wxMask();
    wxMask(const wxMask& mask);
    wxMask( const wxBitmap& bitmap, const wxColour& colour );
#if wxUSE_PALETTE
    wxMask( const wxBitmap& bitmap, int paletteIndex );
#endif // wxUSE_PALETTE
    wxMask( const wxBitmap& bitmap );
    virtual ~wxMask();
    wxBitmap GetBitmap() const;

    // implementation
#ifdef __WXGTK3__
    wxMask(cairo_surface_t*);
    operator cairo_surface_t*() const;
#else
    wxMask(WXPixmap*);
    operator WXPixmap*() const;
#endif

protected:
    virtual void FreeData() wxOVERRIDE;
    virtual bool InitFromColour(const wxBitmap& bitmap, const wxColour& colour) wxOVERRIDE;
    virtual bool InitFromMonoBitmap(const wxBitmap& bitmap) wxOVERRIDE;

private:
    WXPixmap* m_bitmap;

    DECLARE_DYNAMIC_CLASS(wxMask)
};

//-----------------------------------------------------------------------------
// wxBitmap
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxBitmap: public wxBitmapBase
{
public:
    wxBitmap() { }
    wxBitmap( int width, int height, int depth = wxBITMAP_SCREEN_DEPTH )
        { Create(width, height, depth); }
    wxBitmap( const wxSize& sz, int depth = wxBITMAP_SCREEN_DEPTH )
        { Create(sz, depth); }
    wxBitmap( const char bits[], int width, int height, int depth = 1 );
    wxBitmap( const char* const* bits );
    wxBitmap( const wxString &filename, wxBitmapType type = wxBITMAP_DEFAULT_TYPE );

#if wxUSE_IMAGE
    wxBitmap(const wxImage& image, int depth = wxBITMAP_SCREEN_DEPTH);
#endif // wxUSE_IMAGE

    virtual ~wxBitmap();

    bool Create(int width, int height, int depth = wxBITMAP_SCREEN_DEPTH) wxOVERRIDE;
    bool Create(const wxSize& sz, int depth = wxBITMAP_SCREEN_DEPTH) wxOVERRIDE
        { return Create(sz.GetWidth(), sz.GetHeight(), depth); }
    bool Create(int width, int height, const wxDC& WXUNUSED(dc))
        { return Create(width,height); }
    
    virtual int GetHeight() const wxOVERRIDE;
    virtual int GetWidth() const wxOVERRIDE;
    virtual int GetDepth() const wxOVERRIDE;
    
#if wxUSE_IMAGE
    wxImage ConvertToImage() const wxOVERRIDE;
#endif // wxUSE_IMAGE


    virtual bool CopyFromIcon(const wxIcon& icon) wxOVERRIDE;

    wxMask *GetMask() const wxOVERRIDE;
    void SetMask( wxMask *mask ) wxOVERRIDE;

    wxBitmap GetSubBitmap( const wxRect& rect ) const wxOVERRIDE;

    bool SaveFile(const wxString &name, wxBitmapType type,
                          const wxPalette *palette = NULL) const wxOVERRIDE;
    bool LoadFile(const wxString &name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE) wxOVERRIDE;

#if wxUSE_PALETTE
    wxPalette *GetPalette() const wxOVERRIDE;
    void SetPalette(const wxPalette& palette) wxOVERRIDE;
    wxPalette *GetColourMap() const { return GetPalette(); }
#endif // wxUSE_PALETTE

    static void InitStandardHandlers();

    // implementation
    // --------------

    void SetHeight( int height ) wxOVERRIDE;
    void SetWidth( int width ) wxOVERRIDE;
    void SetDepth( int depth ) wxOVERRIDE;

    WXPixmap *GetPixmap() const;
    bool HasPixmap() const;
    bool HasPixbuf() const;
    wxBitmap(WXPixmap* pixmap);
    WXPixmap *GetPixbuf() const;

    // raw bitmap access support functions
    void *GetRawData(wxPixelDataBase& data, int bpp);
    void UngetRawData(wxPixelDataBase& data);

    bool HasAlpha() const;
protected:
    virtual wxGDIRefData* CreateGDIRefData() const wxOVERRIDE;
    virtual wxGDIRefData* CloneGDIRefData(const wxGDIRefData* data) const wxOVERRIDE;
private:
    DECLARE_DYNAMIC_CLASS(wxBitmap)
};

#endif // _WX_ANDROID_BITMAP_H_
