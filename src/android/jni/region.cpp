///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/region.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include <wx/region.h>

IMPLEMENT_DYNAMIC_CLASS(wxRegion, wxGDIObject)

void wxRegion::InitRect(wxCoord x, wxCoord y, wxCoord w, wxCoord h)
{
}

wxRegion::wxRegion()
{
}

wxRegion::wxRegion(wxCoord x, wxCoord y, wxCoord w, wxCoord h)
{
}

wxRegion::wxRegion(const wxPoint& topLeft, const wxPoint& bottomRight)
{
}

wxRegion::wxRegion(const wxRect& rect)
{
}

wxRegion::wxRegion(size_t n, const wxPoint *points, wxPolygonFillMode fillStyle)
{
}

wxRegion::wxRegion(const wxBitmap& bmp)
{
}

wxRegion::wxRegion(const wxBitmap& bmp, const wxColour& transp, int tolerance)
{
}

wxRegion::~wxRegion()
{
}

bool wxRegion::DoIsEqual(const wxRegion& region) const
{
	return true;
}

bool wxRegion::DoGetBox(wxCoord& x, wxCoord& y, wxCoord& w, wxCoord& h) const
{
	return true;
}

wxRegionContain wxRegion::DoContainsPoint(wxCoord x, wxCoord y) const
{
	return wxRegionContain();
}

wxRegionContain wxRegion::DoContainsRect(const wxRect& rect) const
{
	return wxRegionContain();
}


bool wxRegion::DoOffset(wxCoord x, wxCoord y)
{
	return true;
}

bool wxRegion::DoUnionWithRect(const wxRect& rect)
{
	return true;
}

bool wxRegion::DoUnionWithRegion(const wxRegion& region)
{
	return true;
}

bool wxRegion::DoIntersect(const wxRegion& region)
{
	return true;
}

bool wxRegion::DoSubtract(const wxRegion& region)
{
	return true;
}

bool wxRegion::DoXor(const wxRegion& region)
{
	return true;
}

void wxRegion::Clear()
{
}

bool wxRegion::IsEmpty() const
{
	return true;
}

wxGDIRefData *wxRegion::CreateGDIRefData() const
{
	return NULL;
}

wxGDIRefData *wxRegion::CloneGDIRefData(const wxGDIRefData *data) const
{
	return NULL;
}


