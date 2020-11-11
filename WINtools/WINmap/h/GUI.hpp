
static sf::RectangleShape background;
static sf::RectangleShape cursor;
static sf::RectangleShape CpRcard;
static sf::RectangleShape searchBar;
static sf::RectangleShape menuBar;
static sf::RectangleShape statusBar;
static sf::RectangleShape statusBarCapL;
static sf::RectangleShape statusBarCapR;
static sf::RectangleShape Button_Menu_File;
static sf::RectangleShape Button_Menu_File_Open;
static sf::RectangleShape Button_Menu_File_Reload;
static sf::RectangleShape Button_Menu_File_Save;
static sf::RectangleShape Button_Menu_File_SaveAll;
static sf::RectangleShape Button_Menu_File_ExportImage;
static sf::RectangleShape Button_Menu_File_Exit;
static sf::RectangleShape Button_Menu_Edit;
static sf::RectangleShape Button_Menu_View;
static sf::RectangleShape Button_Menu_Tools;
static sf::RectangleShape Button_Menu_Build;
static sf::RectangleShape Button_Menu_Window;
static sf::RectangleShape Button_Menu_Help;

static sf::Vector2f backgroundS(window.getSize().x, window.getSize().y);
static sf::Vector2f cursorS(32, 32);
static sf::Vector2f CpRcardS(128,128);
static sf::Vector2f searchBarS(128,24);
static sf::Vector2f menuBarS(window.getSize().x-384,32);
static sf::Vector2f statusBarS(window.getSize().x-16,32);
static sf::Vector2f statusBarCapS(8,32);
static sf::Vector2f Button_MenuS0(48,20);
static sf::Vector2f Button_MenuS1(128,20);

static sf::Texture backgroundT;
static sf::Texture cursorT0, cursorT1;
static sf::Texture CpRcardT;
static sf::Texture searchBarT;
static sf::Texture menuBarT;
static sf::Texture statusBarT;
static sf::Texture statusBarCapLT;
static sf::Texture statusBarCapRT;
static sf::Texture Button_Menu_FileT;

static sf::Text Button_Menu_FileX;
static sf::Text Button_Menu_EditX;
static sf::Text Button_Menu_ViewX;
static sf::Text Button_Menu_ToolsX;
static sf::Text Button_Menu_BuildX;
static sf::Text Button_Menu_WindowX;
static sf::Text Button_Menu_HelpX;

static sf::Font font;

#include "menu.hpp"


static void GUIload() {
	backgroundT.loadFromFile(backgroundPNG);
	cursorT0.loadFromFile(theme + "/cursor/pointer.png");
	cursorT1.loadFromFile(theme + "/cursor/click.png");
	CpRcardT.loadFromFile(theme + "/CpRcard.png");
	searchBarT.loadFromFile(theme + "/searchbar.png");
	menuBarT.loadFromFile(theme + "/menubar.png");
	statusBarT.loadFromFile(theme + "/statusbar.png");
	statusBarCapLT.loadFromFile(theme + "/barcap.png");
	statusBarCapRT.loadFromFile(theme + "/barcap.png");
	Button_Menu_FileT.loadFromFile(theme + "/button.png");

	font.loadFromFile(theme + "/font.ttf");

}
static void GUIinit() {
	GUIload();
	background.setSize(backgroundS);
	cursor.setSize(cursorS);
	CpRcard.setSize(CpRcardS);
	searchBar.setSize(searchBarS);
	menuBar.setSize(menuBarS);
	statusBar.setSize(statusBarS);
	statusBarCapL.setSize(statusBarCapS);
	statusBarCapR.setSize(statusBarCapS);
	Button_Menu_File.setSize(Button_MenuS0);
	Button_Menu_File_Open.setSize(Button_MenuS1);
	Button_Menu_File_Reload.setSize(Button_MenuS1);
	Button_Menu_File_Save.setSize(Button_MenuS1);
	Button_Menu_File_SaveAll.setSize(Button_MenuS1);
	Button_Menu_File_ExportImage.setSize(Button_MenuS1);
	Button_Menu_File_Exit.setSize(Button_MenuS1);
	Button_Menu_Edit.setSize(Button_MenuS0);
	Button_Menu_View.setSize(Button_MenuS0);
	Button_Menu_Tools.setSize(Button_MenuS0);
	Button_Menu_Build.setSize(Button_MenuS0);
	Button_Menu_Window.setSize(Button_MenuS0);
	Button_Menu_Help.setSize(Button_MenuS0);

	Button_Menu_FileX.setCharacterSize(8);
	Button_Menu_EditX.setCharacterSize(8);
	Button_Menu_ViewX.setCharacterSize(8);
	Button_Menu_ToolsX.setCharacterSize(8);
	Button_Menu_BuildX.setCharacterSize(8);
	Button_Menu_WindowX.setCharacterSize(8);
	Button_Menu_HelpX.setCharacterSize(8);


	menuBarT.setRepeated(true);
	statusBarT.setRepeated(true);

	background.setTexture(&backgroundT);
	cursor.setTexture(&cursorT0);
	CpRcard.setTexture(&CpRcardT);
	searchBar.setTexture(&searchBarT);
	menuBar.setTexture(&menuBarT);
	statusBar.setTexture(&statusBarT);
	statusBarCapL.setTexture(&statusBarCapLT);
	statusBarCapR.setTexture(&statusBarCapRT);
	Button_Menu_File.setTexture(&Button_Menu_FileT);
	Button_Menu_File_Open.setTexture(&Button_Menu_FileT);
	Button_Menu_File_Reload.setTexture(&Button_Menu_FileT);
	Button_Menu_File_Save.setTexture(&Button_Menu_FileT);
	Button_Menu_File_SaveAll.setTexture(&Button_Menu_FileT);
	Button_Menu_File_ExportImage.setTexture(&Button_Menu_FileT);
	Button_Menu_File_Exit.setTexture(&Button_Menu_FileT);
	Button_Menu_Edit.setTexture(&Button_Menu_FileT);
	Button_Menu_View.setTexture(&Button_Menu_FileT);
	Button_Menu_Tools.setTexture(&Button_Menu_FileT);
	Button_Menu_Build.setTexture(&Button_Menu_FileT);
	Button_Menu_Window.setTexture(&Button_Menu_FileT);
	Button_Menu_Help.setTexture(&Button_Menu_FileT);

	Button_Menu_FileX.setFont(font);
	Button_Menu_EditX.setFont(font);
	Button_Menu_ViewX.setFont(font);
	Button_Menu_ToolsX.setFont(font);
	Button_Menu_BuildX.setFont(font);
	Button_Menu_WindowX.setFont(font);
	Button_Menu_HelpX.setFont(font);

	Button_Menu_FileX.setString("File");
	Button_Menu_EditX.setString("Edit");
	Button_Menu_ViewX.setString("View");
	Button_Menu_ToolsX.setString("Tools");
	Button_Menu_BuildX.setString("Build");
	Button_Menu_WindowX.setString("Window");
	Button_Menu_HelpX.setString("Help");


	background.setPosition(0.f, 0.f);
	cursor.setPosition(0.f, 0.f);
	CpRcard.setPosition(0.f, 0.f);
	searchBar.setPosition(0.f, 128.f);
	menuBar.setPosition(128.f, 120.f);
	statusBar.setPosition(8.f, window.getSize().y-32.f);
	statusBarCapL.setPosition(0.f, window.getSize().y - 32.f);
	statusBarCapR.setPosition(window.getSize().x-8.f, window.getSize().y - 32.f);
	Button_Menu_File.setPosition(128.f, 132.f);
	Button_Menu_File_Open.setPosition(128.f, 152.f);
	Button_Menu_File_Reload.setPosition(128.f, 172.f);
	Button_Menu_File_Save.setPosition(128.f, 192.f);
	Button_Menu_File_SaveAll.setPosition(128.f, 212.f);
	Button_Menu_File_ExportImage.setPosition(128.f, 232.f);
	Button_Menu_File_Exit.setPosition(128.f, 252.f);
	Button_Menu_Edit.setPosition(176.f, 132.f);
	Button_Menu_View.setPosition(224.f, 132.f);
	Button_Menu_Tools.setPosition(272.f, 132.f);
	Button_Menu_Build.setPosition(320.f, 132.f);
	Button_Menu_Window.setPosition(368.f, 132.f);
	Button_Menu_Help.setPosition(416.f, 132.f);

	Button_Menu_FileX.setPosition(132.f, 132.f);
	Button_Menu_EditX.setPosition(180.f, 132.f);
	Button_Menu_ViewX.setPosition(228.f, 132.f);
	Button_Menu_ToolsX.setPosition(276.f, 132.f);
	Button_Menu_BuildX.setPosition(324.f, 132.f);
	Button_Menu_WindowX.setPosition(372.f, 132.f);
	Button_Menu_HelpX.setPosition(420.f, 132.f);




}
static void GUIdraw() {

	window.clear();
	window.setView(gui);
	window.draw(background);

	window.setView(view);
	window.draw(map);




	window.setView(gui);
	window.draw(CpRcard);
	window.draw(searchBar);
	window.draw(menuBar);
	window.draw(statusBar);
	window.draw(statusBarCapL);
	window.draw(statusBarCapR);

	window.draw(Button_Menu_File);
	window.draw(Button_Menu_Edit);
	window.draw(Button_Menu_View);
	window.draw(Button_Menu_Tools);
	window.draw(Button_Menu_Build);
	window.draw(Button_Menu_Window);
	window.draw(Button_Menu_Help);

	window.draw(Button_Menu_FileX);
	window.draw(Button_Menu_EditX);
	window.draw(Button_Menu_ViewX);
	window.draw(Button_Menu_ToolsX);
	window.draw(Button_Menu_BuildX);
	window.draw(Button_Menu_WindowX);
	window.draw(Button_Menu_HelpX);

	MenuDraw();

	window.draw(cursor);

	window.display();
}
static bool isGUIhover() {

	if (CpRcard.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
		return true;
	if (searchBar.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
		return true;
	if (menuBar.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
		return true;
	if (statusBar.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
		return true;
	if (statusBarCapL.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
		return true;
	if (statusBarCapR.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
		return true;

	if (Button_Menu_File.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
		return true;

	return false;
}