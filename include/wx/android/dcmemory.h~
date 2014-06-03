/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/dcmemory.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_DCMEMORY_H_
#define _WX_ANDROID_DCMEMORY_H_

#include "wx/dcmemory.h"
#include "wx/android/dc.h"

class WXDLLIMPEXP_CORE wxMemoryDCImpl: public wxAndroidDCImpl
{
public:
    wxMemoryDCImpl( wxMemoryDC *owner );
    wxMemoryDCImpl( wxMemoryDC *owner, wxBitmap& bitmap );
    wxMemoryDCImpl( wxMemoryDC *owner, wxDC *dc ); 

    // implement over base class virtual
    virtual void DoDrawRectangle(wxCoord x, wxCoord y, wxCoord width, wxCoord height);
    virtual void DoGetSize(int* width, int* height) const;
    virtual void DoSelect(const wxBitmap& bitmap);

    virtual wxBitmap DoGetAsBitmap(const wxRect* subrect) const;

protected:
    void Init();

    bool CreateCompatible(wxDC *dc);

    DECLARE_CLASS(wxMemoryDCImpl)
    wxDECLARE_NO_COPY_CLASS(wxMemoryDCImpl);
};

#endif // _WX_ANDROID_DCMEMORY_H_
