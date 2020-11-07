static bool Button_Menu_FileOpen = false;
static bool Button_Menu_EditOpen = false;
static bool Button_Menu_ViewOpen = false;
static bool Button_Menu_ToolsOpen = false;
static bool Button_Menu_BuildOpen = false;
static bool Button_Menu_WindowOpen = false;
static bool Button_Menu_HelpOpen = false;

void MenuHoverCheck() {
	if (Button_Menu_File.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
		Button_Menu_FileOpen = true;
	} else { Button_Menu_FileOpen = false; }
	if (Button_Menu_Edit.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
		Button_Menu_EditOpen = true;
	} else { Button_Menu_EditOpen = false; }
	if (Button_Menu_View.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
		Button_Menu_ViewOpen = true;
	} else { Button_Menu_ViewOpen = false; }
	if (Button_Menu_Tools.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
		Button_Menu_ToolsOpen = true;
	} else { Button_Menu_ToolsOpen = false; }
	if (Button_Menu_Build.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
		Button_Menu_BuildOpen = true;
	} else { Button_Menu_BuildOpen = false; }
	if (Button_Menu_Window.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
		Button_Menu_WindowOpen = true;
	} else { Button_Menu_WindowOpen = false; }
	if (Button_Menu_Help.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
		Button_Menu_HelpOpen = true;
	} else { Button_Menu_HelpOpen = false; }
}
void allfalse() {
}

static void MenuInteractions() {
	MenuHoverCheck();
	if (Button_Menu_FileOpen) {

	}
	if (Button_Menu_EditOpen) {

	}
	if (Button_Menu_ViewOpen) {

	}
	if (Button_Menu_ToolsOpen) {

	}
	if (Button_Menu_BuildOpen) {

	}
	if (Button_Menu_WindowOpen) {

	}
	if (Button_Menu_HelpOpen) {

	}
	
}
static void MenuDraw() {
	if (Button_Menu_FileOpen) {
		window.draw(Button_Menu_File_Open);
		window.draw(Button_Menu_File_Reload);
		window.draw(Button_Menu_File_Save);
		window.draw(Button_Menu_File_SaveAll);
		window.draw(Button_Menu_File_ExportImage);
		window.draw(Button_Menu_File_Exit);
		
	}
	if (Button_Menu_EditOpen) {
		
	}
	if (Button_Menu_ViewOpen) {
		
	}
	if (Button_Menu_ToolsOpen) {

	}
	if (Button_Menu_BuildOpen) {

	}
	if (Button_Menu_WindowOpen) {

	}
	if (Button_Menu_HelpOpen) {

	}

}