#ifndef COMMONFUNCTS_H
#define COMMONFUNCTS_H

void WIN_SetTitle(char* NEWTITLE) { SDL_SetWindowTitle(window, NEWTITLE); }
void DoSoftReset() {STATUS = "Soft Reset!";}

#endif //COMMONFUNCTS_H