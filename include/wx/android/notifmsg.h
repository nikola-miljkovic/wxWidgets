///////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/notifmsg.h
// Purpose:     wxNotificationMessage for Android
// Author:      Nikola Miljkovic
// Created:     
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_NOTIFMSG_H_
#define _WX_ANDROID_NOTIFMSG_H_

// ----------------------------------------------------------------------------
// wxNotificationMessage
// ----------------------------------------------------------------------------

class WXDLLIMPEXP_ADV wxNotificationMessage : public wxNotificationMessageBase
{
public:
    wxNotificationMessage() { Init(); }
    wxNotificationMessage(const wxString& title,
                          const wxString& message = wxString(),
                          wxWindow *parent = NULL,
                          int flags = wxICON_INFORMATION)
        : wxNotificationMessageBase(title, message, parent, flags)
    {
        Init();
    }

    virtual ~wxNotificationMessage() {};


    virtual bool Show(int timeout = Timeout_Auto);
    virtual bool Close();

private:
    void Init();

    wxDECLARE_NO_COPY_CLASS(wxNotificationMessage);
};

#endif // _WX_ANDROID_NOTIFMSG_H_

