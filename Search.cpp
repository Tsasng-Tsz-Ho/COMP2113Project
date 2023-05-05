#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
using namespace std;

int Search(vector<Player> user_team,string name){
  //It search for the player by name
  //Arg 1: the team to be searched
  //Arg 2: the target name
  //return value: the position of the target player in the team
  for (int i=0;i<user_team.size();i++){
    if (user_team[i].name==name){
      return i;
    }
  }
  return -1;
}
