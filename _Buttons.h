#include "outputSound.h"

void checkButton(){
  switch (gameState) {
    case TITLESCREEN:
      if ((gb.buttons.pressed(BUTTON_A)) || (gb.buttons.pressed(BUTTON_B))) {
        game_initGame();
        gameState=RUN; //MENU
      }
      break;


      
    case MENU:

      break;


      
    case RUN:
      //Pause Game
      if ((gb.buttons.pressed(BUTTON_A)) || (gb.buttons.pressed(BUTTON_B))) {
        gameState = PAUSE;
        outputSound_pause();
      }

      if (gb.buttons.pressed(BUTTON_LEFT)) {
        if((catchGold == false) && (moveSubButton == true) && (hited == false)){
          if (subMove >= 2) {
            // if sub don't have gold
            --subMove;
            outputSound_tick();
          } else if (subGold == true && subMove >= 1) {
            //if sub have gold
            --subMove;
            outputSound_tick();
          }
        }
      }else{
        if(gb.buttons.pressed(BUTTON_RIGHT)){
          if ((catchGold == false) && (moveSubButton == true) && (hited == false)) {
            if (subMove < 5 && subGold == false) {
              ++subMove;
              outputSound_tick();
            } else if (subMove == 5 && subGold == false) {
              catchGold = true;
              subMove = 6;
              outputSound_tick();
            } else if (subMove == 5 && subGold == true) {
              catchGold = true;
              subMove = 6;
              outputSound_tick();
            } else if (subMove < 5 && subGold == true) {
              ++subMove;
              outputSound_tick();
            }
          }
        }
      }
      break;


      
    case PAUSE:
      if ((gb.buttons.pressed(BUTTON_A)) || (gb.buttons.pressed(BUTTON_B))) {
        gameState = RUN;
        outputSound_pause();
      }
      break;


      
    case GAMEOVER:
      if ((gb.buttons.pressed(BUTTON_A)) || (gb.buttons.pressed(BUTTON_B))) {
        gameState = TITLESCREEN;
        outputSound_gameOver();
      }
      break;
  }
}
