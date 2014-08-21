#include "wx/wx.h"
#include "wx/notifmsg.h"

#define BUTTON1_ID 1
#define BUTTON2_ID 2
#define FRAME_1_ID 3
#define FRAME_2_ID 4
#define TEXTCTRL 5

class MyFrame2: public wxFrame
{
public:
    MyFrame2(const wxString& title) 
	: wxFrame((wxFrame *)NULL, FRAME_2_ID, title)  
    {
	LOGW("MyFrame2 constructor.");
        wxTextCtrl * m_textCtrl = new wxTextCtrl(this, TEXTCTRL, wxT("New wxTextCtrl"), wxPoint(0, 120), wxSize(400, 100));   
    }
};

class MyFrame: public wxFrame
{
public:
    MyFrame(const wxString& title) 
	: wxFrame((wxFrame *)NULL, FRAME_1_ID, title) 
    {
        m_frame = new MyFrame2(wxGetOsDescription());
        m_textCtrl = new wxTextCtrl(this, TEXTCTRL, wxT("Write something here"), wxPoint(0, 120), wxSize(400, 100));   
        m_notifyButton = new wxButton(this, BUTTON2_ID, wxT("wxNotificationMessage"), wxPoint(0, 240), wxSize(300, 100));
    }
    	
    void OnClick1( wxCommandEvent& event ) 
    {
        if(m_frame)
    	    m_frame->Show(true);
      
	wxNotificationMessage message("", wxT("New wxFrame!"));
	message.Show(0);
    }

    void OnClick2( wxCommandEvent& event ) 
    {
        if(m_textCtrl) 
        {
            wxNotificationMessage message("", m_textCtrl->GetValue());
	    message.Show(0);
        }
	
    }
    
    DECLARE_EVENT_TABLE()

private:
    wxTextCtrl * m_textCtrl;
    wxButton * m_notifyButton;
    MyFrame2* m_frame;
};

class MyAPP : public wxApp
{
public:
        MyAPP() { LOGW("wxApp Constructor"); }

	virtual bool OnInit() {
		// Create the main frame window
    		MyFrame* frame = new MyFrame(wxT("Hello wxWidgets!"));
   		frame->Show(true);
		wxButton * btn = new wxButton(frame, BUTTON1_ID, wxT("New wxFrame"), wxPoint(0, 0), wxSize(150, 100));
                           

		return true;
	}
};



BEGIN_EVENT_TABLE ( MyFrame, wxFrame )
    EVT_BUTTON ( BUTTON1_ID, MyFrame::OnClick1 ) 
    EVT_BUTTON ( BUTTON2_ID, MyFrame::OnClick2 ) 
END_EVENT_TABLE()


IMPLEMENT_APP(MyAPP)
