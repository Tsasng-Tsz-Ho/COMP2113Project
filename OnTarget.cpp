#include "functions.h"
#include <iostream>
#include <string>
using namespace std;

bool OnTarget(Player shooter){
  //The function returns a boolean value based on comparison between a random value and the Player's power. It determines whether the shooter shoots on target
  int check = rand()%99+1;
  if (shooter.power >= check){
    return true;
  }
  return false;
}
