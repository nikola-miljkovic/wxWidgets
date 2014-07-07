/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/window.h
// Purpose:
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_WINDOW_H_
#define _WX_ANDROID_WINDOW_H_

//-----------------------------------------------------------------------------
// wxWindowAndroid
//-----------------------------------------------------------------------------

class WXDLLIMPEXP_CORE wxWindowAndroid: public wxWindowBase
{
public:
    // creating the window
    // -------------------
    wxWindowAndroid();
    wxWindowAndroid(wxWindow *parent,
                wxWindowID id,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = 0,
                const wxString& name = wxPanelNameStr);

    bool Create(wxWindow *parent,
                wxWindowID id,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = 0,
                const wxString& name = wxPanelNameStr);

    bool PreCreation( wxWindowAndroid *parent, const wxPoint &pos, const wxSize &size );

    virtual ~wxWindowAndroid();
    
    // implement pure virtual method's
    virtual void Raise() wxOVERRIDE;
    virtual void Lower() wxOVERRIDE;

    virtual bool Show( bool show = true ) wxOVERRIDE;

    virtual bool IsRetained() const wxOVERRIDE;

    virtual void SetFocus() wxOVERRIDE;

    virtual void SetCanFocus(bool canFocus) wxOVERRIDE;

    virtual bool Reparent( wxWindowBase *newParent ) wxOVERRIDE;

    virtual void WarpPointer(int x, int y) wxOVERRIDE;

    virtual void Refresh( bool eraseBackground = true,
                          const wxRect *rect = (const wxRect *) NULL ) wxOVERRIDE;
    virtual void Update() wxOVERRIDE;
    virtual void ClearBackground() wxOVERRIDE;

    virtual bool SetBackgroundColour( const wxColour &colour ) wxOVERRIDE;
    virtual bool SetForegroundColour( const wxColour &colour ) wxOVERRIDE;
    virtual bool SetCursor( const wxCursor &cursor ) wxOVERRIDE;
    virtual bool SetFont( const wxFont &font ) wxOVERRIDE;

    virtual bool SetBackgroundStyle(wxBackgroundStyle style) wxOVERRIDE ;
    virtual bool IsTransparentBackgroundSupported(wxString* reason = NULL) const wxOVERRIDE;

    virtual int GetCharHeight() const wxOVERRIDE;
    virtual int GetCharWidth() const wxOVERRIDE;

    virtual void SetScrollbar( int orient, int pos, int thumbVisible,
                               int range, bool refresh = true ) wxOVERRIDE;
    virtual void SetScrollPos( int orient, int pos, bool refresh = true ) wxOVERRIDE;
    virtual int GetScrollPos( int orient ) const wxOVERRIDE;
    virtual int GetScrollThumb( int orient ) const wxOVERRIDE;
    virtual int GetScrollRange( int orient ) const wxOVERRIDE;
    virtual void ScrollWindow( int dx, int dy,
                               const wxRect* rect = NULL ) wxOVERRIDE;
    virtual bool ScrollLines(int lines) wxOVERRIDE;
    virtual bool ScrollPages(int pages) wxOVERRIDE;

#if wxUSE_DRAG_AND_DROP
    virtual void SetDropTarget( wxDropTarget *dropTarget ) wxOVERRIDE;
#endif // wxUSE_DRAG_AND_DROP

    virtual void AddChild( wxWindowBase *child ) wxOVERRIDE;
    virtual void RemoveChild( wxWindowBase *child ) wxOVERRIDE;

    virtual void SetLayoutDirection(wxLayoutDirection dir) wxOVERRIDE;
    virtual wxLayoutDirection GetLayoutDirection() const wxOVERRIDE;
    virtual wxCoord AdjustForLayoutDirection(wxCoord x,
                                             wxCoord width,
                                             wxCoord widthTotal) const wxOVERRIDE;

    virtual bool DoIsExposed( int x, int y ) const wxOVERRIDE;
    virtual bool DoIsExposed( int x, int y, int w, int h ) const wxOVERRIDE;
    
    virtual WXWidget GetHandle() const wxOVERRIDE { return NULL; }
    
    virtual void SetLabel(const wxString& WXUNUSED(label)) { };
    virtual wxString GetLabel() const { return wxEmptyString; }

protected:
    // implement the base class pure virtuals
    virtual void DoGetTextExtent(const wxString& string,
                                 int *x, int *y,
                                 int *descent = NULL,
                                 int *externalLeading = NULL,
                                 const wxFont *font = NULL) const wxOVERRIDE;
    virtual void DoClientToScreen( int *x, int *y ) const wxOVERRIDE;
    virtual void DoScreenToClient( int *x, int *y ) const wxOVERRIDE;
    virtual void DoGetPosition( int *x, int *y ) const wxOVERRIDE;
    virtual void DoGetSize( int *width, int *height ) const wxOVERRIDE;
    virtual void DoGetClientSize( int *width, int *height ) const wxOVERRIDE;
    virtual void DoSetSize(int x, int y,
                           int width, int height,
                           int sizeFlags = wxSIZE_AUTO) wxOVERRIDE;
    virtual void DoSetClientSize(int width, int height) wxOVERRIDE;
    virtual wxSize DoGetBorderSize() const wxOVERRIDE;
    virtual void DoMoveWindow(int x, int y, int width, int height) wxOVERRIDE;
    virtual void DoEnable(bool enable) wxOVERRIDE;

#if wxUSE_MENUS_NATIVE
    virtual bool DoPopupMenu( wxMenu *menu, int x, int y ) wxOVERRIDE;
#endif // wxUSE_MENUS_NATIVE
    
    virtual void DoCaptureMouse() wxOVERRIDE;
    virtual void DoReleaseMouse() wxOVERRIDE;

    wxString	m_label;

    wxWindowID  m_parentId;
    wxWindowID  m_id;

private:
   
    DECLARE_DYNAMIC_CLASS(wxWindowAndroid)
};

#endif // _WX_ANDROID_WINDOW_H_
