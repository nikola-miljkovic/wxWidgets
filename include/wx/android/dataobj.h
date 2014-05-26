/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/dataobj.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_DATAOBJ_H_
#define _WX_ANDROID_DATAOBJ_H_

// ----------------------------------------------------------------------------
// wxDataObject
// ----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxDataObject : public wxDataObjectBase
{
public:
    wxDataObject();
    virtual ~wxDataObject();

    virtual bool IsSupportedFormat( const wxDataFormat& format, Direction dir = Get ) const;
};

#endif // _WX_ANDROID_DATAOBJ_H_
