///////////////////////////////////////////////////////////////////////////////
// Name:        src/android/notifmsg.cpp
// Purpose:     
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/notifmsg.h"

#include "wx/android/private/definitions.h"
#include "wx/android/private/wrappers.h"

// ----------------------------------------------------------------------------
// wxNotificationMessage
// ----------------------------------------------------------------------------

void wxNotificationMessage::Init()
{
}

bool wxNotificationMessage::Show(int timeout)
{
    CALL_STATIC_VOID(BIND_TOAST_METHOD, BIND_TOAST_ARGS, timeout, 
    	WXSTR(GetFullMessage()));
}

bool wxNotificationMessage::Close()
{
}

