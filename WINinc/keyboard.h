#ifndef KEYBOARD_H
#define KEYBOARD_H

void WIN_ReadKeys(int INPUT) {	//0=none; 1=Keydown; 2=keyup
	
	if (INPUT = 1) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
			STATUS = "Left";
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
			STATUS = "Right";
		}
	
	
	}
	
	if (INPUT = 2) {
		
		
		
	}
}

#endif //KEYBOARD_H