///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/apptraits.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/apptrait.h"

class WXDLLIMPEXP_BASE wxEventLoopSourcesManagerBase
{
public:
	virtual ~wxEventLoopSourcesManagerBase() { }
};

wxEventLoopBase *wxGUIAppTraits::CreateEventLoop() 
{
	return NULL;
}

wxTimerImpl *wxGUIAppTraits::CreateTimerImpl(wxTimer *timer) 
{
	return NULL;
}

wxPortId wxGUIAppTraits::GetToolkitVersion(int *majVer, int *minVer) const 
{
	return wxPortId();
}

wxEventLoopSourcesManagerBase* wxGUIAppTraits::GetEventLoopSourcesManager() 
{
	return NULL;
}
