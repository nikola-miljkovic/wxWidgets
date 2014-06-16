/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/dataform.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_DATAFORM_H
#define _WX_ANDROID_DATAFORM_H

#include "jni.h"

// ----------------------------------------------------------------------------
// wxRegion
// ----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxDataFormat
{
public:
    // this could be wrong
    typedef jint NativeFormat;
    
    wxDataFormat();
    wxDataFormat( wxDataFormatId type );
    wxDataFormat( NativeFormat format );
    wxDataFormat(const wxString& format);

    wxDataFormat& operator=(NativeFormat format);
    wxDataFormat& operator=(const wxDataFormat& format);

    bool operator==(NativeFormat format) const;
    bool operator!=(NativeFormat format) const;
    
    operator NativeFormat() const;

    void SetType(NativeFormat format);
    NativeFormat GetType() const;

    wxString GetId() const;
    void SetId(const wxString& format);
};

#endif // _WX_ANDROID_DATAFORM_H