#include "LoginFrame.h"

LoginFrame::LoginFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
	wxPanel* panel = new wxPanel(this);
	
	wxButton* loginButton = new wxButton(panel, wxID_ANY, "Login", wxPoint(100,500));
	wxButton* registerButton = new wxButton(panel, wxID_ANY, "Register", wxPoint(300,500));
	wxTextCtrl* userID = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(100,100), wxSize(20,-1));
	wxTextCtrl* password = new wxTextCtrl(panel, wxID_ANY, "",wxPoint(100,200), wxSize(20,-1), wxTE_PASSWORD);

}
