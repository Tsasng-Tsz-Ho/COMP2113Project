#include "functions.h"
#include <iostream>
#include <string>
using namespace std;

bool ScorePastKeeper(Player y,Player z){
  int spread = y.power-z.power+20; 
  int check = rand()%45;
  if (spread >= check){
    return true;
  }
  return false;
}
