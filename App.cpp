#include "App.h"
#include "MainFrame.h"
#include "LoginFrame.h"
#include <wx/wx.h>

bool App::Login() {
	return true;
}

bool App::Register() {
	return false;
}

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("Library Management System");
	LoginFrame* loginFrame = new LoginFrame("Library Management System");
	if (Login()) {
		loginFrame->SetClientSize(800, 600);
		loginFrame->Center();
		loginFrame->Show();
	}
	else if (Register()) {

	}
	else {
		loginFrame->Hide();
		mainFrame->SetClientSize(800, 600);
		mainFrame->Center();
		mainFrame->Show();
	}
	return true;
}