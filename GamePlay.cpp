#include "functions.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

void(vector<Player> &user_team,vector<Player> &user_squad, vector<Player> opponent, int &level){
  cout<<setw(45);
  int user_score=0;
  int opponent_score=0;
  for (int i=0;i<10;i++){
    if (i%2==0){
      Player shooter=user_team[i/2+1];
      Player gk= opponent[0];
      int result = Score(shooter,gk);
      user_score += result;
    } else{
      Player shooter=opponent[i/2+1];
      Player gk= user_team[0];
      int result = Score(shooter,gk);
      opponent_score += result;
    }
  }
  if (user_score>opponent_score){
    cout<<"Congratulations, you won!"<<endl;
    if (level<3){
      cout<<"You have progressed one level."<<endl;
      if (level==1){
        cout<<"You have received a new player: Kane (82 power)."<<endl;
        Player p;
        p.name="Kane";
        p.type="OF";
        p.power=82;
        user_squad.push_back(p);
      } else{
          cout<<"You have received a new player: Mbappe (88 power)."<<endl;
          Player p;
          p.name="Mbappe";
          p.type="OF";
          p.power=88;
          user_squad.push_back(p);
      }
     level++;
   }
  }
  else if (user_score==opponent_score){
    cout<<"The game ended in a draw."<<endl;
    cout<<"You received a +1 power booster.";
    
    
    
