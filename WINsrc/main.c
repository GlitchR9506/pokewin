#include <stdio.h>
#include <stdbool.h> 
#include <string.h> 
#include <time.h>

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Network.h>
#include <SFML/System.h>
#include <SFML/Window.h>


#include <types.h>  //Data type Ex. vector2f

#include <commondefs.h>
#include <commonfuncts.h>
#include <classes.h> // Structures
#include <keyboard.h> // keyboard input
#include <WINtime.h>
#include <tilemap.h>

int main( int argc, char* args[] ) {
	//Initialize things here
	
	window = sfRenderWindow_create(mode, WINDOW_TITLE, sfResize | sfClose, NULL);
    	if (!window) {
		fprintf(stderr, "could not create window: %s\n");
		return 1;                                            
	}

	
	
	
	
	
	while (sfRenderWindow_isOpen(window)) {
		while (GAME_RUNNING) { // Main Game Loop
			/* Process events */
			while (sfRenderWindow_pollEvent(window, &event)) {
			
			if (event.type == sfEvtClosed)
                GAME_RUNNING=false;
			
			if (event.type == sfEvtKeyPressed) {
				WIN_ReadKeys(2);
				
			}
			if (event.type == sfEvtKeyReleased) {
				WIN_ReadKeys(1);
			}
			
			
			
			
			
			}
		
  
     
			if (gSoftResetDisabled == false 
			&& sfKeyboard_isKeyPressed(sfKeyA)
			&& sfKeyboard_isKeyPressed(sfKeyB)
			&& sfKeyboard_isKeyPressed(sfKeyEnter)
			&& sfKeyboard_isKeyPressed(sfKeyLShift)) {
				
				DoSoftReset();
					
			}
			if ((sfKeyboard_isKeyPressed(sfKeyLAlt) || sfKeyboard_isKeyPressed(sfKeyRAlt))
			&& sfKeyboard_isKeyPressed(sfKeyF)
			&& sfKeyboard_isKeyPressed(sfKeyX)) {
				GAME_RUNNING = false;  
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
			}*/

			//PlayTimeCounter_Update();
			//MapMusicMain();
		
			// Update Window
			sfRenderWindow_clear(window, sfColor_fromRGBA(66,66,66,1));
			
			
			
			sfRenderWindow_display(window);
		
			// Change Title
			strcpy(TITLE, "PokeWIN Emerald ");
			strcat(TITLE, GAMEVER_RELEASE_STR);
			strcat(TITLE, ".");
			strcat(TITLE, GAMEVER_BETA_STR);
			strcat(TITLE, ".");
			strcat(TITLE, GAMEVER_ALPHA_STR);
			strcat(TITLE, "; ");
			strcat(TITLE, STATUS);
			strcpy(WINDOW_TITLE, TITLE);
		
			sfWindow_setTitle(window, WINDOW_TITLE);
		
		}
		sfRenderWindow_close(window);
	}
	// Check Save and things
	
	//GAME_RUNNING = true;
	
	// Free things
	
	// And Kill Its Self
    sfRenderWindow_destroy(window);
	return 0;
}
