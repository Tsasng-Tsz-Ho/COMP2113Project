#include "functions.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

string GamePlay(MatchStatus &match){
  //Arg: a struct of match status that contains both teams, turn and scores passed by reference
  //return value: if the player choose to save during a match, it returns a string "save" and saving is done in main
  //else, the match is finished normally and return "finish"
  int ran_num;
  string ran_direction;
  string direction;
  //The for loop iterates all offensive players have a chance to shoot
  for (match.turn;match.turn<10;match.turn++){
    if (match.turn%2==0){
      //user's turn to shoot
      Player shooter=match.user_team[match.turn/2+1];
      cout<<"The penalty taker is "<<shooter.name<<endl;
      Player gk= match.opponent_team[0];
      cout<<"Enter L if you want to shoot to the left, M to shoot to the middle, R to shoot to the right, S to save."<<endl;
      cin>>direction;
      if(direction=="S"){return "save";}
      ran_num = rand()%3;
      ran_direction = CompDirection(ran_num);
      int result = Score(shooter,gk,direction,ran_direction);
      match.user_score += result;
    } else{
      //opponent's turn to shoot
      Player shooter=match.opponent_team[match.turn/2+1];
      Player gk= match.user_team[0];
      cout<<"Enter L if you want to dive to the left, M to stay in the middle, R to dive to the right, S to save."<<endl;
      cin>>direction;
      if(direction=="S"){return "save";}
      ran_num = rand()%3;
      ran_direction = CompDirection(ran_num);
      int result = Score(shooter,gk,ran_direction,direction);
      match.opponent_score += result;
    }
    cout<<"You "<<match.user_score<<" : "<<match.opponent_score<<" Opponent"<<endl;
  }
  if (match.user_score>match.opponent_score){
    cout<<"Congratulations, you won!"<<endl;
    cout<<"You received a +3 power booster."<<endl;
    cout<<"This is the list of players in your team."<<endl;
    PrintAll(match.user_team);
    cout<<"Enter the name of the player that you wish to apply your booster on."<<endl;
    cout<<"The maximum power of a player is 90."<<endl;
    string name;
    cin>>name;
    Booster(match.user_team,name,3);
    cout<<"Booster is applied."<<endl;
  }
  else if (match.user_score==match.opponent_score){
    cout<<"The game ended in a draw."<<endl;
    cout<<"You received a +2 power booster."<<endl;
    cout<<"This is the list of players in your team."<<endl;
    PrintAll(match.user_team);
    cout<<"Enter the name of the player that you wish to apply your booster on."<<endl;
    cout<<"The maximum power of a player is 90."<<endl;
    string name;
    cin>>name;
    Booster(match.user_team,name,2);
    cout<<"Booster is applied."<<endl;
    return "finish";
  }
  else{
    cout<<"The boys gave it their all. We should have won."<<endl;
    cout<<"You received a +1 power booster."<<endl;
    cout<<"This is the list of players in your team."<<endl;
    PrintAll(match.user_team);
    cout<<"Enter the name of the player that you wish to apply your booster on."<<endl;
    cout<<"The maximum power of a player is 90."<<endl;
    string name;
    cin>>name;
    Booster(match.user_team,name,1);
    cout<<"Booster is applied."<<endl;
    return "finish";
  }
  return "finish";
}
