#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	//wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 250), wxSize(200, 100));
	CreateStatusBar();
	panel->Bind(wxEVT_KEY_DOWN, &MainFrame::onKeyEvent, this);
}

void MainFrame::onMouseEvent(wxMouseEvent& evt) {
	wxPoint mousePos = wxGetMousePosition();
	mousePos = this->ScreenToClient(mousePos);
	wxString message = wxString::Format("Mouse Event Detected! (x=%d y=%d)", mousePos.x, mousePos.y);
	wxLogStatus(message);
		;
}

void MainFrame::onKeyEvent(wxKeyEvent& evt) {
	wxChar keyChar = evt.GetUnicodeKey();

	if (keyChar == WXK_NONE) {
		int keyCode = evt.GetKeyCode();
		wxLogStatus("Key Event %d", keyCode);
	}
	else {
		wxLogStatus("Key Event: %c", keyChar);
	}

	
}