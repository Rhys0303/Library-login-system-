#pragma once
#include <wx/wx.h>
#include <wx/listctrl.h>
#include <string>
#include "LoginFrame.h"
#include "User.h"

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title, LoginFrame* loginFrame);
private:
};

