//The function returns a boolean value based on comparison between a random value and the Player's power
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
