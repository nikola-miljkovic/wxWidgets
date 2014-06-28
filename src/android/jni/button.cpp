///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/button.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/button.h"

#include "wx/android/private/wrappers.h"
#include "wx/android/private/definitions.h"
#include "wx/android/private/globals.h"
#include "wx/android/private/params.h"

wxButton::~wxButton() 
{

}

bool wxButton::Create(wxWindow *parent, wxWindowID id,
           const wxString& label,
           const wxPoint& pos,
           const wxSize& size, long style,
           const wxValidator& validator,
           const wxString& name) 
{
  CALL_STATIC_VOID("addView", "(IIIIIILjava/lang/String;)V", 
    id, parent->GetId(), size.GetWidth(), size.GetHeight(), pos.x, pos.y, wxAndroid::Env->NewStringUTF(WXBUTTON_C));
  
  m_id = id;
  m_parentId = parent->GetId();

  SetLabel(label);
}

wxSize wxButton::DoGetBestSize() const
{
	return wxSize(0,0);
}

void wxButton::DoApplyWidgetStyle(WXStyle *style) 
{

}

void wxButton::SetLabel(const wxString &label)
{
  MethodParams params(1);
  params.AddParam(JCHSEQ, WXSTR(label)); 
  INVOKE_VIEW_METHOD("setText", m_parentId, m_id, params.GetTypes(), params.GetValues());
}

wxWindow* wxButton::SetDefault()
{
	return NULL;
}