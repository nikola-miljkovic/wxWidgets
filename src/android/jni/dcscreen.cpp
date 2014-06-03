///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/dcscreen.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/android/dcscreen.h"

IMPLEMENT_ABSTRACT_CLASS(wxScreenDCImpl, wxAndroidDCImpl)

wxScreenDCImpl::wxScreenDCImpl( wxScreenDC *owner )
  : wxAndroidDCImpl( owner )
{
}


void wxScreenDCImpl::DoGetSize(int *width, int *height) const
{
}
