#include "functions.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int Score(Player shooter,Player gk,string shooter_direction, string gk_direction){
  //Determine whether the shooter score
  //Arg 1: the player that shoot
  //Arg 2: the player that is the goalkeeper
  //Arg 3: a string of "L", "M", or "R" that indicates the direction the shooter shoots
  //Arg 4: a string of "L", "M", or "R" that indicates the direction the goalkeeper dives
  //return value: return 1 if score and 0 if not score
  if (OnTarget(shooter)==false){
    cout<<"He shot the ball straight to the sky! The pressure is surely getting to him!"<<endl;
    return 0;
  }
  if (shooter_direction!=gk_direction){
    cout<<"He sends the keeper the wrong way! What a pen!"<<endl;
    return 1;
  }
  if (ScorePastKeeper(shooter,gk)){
    cout<<"The keeper had his hands on the ball, but the ball was just striked with so much force!"<<endl;
    return 1;
  } else{
    cout<<"What a read by the goalkeeper! A magnificent save!"<<endl;
    return 0;
  }
}
