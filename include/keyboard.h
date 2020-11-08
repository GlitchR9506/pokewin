#ifndef KEYB_H
#define KEYB_H

void WIN_ReadKeys(int INPUT) {	//0=none; 1=Keydown; 2=keyup
	
	if (INPUT = 1) {
	switch (event.key.keysym.sym) {
					
					
		case SDLK_LEFT:
						
			STATUS = "Left";
			break;
		case SDLK_RIGHT:
			STATUS = "Right";
			break;
		case SDLK_UP:
			STATUS = "Up";
			break;
		case SDLK_DOWN:
			STATUS = "Down";
			break;

		default:
			//GAME_RUNNING = false;
			break;
			
		}
	}
	
	if (INPUT = 2) {
		
		
		
	}
}

#endif //KEYB_H