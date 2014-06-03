///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/dcmemory.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/android/dcmemory.h"

IMPLEMENT_ABSTRACT_CLASS(wxMemoryDCImpl, wxAndroidDCImpl)

wxMemoryDCImpl::wxMemoryDCImpl( wxMemoryDC *owner )
  : wxAndroidDCImpl( owner )
{
    Init();
}

wxMemoryDCImpl::wxMemoryDCImpl( wxMemoryDC *owner, wxBitmap& bitmap)
  : wxAndroidDCImpl( owner )
{
    Init();
}

wxMemoryDCImpl::wxMemoryDCImpl( wxMemoryDC *owner, wxDC *WXUNUSED(dc) )
  : wxAndroidDCImpl( owner )
{
}

void wxMemoryDCImpl::Init()
{
}

bool wxMemoryDCImpl::CreateCompatible(wxDC *dc)
{
	return true;
}

void wxMemoryDCImpl::DoSelect( const wxBitmap& bitmap )
{
}

void wxMemoryDCImpl::DoGetSize(int *width, int *height) const
{
}

void wxMemoryDCImpl::DoDrawRectangle(wxCoord x, wxCoord y, wxCoord width, wxCoord height)
{
}

wxBitmap wxMemoryDCImpl::DoGetAsBitmap(const wxRect* subrect) const
{
	return wxBitmap();
}
