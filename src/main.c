#include <stdio.h>
#include <stdbool.h> 
#include <string.h> 

#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

#include <types.h>  //Data type Ex. vector2f

#include <commondefs.h>
#include <window.h>	//Not Windows

//remove for release
//#define debug
int main( int argc, char* args[] ) {
	//Initialize things here
	
	
	//SDL_SetWindowTitle(window, titles[i]);
	
	SDL_Window* window = NULL;
	SDL_Surface* screenSurface = NULL;
		
	if( SDL_Init( SDL_INIT_EVERYTHING ) < 0 ) {
		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
		return 1;
	}

	window = SDL_CreateWindow(
					WINDOW_TITLE,
					SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
					ResolutionX, ResolutionY,
					SDL_WINDOW_SHOWN
					);
	if (window == NULL) {
		fprintf(stderr, "could not create window: %s\n", SDL_GetError());
		return 1;
	}
	screenSurface = SDL_GetWindowSurface(window);
	SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
	SDL_UpdateWindowSurface(window);
	
	SDL_Event evt;
    while (GAME_RUNNING) { // Main Game Loop
		SDL_WaitEvent(&evt);
			if(evt.type == SDL_QUIT)
				GAME_RUNNING = false;
		//SDL_Delay(2000);
		//SDL_DestroyWindow(window);
		//SDL_Quit();
  
        /*ReadKeys();

        if (gSoftResetDisabled == FALSE
         && (gMain.heldKeysRaw & A_BUTTON)
         && (gMain.heldKeysRaw & B_START_SELECT) == B_START_SELECT)
        {
            rfu_REQ_stopMode();
            rfu_waitREQComplete();
            DoSoftReset();
        }

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
    }
	// Check Save and things
	
	// Free things
	
	// And Kill Its Self
    SDL_Quit();
	return 0;
}
