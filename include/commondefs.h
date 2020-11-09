#ifndef COMMONDEFS_H
#define COMMONDEFS_H

static int GAMEVER_RELEASE=0;
static char* GAMEVER_RELEASE_STR="0";
static int GAMEVER_BETA=0;
static char* GAMEVER_BETA_STR="0";
static int GAMEVER_ALPHA=1;
static char* GAMEVER_ALPHA_STR="1";

static char TITLE[256]="PokeWIN Emerald Version";
static char WINDOW_TITLE[256]="PokeWIN Emerald Version";

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

static sfVideoMode mode = {480, 368, 32};

#else
	
static int ResnX=480;
static int ResY=320;

static sfVideoMode mode = {480, 320, 32};
	
#endif


static char* STATUS = "Loading...";
//static vec2i WINDOW_RES; WINDOW_RES.x=240; WINDOW_RES.y=160;

static bool GAME_RUNNING = true;
static bool gSoftResetDisabled = false;

static sfRenderWindow* window;
static sfEvent event;

#include "defs/playerdefs.h"

#endif //COMMONDEFS_H