//The function returns a boolean value based on comparison between a random value and the Player's power. It determines whether the shooter shoots on target
#include "functions.h"
#include <iostream>
#include <string>
using namespace std;

bool OnTarget(Player x){
  int check = rand()%99+1;
  if (x.power >= check){
    return true;
  }
  return false;
}
