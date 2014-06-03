///////////////////////////////////////////////////////////////////////////////
// Name:        wx/jni/evtloop.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/evtloop.h"

wxGUIEventLoop::~wxGUIEventLoop()
{
}

int wxGUIEventLoop::DoRun()
{
}

void wxGUIEventLoop::ScheduleExit(int rc)
{
}

bool wxGUIEventLoop::Pending() const
{
}

bool wxGUIEventLoop::Dispatch()
{
}

void wxGUIEventLoop::DoYieldFor(long eventsToProcess)
{
}
