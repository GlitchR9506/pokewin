#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <iostream>
#include <fstream>
#include <sstream> 

//#include <windows.h>
//#include <Dwmapi.h>

sf::RenderWindow window(sf::VideoMode(1152, 672), "TITLE", sf::Style::Default);

#include "h/inicpp.hpp"
#include "h/tilemap.hpp"
#include "h/defs.hpp"

#include "h/LANG.hpp"
#include "h/keys.hpp"

int** level = new int* [TilesX];

#include "h/load.hpp"
#include "h/calculate.hpp"
#include "h/editor.hpp"
#include "h/player.hpp"


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

    static sf::Texture backgroundT;
    static sf::Texture cursorT0, cursorT1;
    backgroundT.loadFromFile(backgroundPNG);
    cursorT0.loadFromFile(theme + "/cursor/pointer.png");
    cursorT1.loadFromFile(theme + "/cursor/click.png");

    sf::RectangleShape background;
    sf::RectangleShape cursor;
    sf::Vector2f backgroundS(window.getSize().x, window.getSize().y);
    sf::Vector2f cursorS(32, 32);
    background.setSize(backgroundS);
    cursor.setSize(cursorS);
    background.setTexture(&backgroundT);
    cursor.setTexture(&cursorT0);
    background.setPosition(0.f, 0.f);
    cursor.setPosition(0.f, 0.f);


   // window.setMouseCursorVisible(false);

    
    while (window.isOpen()) {

        cursor.setPosition(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);

        calculateCords();
        TileInteractions_editor();


        if (focus) {
            if (!typing) {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                    view.move(0.f, -12.f);
                    xoff = xoff;
                    yoff = yoff + 12;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                    view.move(0.f, 12.f);
                    xoff = xoff;
                    yoff = yoff - 12;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                    view.move(-12.f, 0.f);
                    xoff = xoff + 12;
                    yoff = yoff;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                    view.move(12.f, 0.f);
                    xoff = xoff - 12;
                    yoff = yoff;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::RControl)) {
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y)) {
                    if (TileType == 0) {}
                    else {
                        TileType = TileType - 1;
                    }
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::U)) {
                    //if (TileType == 0) {}
                    //else {
                    TileType = TileType + 1;
                    //}
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::H)) {
                    if (TileType <= 9) {}
                    else {
                        TileType = TileType - 10;
                    }
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::J)) {
                    //if (TileType == 0) {}
                    //else {
                    TileType = TileType + 10;
                    //}
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::B)) {
                    if (TileType <= 99) {}
                    else {
                        TileType = TileType - 100;
                    }
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::N)) {
                    //if (TileType == 0) {}
                    //else {
                    TileType = TileType + 100;
                    //}
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::P)) {

                }
            }
        }
        sf::Event event;
        while (window.pollEvent(event)) {
            if (!typing) {
            }
            if (event.type == sf::Event::MouseButtonPressed) {
                cursor.setTexture(&cursorT1);
            } else {
                    cursor.setTexture(&cursorT0);
            }
            if (event.type == sf::Event::GainedFocus) focus = true;
            if (event.type == sf::Event::LostFocus) focus = false;
            if (event.type == sf::Event::Closed) { window.close(); }
            if (event.type == sf::Event::Resized) {
                // update the view to the new size of the window
                sf::FloatRect visibleArea(0.f, 0.f, event.size.width, event.size.height);
                window.setView(sf::View(visibleArea));
                sf::Vector2f backgroundS(window.getSize().x, window.getSize().y);
                background.setSize(backgroundS);
            }
        }





    //Draw Stuff
        map.update(sf::Vector2u(16, 16), level, TilesX, TilesY);
        window.clear();
        window.setView(gui);
        window.draw(background);

        window.setView(view);
        window.draw(map);




        window.setView(gui);
        window.draw(cursor);
        window.setView(view);
        window.display();
    }
    return EXIT_SUCCESS;
}