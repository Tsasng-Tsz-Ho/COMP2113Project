#include <iostream>
#include "functions.h"
using namespace std;

void PrintAll(vector<Player> team){
  //It prints out all the players and their power in the team
  //Arg: a vector of Players
  //return value: none, desired outcome is printed to console
  for(int i=0;i<team.size();i++){
    if(team[i].type=="GK"){cout<<"Goalkeeper: ";}else{cout<<"Offensive: ";}
    cout<<team[i].name<<" "<<team[i].power<<endl;
  }
  return;
}
