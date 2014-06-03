///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/pen.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include <wx/pen.h>
#include <wx/colour.h>

IMPLEMENT_DYNAMIC_CLASS(wxPen,wxGDIObject)

wxPen::wxPen( const wxColour &colour, int width, wxPenStyle style )
{
}

wxPen::wxPen(const wxColour& colour, int width, int style)
{
}

wxPen::~wxPen()
{
}

void wxPen::SetColour( const wxColour &colour ) 
{
}

void wxPen::SetColour( unsigned char red, unsigned char green, unsigned char blue ) 
{
}

void wxPen::SetCap( wxPenCap capStyle ) 
{
}

void wxPen::SetJoin( wxPenJoin joinStyle ) 
{
}

void wxPen::SetStyle( wxPenStyle style ) 
{
}

void wxPen::SetWidth( int width ) 
{
}

void wxPen::SetDashes( int number_of_dashes, const wxDash *dash ) 
{
}

void wxPen::SetStipple(const wxBitmap& stipple) 
{
}

wxColour wxPen::GetColour() const 
{
	return wxColour();
}

wxPenCap wxPen::GetCap() const  
{
	return wxPenCap();
}

wxPenJoin wxPen::GetJoin() const 
{
	return wxPenJoin();
}

wxPenStyle wxPen::GetStyle() const 
{
	return wxPenStyle();
}

int wxPen::GetWidth() const 
{
	return 0;
}

int wxPen::GetDashes(wxDash **ptr) const 
{
	return 0;
}

int wxPen::GetDashCount() const 
{
	return 0;
}

wxDash* wxPen::GetDash() const 
{
	return NULL;
}

wxBitmap *wxPen::GetStipple() const  
{
	return NULL;
}

wxGDIRefData *wxPen::CreateGDIRefData() const
{
    return NULL;
}

wxGDIRefData *wxPen::CloneGDIRefData(const wxGDIRefData *data) const
{
    return NULL;
}

