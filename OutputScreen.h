#include "OutputScreen_Sprites.h"
#include "OutputScreen_HDTools.h"

//################################################################################
void outputScreen_titleScreen(){
  drawBackground(splachScreen, spriteGameOver, 0, 0, false);
}

//################################################################################
void outputScreen_gameOver(){
  drawBackground(background, spriteGameOver, 53, 60, true);
}

//################################################################################
void outputScreen_pause(){
  drawBackground(background, spritePauseScreen, 66, 60, true);
}

//################################################################################
void outputScreen_run(){
  draw();
}
