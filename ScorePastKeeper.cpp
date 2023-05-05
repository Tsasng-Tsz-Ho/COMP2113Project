#include "functions.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

bool ScorePastKeeper(Player shooter,Player gk){
  //It returns whether the shooter score when the goal keeper correctly guessed direction
  //Arg 1: the player eho shoot
  //Arg 2: the player who is the goalkeeper
  //return value: true if score, false if not score
  int spread = shooter.power-gk.power+20; 
  int check = rand()%45;
  if (spread >= check){
    return true;
  }
  return false;
}
