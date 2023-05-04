//It prints out all the players and their power in the team
#include <iostream>
#include <iomanip>
#include "functions.h"
using namespace std;

void PrintAll(vector<Player> team){
  cout<<setw(45);
  for(int i=0,i<team.size(),i++){
    if(team[i].type=="GK"){cout<<"Goalkeeper: ";}else{cout<<"Offensive: ";}
    cout<<team[i].name<<" "<<team[i].power<<endl;
  }
  return;
}
