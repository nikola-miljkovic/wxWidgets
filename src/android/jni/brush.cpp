///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/brush.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include <wx/brush.h>
#include <wx/colour.h>

IMPLEMENT_DYNAMIC_CLASS(wxBrush,wxGDIObject)

wxBrush::wxBrush( const wxColour &colour, wxBrushStyle style )
{
}

wxBrush::wxBrush(const wxColour& col, int style)
{
}

wxBrush::wxBrush( const wxBitmap &stippleBitmap )
{
}

wxBrush::~wxBrush()
{
}

wxBrushStyle wxBrush::GetStyle() const 
{
	return wxBrushStyle();
}

wxColour wxBrush::GetColour() const 
{
	return wxColour();
}

wxBitmap *wxBrush::GetStipple() const  
{
	return NULL;
}

void wxBrush::SetColour( const wxColour& col )  
{
}

void wxBrush::SetColour( unsigned char r, unsigned char g, unsigned char b )  
{
}

void wxBrush::SetStyle( wxBrushStyle style )  
{
}

void wxBrush::SetStipple( const wxBitmap& stipple )  
{
}

wxGDIRefData *wxBrush::CreateGDIRefData() const
{
	return NULL;
}

wxGDIRefData *wxBrush::CloneGDIRefData(const wxGDIRefData *data) const
{
	return NULL;
}

