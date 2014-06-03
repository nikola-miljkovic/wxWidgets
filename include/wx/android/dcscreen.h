/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/dcscreen.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////


#ifndef _WX_ANDROID_DCSCREEN_H_
#define _WX_ANDROID_DCSCREEN_H_

#include "wx/dcscreen.h"
#include "wx/android/dc.h"

class WXDLLIMPEXP_CORE wxScreenDCImpl : public wxAndroidDCImpl
{
public:
    wxScreenDCImpl( wxScreenDC *owner );
    
    virtual void DoGetSize(int *w, int *h) const;

    DECLARE_CLASS(wxScreenDCImpl)
    wxDECLARE_NO_COPY_CLASS(wxScreenDCImpl);
};

#endif // _WX_ANDROID_DCSCREEN_H_

