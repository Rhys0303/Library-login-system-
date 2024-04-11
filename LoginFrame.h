#pragma once
#include<wx/wx.h>

class LoginFrame : public wxFrame
{
public:
	LoginFrame(const wxString& title);
private:
	void onLoginButtonClicked(wxCommandEvent& evt);
	void onRegisterButtonClicked(wxCommandEvent& evt);
	
};

