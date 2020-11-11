#include "cmddefs.hpp"

static void draw() {
	std::cout << "\033[1;1H\033[48;5;7m\033[38;5;0m";
	for (int i = 0; i < 80; i++) {
		for (int j = 0; j < 25; j++) {
			std::cout << " ";
		}
		std::cout << "\n";
	}

	std::cout << "\033[1;1H\033[48;5;8m\033[38;5;0m";
	for (int i = 0; i < 80; i++) {
		std::cout << " ";
	}
}
static void drawUpdate() {

	std::cout << "\033[1;1H\033[48;5;8m\033[38;5;0m";
	for (int i = 0; i < 80; i++) {
		std::cout << " ";
	}
}
void cmdMAIN() {
	//This is where the Command Prompt Magic Happens
	//


}