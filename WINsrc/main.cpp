#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <iostream>
#include <fstream>
#include <sstream> 


#include <inicpp.hpp>
#include <tilemap.hpp>
#include "h/defs.hpp"
#include <commondefs.h>

int** level = new int* [TilesX];


#include <iniload.hpp>
#include <calculate.hpp>
#include <editor.hpp>
#include <types.h>  //Data type Ex. vector2f

#include <commonfuncts.h>
#include <classes.h> // Structures
#include <keyboard.h> // keyboard input
#include <WINtime.h>
#include <WINGUI.h>


//#pragma comment (lib, "Dwmapi.lib")


int main() {
    int TD = 0;
    // Create the main window
    sf::ContextSettings settings;
    settings.depthBits = 24;
    settings.stencilBits = 8;
    settings.antialiasingLevel = 0;
    settings.majorVersion = 0;
    settings.minorVersion = 3;
    window.setFramerateLimit(60);

    sf::View currentView = window.getView();
    window.setView(view);

    //create 2DMap Arrays
        for (int i = 0; i <= TilesX; ++i) {
            level[i] = new int[TilesY];
        }
    //initalize 2DMap Arrays
    {
        int i = 0;
        while (i <= TilesX) {
            int j = 0;
            while (j <= TilesY) {
                level[i][j] = 10;
                j++;
            }
            i++;
        }
    }
    map.load(TileSet, sf::Vector2u(16, 16), level, TilesX, TilesY);
    map.update(sf::Vector2u(16, 16), level, TilesX, TilesY);

    // window.setMouseCursorVisible(false);

    //GUIinit();
    //draw();

    while (window.isOpen()) {
        //drawUpdate();


        calculateCords();
        if (!isGUIhover())
            TileInteractions_editor();
        //MenuInteractions();


        if (focus) {
			
        }
        
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::GainedFocus) focus = true;
            if (event.type == sf::Event::LostFocus) focus = false;
            if (event.type == sf::Event::Closed) { window.close(); }
            if (event.type == sf::Event::Resized) {
                // update the view to the new size of the window
                sf::FloatRect visibleArea(0.f, 0.f, event.size.width, event.size.height);
                window.setView(sf::View(visibleArea));
                //sf::Vector2f backgroundS(window.getSize().x, window.getSize().y);
                //background.setSize(backgroundS);
            }
        }
		if (gSoftResetDisabled == false 
		&& sf::Keyboard::isKeyPressed(sf::Keyboard::A)
		&& sf::Keyboard::isKeyPressed(sf::Keyboard::B)
		&& sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)
		&& sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)) {
			
			DoSoftReset();
				
		}
		if ((sf::Keyboard::isKeyPressed(sf::Keyboard::LAlt) || sf::Keyboard::isKeyPressed(sf::Keyboard::RAlt))
		&& sf::Keyboard::isKeyPressed(sf::Keyboard::F)
		&& sf::Keyboard::isKeyPressed(sf::Keyboard::X)) {
			GAME_RUNNING = false;  
		}
			
		WINDOW_TITLE = TITLE + " " + std::to_string(GAMEVER_RELEASE) + "." + std::to_string(GAMEVER_BETA) + "." + std::to_string(GAMEVER_ALPHA) + "; " + STATUS;
		window.setTitle(WINDOW_TITLE);
		
        //sf::FloatRect visibleArea(0.f, 0.f, event.size.width, event.size.height);			//Enable For=========
        //window.setView(sf::View(visibleArea));											//==========Acid Trip
		
        map.update(sf::Vector2u(16, 16), level, TilesX, TilesY);
        //Draw Stuff
        GUIdraw();
    }
    return EXIT_SUCCESS;
}