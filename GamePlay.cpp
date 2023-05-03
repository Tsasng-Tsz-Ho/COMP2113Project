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
      cout<<"The penalty taker is "<<shooter.name<<endl;
      Player gk= opponent[0];
      cout<<"Enter L if you want to shoot to the left, M to shoot to the middle, R to shoot to the right."<<endl;
      string direction;
      cin<< direction;
      int result = Score(shooter,gk,direction);
      user_score += result;
    } else{
      Player shooter=opponent[i/2+1];
      Player gk= user_team[0];
      cout<<"Enter L if you want to dive to the left, M to stay in the middle, R to dive to the right."<<endl;
      string direction;
      cin<< direction;
      int result = Score(shooter,gk,direction);
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
     return;
   }
   else{
     cout<<"You have received a new player: Bruno (88 power)."<<endl;
     Player p;
     p.name="Bruno";
     p.type="OF";
     p.power=88;
     user_squad.push_back(p);
     return;
   }
  }
  else if (user_score==opponent_score){
    cout<<"The game ended in a draw."<<endl;
    cout<<"You received a +3 power booster."<<endl;
    cout<<"This is the list of players in your team."<<endl;
    PrintAll(user_team);
    cout<<"Enter the name of the player that you wish to apply your booster on."<<endl;
    string name;
    Booster(user_team,name,3);
    cout<<"Booster is applied."<<endl;
    return;
  }
  else{
    cout<<"The boys gave it their all. We should have won."<<endl;
    cout<<"You received a +1 power booster."<<endl;
    cout<<"This is the list of players in your team."<<endl;
    PrintAll(user_team);
    cout<<"Enter the name of the player that you wish to apply your booster on."<<endl;
    string name;
    Booster(user_team,name,3);
    cout<<"Booster is applied."<<endl;
    return;
  }
  return;
}
