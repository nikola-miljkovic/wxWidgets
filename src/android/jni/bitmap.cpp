///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/bitmap.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/bitmap.h"

IMPLEMENT_DYNAMIC_CLASS(wxBitmap,wxGDIObject)

void wxBitmap::InitStandardHandlers()
{
}

wxBitmap::~wxBitmap()
{
}


bool wxBitmap::CopyFromIcon(const wxIcon& icon)
{
    	return false;	
}

bool wxBitmap::LoadFile(const wxString &name, wxBitmapType type)
{
	return false;
}

bool wxBitmap::Create(int width, int height, int depth)
{
	return true;
}

void wxBitmap::SetMask( wxMask *mask ) 
{
}

void wxBitmap::SetHeight( int height )
{
}

void wxBitmap::SetWidth( int width )
{
}

void wxBitmap::SetDepth( int depth ) 
{
}

int wxBitmap::GetHeight() const 
{
	return 0;
}

int wxBitmap::GetWidth() const 
{
	return 0;
}

int wxBitmap::GetDepth() const 
{
	return 0;
}

wxMask *wxBitmap::GetMask() const 
{
	return NULL;
}

bool wxBitmap::SaveFile(const wxString &name, wxBitmapType type,
                          const wxPalette *palette) const
{
	return false;
}

wxBitmap wxBitmap::GetSubBitmap( const wxRect& rect ) const 
{
	return wxBitmap();
}

wxGDIRefData* wxBitmap::CreateGDIRefData() const 
{
	return NULL;
}

wxGDIRefData* wxBitmap::CloneGDIRefData(const wxGDIRefData* data) const 
{
	return NULL;
}

