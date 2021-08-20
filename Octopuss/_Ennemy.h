void ennemy_octopus() {

if(moveTick%octo[0].legFrameModulo==0){
      if(octo[0].reverse==0){
        octo[0].currentLength++;
        if(octo[0].currentLength>=4){
          octo[0].reverse=1;
        }
      }else{
        octo[0].currentLength--;
        if(octo[0].currentLength<=0){
          octo[0].reverse=0;
        }
      }
    }  

/*
  for (uint8_t indexLeg = 0; indexLeg < 4; indexLeg++) {  
    if((moveTick+octo[indexLeg].legFrameStart)%octo[indexLeg].legFrameModulo==0){
      if(octo[indexLeg].reverse==false){
        octo[indexLeg].currentLength++;
        if(octo[indexLeg].currentLength>=octo[indexLeg].maxLength){
          octo[indexLeg].reverse=true;
        }
      }else{
        octo[indexLeg].currentLength--;
        if(octo[indexLeg].currentLength<=0){
          octo[indexLeg].reverse=false;
        }
      }
    }  
  }
*/
}


void ennemy_OctopusCollision() {
  for (size_t indexLeg = 0; indexLeg < 4; ++indexLeg) {
/*    if ((octopusLegAnim[indexLeg] == (octopusLegLength[indexLeg + 1] + 1)) && (subMove == 2 + indexLeg)) {
      getPoint = 0;
      hited = true;
    }*/
  }
}
