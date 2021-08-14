void ennemy_octopus() {

  for (size_t indexLeg = 0; indexLeg < 4; indexLeg++) {
    if (moveTick == octopusLegFrame[indexLeg][0] || moveTick == octopusLegFrame[indexLeg][1] || moveTick == octopusLegFrame[indexLeg][2] || moveTick == octopusLegFrame[indexLeg][3]) {

      //gb.sound.playTick();
      if(octopusLegReverse[indexLeg] == false){
        octopusCurrentLegLength[indexLeg]=octopusCurrentLegLength[indexLeg]+1;
        if(octopusCurrentLegLength[indexLeg]==octopusLegLength[indexLeg]){
          octopusLegReverse[indexLeg]=true;
        }
      }else{
        octopusCurrentLegLength[indexLeg]=octopusCurrentLegLength[indexLeg]-1;
        if(octopusCurrentLegLength[indexLeg]==0){
          octopusLegReverse[indexLeg]=false;
        }
      }
    }
  }
}


void ennemy_OctopusCollision() {
  for (size_t indexLeg = 0; indexLeg < 4; ++indexLeg) {
    if ((octopusLegAnim[indexLeg] == (octopusLegLength[indexLeg + 1] + 1)) && (subMove == 2 + indexLeg)) {
      getPoint = 0;
      hited = true;
    }
  }
}
