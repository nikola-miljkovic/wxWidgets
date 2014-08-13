///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/textctrl.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/textctrl.h"

#include "wx/android/private/wrappers.h"
#include "wx/android/private/definitions.h"
#include "wx/android/private/globals.h"
#include "wx/android/private/params.h"

BEGIN_EVENT_TABLE(wxTextCtrl, wxTextCtrlBase)
    EVT_CHAR(wxTextCtrl::OnChar)
    EVT_DROP_FILES(wxTextCtrl::OnDropFiles)

    EVT_MENU(wxID_CUT, wxTextCtrl::OnCut)
    EVT_MENU(wxID_COPY, wxTextCtrl::OnCopy)
    EVT_MENU(wxID_PASTE, wxTextCtrl::OnPaste)
    EVT_MENU(wxID_UNDO, wxTextCtrl::OnUndo)
    EVT_MENU(wxID_REDO, wxTextCtrl::OnRedo)

    EVT_UPDATE_UI(wxID_CUT, wxTextCtrl::OnUpdateCut)
    EVT_UPDATE_UI(wxID_COPY, wxTextCtrl::OnUpdateCopy)
    EVT_UPDATE_UI(wxID_PASTE, wxTextCtrl::OnUpdatePaste)
    EVT_UPDATE_UI(wxID_UNDO, wxTextCtrl::OnUpdateUndo)
    EVT_UPDATE_UI(wxID_REDO, wxTextCtrl::OnUpdateRedo)
END_EVENT_TABLE()

wxTextCtrl::~wxTextCtrl() 
{

}

void wxTextCtrl::Init() 
{

}

bool wxTextCtrl::Create(wxWindow *parent, wxWindowID id,
           const wxString& value,
           const wxPoint& pos,
           const wxSize& size, long style,
           const wxValidator& validator,
           const wxString& name) 
{
  if(!CreateBase(parent, id, pos, size, style, wxDefaultValidator, name ))
        return false;

  wxControl::Create(parent, id, pos, size, style, wxDefaultValidator, name);

  CALL_STATIC_VOID("addView", "(IIIIIILjava/lang/String;J)V", 
    id, m_parentId, size.GetWidth(), size.GetHeight(), pos.x, pos.y, 
    wxAndroid::Env->NewStringUTF(WXTEXTCTRL_C), reinterpret_cast<jlong>(this));

  if(value != wxEmptyString)
    WriteText(value);
}

void wxTextCtrl::WriteText(const wxString& text)
{
  wxControl::SetLabel(text);

  MethodParams params(1);
  params.AddParam(JCHSEQ, WXSTR(text)); 
  INVOKE_VIEW_METHOD("setText", m_parentId, m_id, params.GetTypes(), params.GetValues());
}

wxString wxTextCtrl::GetValue() const 
{
  return wxControl::GetLabel();
}

bool wxTextCtrl::IsEmpty() const 
{
  return false;
}

void wxTextCtrl::OnChar(wxKeyEvent &event)
{
}

void wxTextCtrl::OnDropFiles(wxDropFilesEvent &event)
{
}

void wxTextCtrl::OnCut(wxCommandEvent& event)
{
}

void wxTextCtrl::OnCopy(wxCommandEvent& event)
{
}

void wxTextCtrl::OnPaste(wxCommandEvent& event)
{
}

void wxTextCtrl::OnUndo(wxCommandEvent& event)
{
}

void wxTextCtrl::OnRedo(wxCommandEvent& event)
{
}

void wxTextCtrl::OnUpdateCut(wxUpdateUIEvent& event)
{
}

void wxTextCtrl::OnUpdateCopy(wxUpdateUIEvent& event)
{
}

void wxTextCtrl::OnUpdatePaste(wxUpdateUIEvent& event)
{
}

void wxTextCtrl::OnUpdateUndo(wxUpdateUIEvent& event)
{
}

void wxTextCtrl::OnUpdateRedo(wxUpdateUIEvent& event)
{
}

long wxTextCtrl::XYToPosition(long x, long y) const
{
}

bool wxTextCtrl::PositionToXY(long pos, long *x, long *y) const
{
}

void wxTextCtrl::ShowPosition(long pos)
{
}

bool wxTextCtrl::SetStyle(long start, long end, const wxTextAttr& style)
{
}

bool wxTextCtrl::GetStyle(long position, wxTextAttr& style)
{
}

int wxTextCtrl::GetLineLength(long lineNo) const 
{
}

wxString wxTextCtrl::GetLineText(long lineNo) const 
{
}

int wxTextCtrl::GetNumberOfLines() const
{
}

bool wxTextCtrl::IsModified() const
{
}

bool wxTextCtrl::IsEditable() const 
{
}

void wxTextCtrl::GetSelection(long* from, long* to) const
{
}

void wxTextCtrl::Remove(long from, long to)
{
}

void wxTextCtrl::MarkDirty()
{
}

void wxTextCtrl::DiscardEdits()
{
}

bool wxTextCtrl::SetFont(const wxFont& font)
{
}

bool wxTextCtrl::SetForegroundColour(const wxColour& colour)
{
}

bool wxTextCtrl::SetBackgroundColour(const wxColour& colour)
{
}
