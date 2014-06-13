///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/icon.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/icon.h"

IMPLEMENT_DYNAMIC_CLASS(wxIcon, wxBitmap)

wxIcon::wxIcon() 
:  wxBitmap()
{
}

wxIcon::wxIcon(const char* const* bits) 
:  wxBitmap( bits )
{
}

void wxIcon::CopyFromBitmap(const wxBitmap& bmp)
{
}
