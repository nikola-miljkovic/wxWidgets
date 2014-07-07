///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/window.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include <wx/window.h>

wxWindow::wxWindow()
{
}

wxWindow::wxWindow(wxWindow *parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
{
}

wxWindow::~wxWindow()
{
}

bool wxWindow::Create(wxWindow *parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name)
{
	if (!CreateBase( parent, id, pos, size, style, wxDefaultValidator, name ))
		return false;

    m_id = id;

    if (parent)
    {
        m_parentId = parent->GetId();
        parent->AddChild(this);
    }

	return true;
}

bool wxWindowAndroid::PreCreation( wxWindowAndroid *parent, const wxPoint &pos,  const wxSize &size )
{
    return true;
}

void wxWindow::RemoveChild( wxWindowBase *child )
{
}

void wxWindow::AddChild( wxWindowBase *child )
{
}

wxWindow *wxGetActiveWindow()
{
	return NULL;
}


wxWindow *wxWindowBase::GetCapture()
{
	return NULL;
}

wxWindow *wxWindowBase::DoFindFocus()
{
	return NULL;
}

void wxWindow::DoGetTextExtent(const wxString& string,
                                 int *x, int *y,
                                 int *descent,
                                 int *externalLeading,
                                 const wxFont *font) const
{
}

void wxWindow::DoClientToScreen( int *x, int *y ) const 
{
}

void wxWindow::DoScreenToClient( int *x, int *y ) const 
{
}

void wxWindow::DoGetPosition( int *x, int *y ) const 
{
}

void wxWindow::DoGetSize( int *width, int *height ) const 
{
}

void wxWindow::DoGetClientSize( int *width, int *height ) const 
{
}

void wxWindow::DoSetSize(int x, int y,
                           int width, int height,
                           int sizeFlags) 
{
}

void wxWindow::DoSetClientSize(int width, int height)
{
}

wxSize wxWindow::DoGetBorderSize() const 
{
	return wxSize();
}

void wxWindow::DoMoveWindow(int x, int y, int width, int height) 
{
}

void wxWindow::DoEnable(bool enable) 
{
}

void wxWindow::Raise() 
{
}

void wxWindow::Lower() 
{
}

bool wxWindow::Show( bool show ) 
{
	return true;
}

bool wxWindow::IsRetained() const
{
	return true;
}

void wxWindow::SetFocus() 
{
}

void wxWindow::SetCanFocus(bool canFocus) 
{
}

bool wxWindow::Reparent( wxWindowBase *newParent ) 
{
	return true;
}

void wxWindow::WarpPointer(int x, int y) 
{
}

void wxWindow::Refresh( bool eraseBackground,
		const wxRect *rect ) 
{
}

void wxWindow::Update() 
{
}

void wxWindow::ClearBackground() 
{
}

bool wxWindow::SetBackgroundColour( const wxColour &colour ) 
{
	return true;
}

bool wxWindow::SetForegroundColour( const wxColour &colour ) 
{
	return true;
}

bool wxWindow::SetCursor( const wxCursor &cursor ) 
{
	return true;
}

bool wxWindow::SetFont( const wxFont &font ) 
{
	return true;
}

bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style) 
{
	return true;
}

bool wxWindow::IsTransparentBackgroundSupported(wxString* reason) const 
{
	return true;
}

int wxWindow::GetCharHeight() const 
{
	return 0;
}

int wxWindow::GetCharWidth() const 
{
	return 0;
}

void wxWindow::SetScrollbar( int orient, int pos, int thumbVisible,
                               int range, bool refresh ) 
{
}

void wxWindow::SetScrollPos( int orient, int pos, bool refresh ) 
{
}

int wxWindow::GetScrollPos( int orient ) const 
{
	return 0;
}

int wxWindow::GetScrollThumb( int orient ) const 
{
	return 0;
}

int wxWindow::GetScrollRange( int orient ) const 
{
	return 0;
}

void wxWindow::ScrollWindow( int dx, int dy,
                               const wxRect* rect ) 
{
}

bool wxWindow::ScrollLines(int lines) 
{
	return true;
}

bool wxWindow::ScrollPages(int pages) 
{
	return true;
}

bool wxWindow::DoIsExposed( int x, int y ) const 
{
	return true;
}

bool wxWindow::DoIsExposed( int x, int y, int w, int h ) const 
{
	return true;
}

void wxWindow::SetLayoutDirection(wxLayoutDirection dir)  
{
}

wxLayoutDirection wxWindow::GetLayoutDirection() const  
{
	return wxLayoutDirection();
}

wxCoord wxWindow::AdjustForLayoutDirection(wxCoord x,
                                             wxCoord width,
                                             wxCoord widthTotal) const  
{
	return wxCoord();
}

void wxWindow::DoCaptureMouse() 
{
}

void wxWindow::DoReleaseMouse() 
{
}

wxPoint wxGetMousePosition()
{
    wxPoint pt;
    return pt;
}
