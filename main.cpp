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
  cout<<"Enter New to start a new game, Load to load saved game, and Exit to terminate"<<endl;
  cin>>command;
  int level;
  ifstream fin;
  ofstream fout;
  fin.open("SquadUser.txt");
  vector<Player> user_squad = CreateTeam(fin);
  fin.close();
	if(command=="New"){
		//initiate a new game status;
    fin.open("TeamUser.txt");
    vector<Player> user_team = CreateTeam(fin);
    fin.close();
    cout<<"Choose level 1, 2 or 3"<<endl;
    cin>>level;
    if(level==1){
      fin.open("Team_1.txt");
    }else if(level==2){
      fin.open("Team_2.txt");
    }else if(level==3){
      fin.open("Team_3.txt");
    }else{
      cout<<"No such level, please restart"<<endl;
      return 0;
    }
    vector<Player> opponent_team = CreateTeam(fin);
    fin.close();
    MatchStatus match={
      user_team,
      opponent_team,
      0, //turn
      0, //user score
      0 //opponent score
    };    
		
	}
	else if(command=="Load"){
		//load the saved game status;
    fin.open("SaveFile.txt");
    MatchStatus match;
    Load(fin,match);
    fin.close();
	}
  else if(command=="Clear"){
    //It copies the starter team to user's team
    string line;
    string[2] write_files={"TeamUser.txt","SquadUser.txt"};
    for(int i=0;i<2;i++){
      fin.open("Starter.txt");
      fout.open(write_files[i].c_str());
      while(getline(fin,line)){
        fout<<line<<"\n";
      }
      fin.close();
      fout.close();
    }
    fout.open("SaveFile.txt");
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
	PrintAll(user_team);
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
  //save the new team after playing
  for(int i=0;i<6;i++){
    fout<<match.user_team[i].type<<" "<<match.user_team[i].name<<" "<<match.user_team[i].power<<"\n";
  }
  fout.close();
  return 0;
}
