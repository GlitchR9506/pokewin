#include <stdio.h>
#include <stdbool.h> 
#include <string.h> 
#include <time.h>

#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
//#include <SDL2/SDL_ttf.h>

#include <types.h>  //Data type Ex. vector2f

#include <commondefs.h>
#include <commonfuncts.h>
#include <classes.h> // Structures
#include <keyboard.h> // keyboard input
#include <WINtime.h>

int main( int argc, char* args[] ) {
	//Initialize things here
	
	if( SDL_Init( SDL_INIT_EVERYTHING ) < 0 ) { printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() ); return 1; }

	window = SDL_CreateWindow( WINDOW_TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, ResolutionX, ResolutionY, SDL_WINDOW_SHOWN );
	
	if (window == NULL) { fprintf(stderr, "could not create window: %s\n", SDL_GetError()); return 1; }
	
	
    while (GAME_RUNNING) { // Main Game Loop
	
		SDL_Delay(GAME_DELAY);
		Uint64 start = SDL_GetPerformanceCounter();
		//GetSystemTime();
		
		SDL_PollEvent(&event);
	
		while(SDL_PollEvent(&event) != 0) {
			
			if (event.type == SDL_QUIT) { //Check if game is closed
				GAME_RUNNING = false;
			}
			//ReadKeys();
				//STATUS = "Testing";
			if (event.type == SDL_KEYUP) {
				
				WIN_ReadKeys(2);
				
			}
			if (event.type == SDL_KEYDOWN) {
				
				
				WIN_ReadKeys(1);
				
			}
			
		}
		
  
     
        if (gSoftResetDisabled == false
         && (event.key.keysym.sym == SDLK_a)
         && (event.key.keysym.sym == SDLK_b)
         && (event.key.keysym.sym == SDLK_RETURN)
         && (event.key.keysym.sym == SDLK_LSHIFT)
         && (event.key.keysym.sym == SDLK_RSHIFT)) {
            //rfu_REQ_stopMode();
            //rfu_waitREQComplete();
            DoSoftReset();
        }
   
/*
        if (sub_8087634() == 1)
        {
            gLinkTransferringData = TRUE;
            UpdateLinkAndCallCallbacks();
            gLinkTransferringData = FALSE;
        }
        else
        {
            gLinkTransferringData = FALSE;
            UpdateLinkAndCallCallbacks();

            if (sub_80875C8() == 1)
            {
                gMain.newKeys = 0;
                ClearSpriteCopyRequests();
                gLinkTransferringData = TRUE;
                UpdateLinkAndCallCallbacks();
                gLinkTransferringData = FALSE;
            }
        }

        PlayTimeCounter_Update();
        MapMusicMain();
        WaitForVBlank();*/
		
		screenSurface = SDL_GetWindowSurface(window);
		SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
		SDL_UpdateWindowSurface(window);
		
		Uint64 end = SDL_GetPerformanceCounter();
		elapsedMS = (end - start) / (float)SDL_GetPerformanceFrequency() * 1000.0f;
		
		SDL_Delay(floor(GAME_FPSCAP - elapsedMS));
		
		//Change Title
		strcpy(TITLE, "PokeWIN Emerald: ");
		strcat(TITLE, GAMEVER_RELEASE_STR);
		strcat(TITLE, ".");
		strcat(TITLE, GAMEVER_BETA_STR);
		strcat(TITLE, ".");
		strcat(TITLE, GAMEVER_ALPHA_STR);
		strcat(TITLE, "; ");
		strcat(TITLE, STATUS);
		strcpy(WINDOW_TITLE, TITLE);
		
		SDL_SetWindowTitle(window, WINDOW_TITLE);
		
    }
	// Check Save and things
	
	//GAME_RUNNING = true;
	
	// Free things
	
	// And Kill Its Self
    SDL_Quit();
	return 0;
}
