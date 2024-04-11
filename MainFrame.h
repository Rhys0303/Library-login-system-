#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
private:
	void onMouseEvent(wxMouseEvent& evt);
	void onKeyEvent(wxKeyEvent& evt);
};

