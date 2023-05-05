#include "functions.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Booster(vector<Player> &user_team, string name,int k){
  //It increase the power of the player by k
  //Arg 1: a team of Players stored in a vector and passed by reference
  //Arg 2: the name of the Player wanted to boost as string
  //Arg 3: the increase in power of the Player
  //return value: none, the increase would be reflected in the vector passed by reference
  cout<<"The maximum power of a player is 90."<<endl;
  while (Search(user_team,name)==-1){
    cout<<"There is no such player in your team."<<endl;
    cout<<"Enter the name of the player you wish to boost."<<endl;
    cin>>name;
  }
  if (user_team[Search(user_team,name)].power+k<=90){
    user_team[Search(user_team,name)].power += k;
  } 
  else{
    user_team[Search(user_team,name)].power=90;
  }
  return;          
}              
  
  
