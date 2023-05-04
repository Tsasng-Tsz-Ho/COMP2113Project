#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
using namespace std;

int Search(vector<Player> user_team,string name){
  for (int i=0;i<user_name.size();i++){
    if (user_team[i].name==name){
      return i;
    }
  }
  return -1;
}
