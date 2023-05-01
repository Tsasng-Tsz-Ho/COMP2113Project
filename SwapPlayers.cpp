#include "functions.h"
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
using namespcae std;

vector<Player> SwapPlayers(vector<Player> v, Player p1, Player p2){
  cout<< setw(45);
  if (p1.type!=p2.type){
    cout<< "Substitute the player with another player of the same position."<< endl;
    return v;
  } else{
      for (int i=0;i<6;i++){
        if (v[i]==p2){
          v[i]=p1;
        }
      }
    return v;
  }
}
  
