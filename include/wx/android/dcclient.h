/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/dcclient.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_DCCLIENT_H_
#define _WX_ANDROID_DCCLIENT_H_

#include "wx/dc.h"
#include "wx/android/dc.h"
#include "wx/dcclient.h"

class wxPaintDCInfo;

// ----------------------------------------------------------------------------
// DC classes
// ----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxWindowDCImpl : public wxAndroidDCImpl
{
public:
    wxWindowDCImpl( wxDC *owner );

    wxWindowDCImpl( wxDC *owner, wxWindow *win );

    virtual void DoGetSize(int *width, int *height) const;

protected:
    // initialize the newly created DC
    void InitDC();

    DECLARE_CLASS(wxWindowDCImpl)
    wxDECLARE_NO_COPY_CLASS(wxWindowDCImpl);
};

class WXDLLIMPEXP_CORE wxClientDCImpl : public wxWindowDCImpl
{
public:
    wxClientDCImpl( wxDC *owner );

    wxClientDCImpl( wxDC *owner, wxWindow *win );

    virtual ~wxClientDCImpl();

    virtual void DoGetSize(int *width, int *height) const;

protected:
    void InitDC();

    DECLARE_CLASS(wxClientDCImpl)
    wxDECLARE_NO_COPY_CLASS(wxClientDCImpl);
};

class WXDLLIMPEXP_CORE wxPaintDCImpl : public wxClientDCImpl
{
public:
    wxPaintDCImpl( wxDC *owner );

    wxPaintDCImpl( wxDC *owner, wxWindow *win );

    virtual ~wxPaintDCImpl();

protected:

    DECLARE_CLASS(wxPaintDCImpl)
    wxDECLARE_NO_COPY_CLASS(wxPaintDCImpl);
};


class WXDLLIMPEXP_CORE wxPaintDCEx : public wxPaintDC
{
public:
    wxPaintDCEx(wxWindow *canvas);

    DECLARE_CLASS(wxPaintDCEx)
    wxDECLARE_NO_COPY_CLASS(wxPaintDCEx);
};

#endif // _WX_DCCLIENT_H_BASE_
