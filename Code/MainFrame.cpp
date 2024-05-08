#include "MainFrame.h"
#include "LoginFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title, LoginFrame* loginFrame) : wxFrame(nullptr, wxID_ANY, title) {
	loginFrame->Destroy();

}


