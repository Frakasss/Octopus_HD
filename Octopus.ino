// -------------------------------------------------------------
// Octopus Game & Watch for META
// version make by Jean-Charles LEBEAU
// 01/03/2020 
// -------------------------------------------------------------
//
// Special thanks:
//
// To Roby for his Arduboy version: 
// https://github.com/rferrari81/Arduboy-Octopus
// To Steph for the structure of the META HD G&W games
// To Pharap for all the help that he done for all c++ 
// learners from Arduboy forum (https://community.arduboy.com/)
// ------------------------------------------------------------


// includes the official library
#include <Gamebuino-Meta.h>

// includes other parts of pogram

#include "Global.h"
#include "OutputScreen.h"
#include "OutputSound.h"
#include "OutputLight.h"
#include "_Game.h"
#include "_Buttons.h"
#include "_Ennemy.h"


// -------------------------------------------------------------------------
// Initialization of the META
// -------------------------------------------------------------------------

void setup() {
  // initializes the META
  gb.begin();
  gb.display.init(0, 0, ColorMode::rgb565);
  outputLight_clear();
  outputSound_tick();
  gameState = TITLESCREEN;
}


// -------------------------------------------------------------------------
// Main control loop
// -------------------------------------------------------------------------

void loop() {
  gb.waitForUpdate();
  switch (gameState) {
    case TITLESCREEN:
      checkButton();
      outputScreen_titleScreen();
      break;

    case MENU:
      checkButton();
      outputScreen_menu();
      break;

    case RUN: // Game running
      checkButton();
      game_checkGoldInBarca();
      
      ennemy_octopus();
      //Barca();
      //Sub();
      //ennemy_OctopusCollision();
      outputScreen_run();  
      game_checkGameOver();
      moveTick=(moveTick+1)%maxTick;
      break;

    case GAMEOVER:  //GameOver screen
      checkButton();
      outputScreen_gameOver();
      break;

    case PAUSE: // pauseScreen Game
      checkButton();
      outputScreen_pause();
      break;
      
    case CREDITS:
      checkButton();
      outputScreen_credits();
      break;

    case CONTROLS:
      checkButton();
      outputScreen_controls();
      break;
  }
}
