#ifndef COMMONDEFS_H
#define COMMONDEFS_H

static int GAMEVER_RELEASE=0;
static int GAMEVER_BETA=0;
static int GAMEVER_ALPHA=1;

static int GAME_PLAY_TIME=0;
static int GAME_SAVES=0;

static int ResolutionX=240;
static int ResolutionY=160;

static vec2i WINDOW_RES; WINDOW_RES.x=240; WINDOW_RES.y=160;

static char* TITLE="PokeWIN Emerald: Version";
static char* WINDOW_TITLE="PokeWIN Emerald: Version";

static bool GAME_RUNNING = true;

#include "defs/playerdefs.h"

#endif //COMMONDEFS_H