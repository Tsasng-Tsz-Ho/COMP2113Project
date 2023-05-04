#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Booster(vector<Player> &user_team, string name,int k){
  cout<<"The maximum power of a player is 90."<<endl;
  while (Search(user_team,name)==-1){
    cout<<"There is no such player in your team."<<endl;
    cout<<"Enter the name of the player you wish to boost."<<endl;
    cin>>name;
  }
  if (Search(user_team,name).power+k<=90){
    user_team[Search(user_team,name)].power += k;
  } 
  else{
    user_team[Search(user_team,name)].power=90;
  }
  return;          
}              
  
  
