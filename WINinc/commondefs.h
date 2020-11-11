#ifndef COMMONDEFS_H
#define COMMONDEFS_H

static int GAMEVER_RELEASE=0;
static int GAMEVER_BETA=0;
static int GAMEVER_ALPHA=1;

std::string TITLE = "PokeWIN Emerald";
std::string WINDOW_TITLE = "...";
std::string STATUS = "Loading...";

static int GAME_PLAY_TIME=0;
static int GAME_SAVES=0;

static int GAME_DELAY=200;
static int GAME_SPEED=5;

static float elapsedMS=0;
static float GAME_FPSCAP=16.666f;

static time_t SYSTIME;

static int TILE_SIZEX=16;
static int TILE_SIZEY=16;

#ifdef DEBUG

static int ResX=480;
static int ResY=368;


#else
	
static int ResnX=480;
static int ResY=320;

	
#endif


sf::RenderWindow window(sf::VideoMode(ResX, ResY), "TITLE", sf::Style::Default);

static bool GAME_RUNNING = true;
static bool gSoftResetDisabled = false;

static sf::Event event;

#include "defs/playerdefs.h"

#endif //COMMONDEFS_H