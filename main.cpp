//The file that contain the main function
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
#include "functions.h"
using namespace std;

int main(){
  string command;
  cout<<setw(45);
  cout<<"Shoot-Out Game"<<endl;
  cout<<"Enter New to start a new game, Load to load saved game, Clear to delete game progress, and Exit to terminate"<<endl;
  cin>>command;
  int level;
  ifstream fin;
  ofstream fout;
  MatchStatus match;
  if(command=="New"){
    //initiate a new game status;
    match.user_team = CreateTeam("TeamUser.txt");
    cout<<"Choose level 1, 2 or 3"<<endl;
    cin>>level;
    if(level==1){
      match.opponent_team = CreateTeam("Team_1.txt");
    }else if(level==2){
      match.opponent_team = CreateTeam("Team_2.txt");
    }else if(level==3){
      match.opponent_team = CreateTeam("Team_3.txt");
    }else{
      cout<<"No such level, please restart"<<endl;
      return 0;
    }
    match.turn=0;
    match.user_score=0;
    match.opponent_score=0;
  }else if(command=="Load"){
    //load the saved game status;
    Load(match);
  }
  else if(command=="Clear"){
    //It copies the starter team to user's team
    string line;
    fin.open("Starter.txt");
    fout.open("TeamUser.txt");
    while(getline(fin,line)){
      fout<<line<<"\n";
    }
    fin.close();
    fout.close();
    fout.open("SaveFile.txt");
    fout<<1;
    fout.close();
    cout<<"Clear complete, please restart."<<endl;
    return 0;
  }
  else if(command=="Exit"){
    cout<<"bye"<<endl;
    return 0;
  }
  else{
    cout<<"Invalid command, please restart"<<endl;
    return 0;
  }
  //implementation of the game
  cout<<"This is your squad."<<endl;
  PrintAll(match.user_team);
  cout<<"This game has three levels. After you win, you can proceed to the next level."<<endl;
  cout<<"After each game, you could receive boosters to increase power of your players."<<endl;
  cout<<"Enter play to start a game."<<endl;
  string instruction;		     
  cin >> instruction;
  while (instruction != "play"){
    cout<<"Enter play"<<endl;
    cin>> instruction;
  }
  if(GamePlay(match)=="save"){ //GamePlay returns "save" if the user decide to save during a match
    Save(match);
    cout<<"Save complete, goodbye."<<endl;
    return 0;
  }
  fout.open("TeamUser.txt");
  //save the team in a file after playing
  for(int i=0;i<6;i++){
    fout<<match.user_team[i].type<<" "<<match.user_team[i].name<<" "<<match.user_team[i].power<<"\n";
  }
  fout.close();
  cout<<"Match over, it is a good game, see you next time!"<<endl;
  return 0;
}
