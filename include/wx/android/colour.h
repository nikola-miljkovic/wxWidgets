/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/colour.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_COLOUR_H
#define _WX_ANDROID_COLOUR_H

#include "jni.h"

//-----------------------------------------------------------------------------
// wxColour
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxColour : public wxColourBase
{
public:
    // constructors
    // ------------
    DEFINE_STD_WXCOLOUR_CONSTRUCTORS
    
    virtual ~wxColour();
    
    bool operator==(const wxColour& col) const { return (*this == col); }
    bool operator!=(const wxColour& col) const { return !(*this == col); }

    unsigned char Red() const wxOVERRIDE;
    unsigned char Green() const wxOVERRIDE;
    unsigned char Blue() const wxOVERRIDE;
    unsigned char Alpha() const wxOVERRIDE;

protected:
    virtual void
    InitRGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a) wxOVERRIDE;

    virtual bool FromString(const wxString& str) wxOVERRIDE;

    DECLARE_DYNAMIC_CLASS(wxColour)
};

#endif // _WX_ANDROID_COLOUR_H
