///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/dcclient.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/android/dcclient.h"

IMPLEMENT_ABSTRACT_CLASS(wxWindowDCImpl, wxAndroidDCImpl)

wxWindowDCImpl::wxWindowDCImpl( wxDC *owner ) :
   wxAndroidDCImpl( owner )
{
}

wxWindowDCImpl::wxWindowDCImpl( wxDC *owner, wxWindow *win ) :
   wxAndroidDCImpl( owner )
{
}

void wxWindowDCImpl::DoGetSize(int *width, int *height) const
{
}

void wxAndroidDCImpl::Clear()
{
}

bool wxAndroidDCImpl::StartDoc(const wxString& message)
{
}

void wxAndroidDCImpl::EndDoc()
{
}


void wxAndroidDCImpl::StartPage()
{
}

void wxAndroidDCImpl::EndPage()
{
}


void wxAndroidDCImpl::SetFont(const wxFont& font)
{
}

void wxAndroidDCImpl::SetPen(const wxPen& pen)
{
}

void wxAndroidDCImpl::SetBrush(const wxBrush& brush)
{
}

void wxAndroidDCImpl::SetBackground(const wxBrush& brush)
{
}

void wxAndroidDCImpl::SetBackgroundMode(int mode)
{
}


void wxAndroidDCImpl::DestroyClippingRegion()
{
}


wxCoord wxAndroidDCImpl::GetCharHeight() const
{
}

wxCoord wxAndroidDCImpl::GetCharWidth() const
{
}


bool wxAndroidDCImpl::CanDrawBitmap() const
{
}

bool wxAndroidDCImpl::CanGetTextExtent() const
{
}

int wxAndroidDCImpl::GetDepth() const
{
}

wxSize wxAndroidDCImpl::GetPPI() const
{
	return wxSize();
}

void wxAndroidDCImpl::SetMapMode(wxMappingMode mode)
{
}

void wxAndroidDCImpl::SetUserScale(double x, double y)
{
}

void wxAndroidDCImpl::SetLogicalScale(double x, double y)
{
}

void wxAndroidDCImpl::SetLogicalOrigin(wxCoord x, wxCoord y)
{
}

void wxAndroidDCImpl::SetDeviceOrigin(wxCoord x, wxCoord y)
{
}

void wxAndroidDCImpl::SetAxisOrientation(bool xLeftRight, bool yBottomUp)
{
}


void wxAndroidDCImpl::SetLogicalFunction(wxRasterOperationMode function)
{
}


wxLayoutDirection wxAndroidDCImpl::GetLayoutDirection() const
{
	return wxLayoutDirection();
}

void wxAndroidDCImpl::SetLayoutDirection(wxLayoutDirection dir)
{
}

void wxAndroidDCImpl::DoGetFontMetrics(int *height,
                                  int *ascent,
                                  int *descent,
                                  int *internalLeading,
                                  int *externalLeading,
                                  int *averageWidth) const
{
}

void wxAndroidDCImpl::DoGetTextExtent(const wxString& string,
                                 wxCoord *x, wxCoord *y,
                                 wxCoord *descent,
                                 wxCoord *externalLeading,
                                 const wxFont *theFont) const
{
}

bool wxAndroidDCImpl::DoGetPartialTextExtents(const wxString& text, wxArrayInt& widths) const
{
	return true;
}


bool wxAndroidDCImpl::DoFloodFill(wxCoord x, wxCoord y, const wxColour& col,
                             wxFloodFillStyle style)
{
	return true;
}


void wxAndroidDCImpl::DoGradientFillLinear(const wxRect& rect,
                                      const wxColour& initialColour,
                                      const wxColour& destColour,
                                      wxDirection nDirection)
{
}


bool wxAndroidDCImpl::DoGetPixel(wxCoord x, wxCoord y, wxColour *col) const
{
	return true;
}


void wxAndroidDCImpl::DoDrawPoint(wxCoord x, wxCoord y)
{
}

void wxAndroidDCImpl::DoDrawLine(wxCoord x1, wxCoord y1, wxCoord x2, wxCoord y2)
{
}


void wxAndroidDCImpl::DoDrawArc(wxCoord x1, wxCoord y1,
                           wxCoord x2, wxCoord y2,
                           wxCoord xc, wxCoord yc)
{
}

void wxAndroidDCImpl::DoDrawCheckMark(wxCoord x, wxCoord y,
                                 wxCoord width, wxCoord height)
{
}

void wxAndroidDCImpl::DoDrawEllipticArc(wxCoord x, wxCoord y, wxCoord w, wxCoord h,
                                   double sa, double ea)
{
}


void wxAndroidDCImpl::DoDrawRectangle(wxCoord x, wxCoord y, wxCoord width, wxCoord height)
{
}

void wxAndroidDCImpl::DoDrawRoundedRectangle(wxCoord x, wxCoord y,
                                        wxCoord width, wxCoord height,
                                        double radius)
{
}

void wxAndroidDCImpl::DoDrawEllipse(wxCoord x, wxCoord y, wxCoord width, wxCoord height)
{
}


void wxAndroidDCImpl::DoCrossHair(wxCoord x, wxCoord y)
{
}


void wxAndroidDCImpl::DoDrawIcon(const wxIcon& icon, wxCoord x, wxCoord y)
{
}

void wxAndroidDCImpl::DoDrawBitmap(const wxBitmap &bmp, wxCoord x, wxCoord y,
                              bool useMask)
{
}


void wxAndroidDCImpl::DoDrawText(const wxString& text, wxCoord x, wxCoord y)
{
}

void wxAndroidDCImpl::DoDrawRotatedText(const wxString& text, wxCoord x, wxCoord y,
                                   double angle)
{
}


bool wxAndroidDCImpl::DoBlit(wxCoord xdest, wxCoord ydest, wxCoord width, wxCoord height,
                        wxDC *source, wxCoord xsrc, wxCoord ysrc,
                        wxRasterOperationMode rop, bool useMask,
                        wxCoord xsrcMask, wxCoord ysrcMask)
{
	return true;
}


bool wxAndroidDCImpl::DoStretchBlit(wxCoord xdest, wxCoord ydest,
                               wxCoord dstWidth, wxCoord dstHeight,
                               wxDC *source,
                               wxCoord xsrc, wxCoord ysrc,
                               wxCoord srcWidth, wxCoord srcHeight,
                               wxRasterOperationMode rop, bool useMask,
                               wxCoord xsrcMask, wxCoord ysrcMask)
{
	return true;
}


void wxAndroidDCImpl::DoSetClippingRegion(wxCoord x, wxCoord y,
                                     wxCoord width, wxCoord height)
{
}

void wxAndroidDCImpl::DoSetDeviceClippingRegion(const wxRegion& region)
{
}

void wxAndroidDCImpl::DoGetClippingBox(wxCoord *x, wxCoord *y,
                                  wxCoord *w, wxCoord *h) const
{
}


void wxAndroidDCImpl::DoGetSizeMM(int* width, int* height) const
{
}


void wxAndroidDCImpl::DoDrawLines(int n, const wxPoint points[],
                             wxCoord xoffset, wxCoord yoffset)
{
}

void wxAndroidDCImpl::DoDrawPolygon(int n, const wxPoint points[],
                               wxCoord xoffset, wxCoord yoffset,
                               wxPolygonFillMode fillStyle)
{
}

void wxAndroidDCImpl::DoDrawPolyPolygon(int n, const int count[], const wxPoint points[],
                                   wxCoord xoffset, wxCoord yoffset,
                                   wxPolygonFillMode fillStyle)
{
}

wxBitmap wxAndroidDCImpl::DoGetAsBitmap(const wxRect *subrect) const
{
	return wxBitmap();
}


// 

IMPLEMENT_ABSTRACT_CLASS(wxClientDCImpl, wxWindowDCImpl)

wxClientDCImpl::wxClientDCImpl( wxDC *owner )
          : wxWindowDCImpl( owner )
{
}

wxClientDCImpl::wxClientDCImpl( wxDC *owner, wxWindow *win )
          : wxWindowDCImpl( owner, win )
{
}

wxClientDCImpl::~wxClientDCImpl()
{
}

void wxClientDCImpl::DoGetSize(int *width, int *height) const
{
}

// dc paint impl

IMPLEMENT_ABSTRACT_CLASS(wxPaintDCImpl, wxClientDCImpl)

wxPaintDCImpl::wxPaintDCImpl( wxDC *owner ) :
   wxClientDCImpl( owner )
{
}

wxPaintDCImpl::wxPaintDCImpl( wxDC *owner, wxWindow *window ) :
   wxClientDCImpl( owner )
{
}

wxPaintDCImpl::~wxPaintDCImpl()
{
}

// dc paint expl
IMPLEMENT_ABSTRACT_CLASS(wxPaintDCEx, wxPaintDC)

wxPaintDCEx::wxPaintDCEx(wxWindow *window)
           : wxPaintDC(window)
{
}

