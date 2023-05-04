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
		/*ifstream starter;
		starter.open("starter.txt");
		vector<Player> your_team = CreateTeam(starter);
		vector<Player> your_squad = your_team ;
		level=1;	    
		cout<<"Enter view to see your squad"<< endl;
		string instruction;
		cin>> instruction;
		while (instruction != "view"){
			cout<<"Enter view"<<endl;
			cin>> instruction;
		}
		PrintAll(your_squad);	     
		cout<<"You have received a new player: 2014_Krul."<<endl;
		Player new_gk;
		new_gk.type = "GK";
		new_gk.name = "2014_Krul";
		new_gk.power = 90;
		squad.push_back(new_gk);
		cout<<"Enter swap to sub in this player."<<endl;
		cin>> instruction;
		while (instruction != "swap"){
			cout<<"Enter swap"<<endl;
			cin>> instruction;
		}
		your_sqaud.push_back(new_gk);	     
		SwapPlayers(your_team,new_gk,your_team[0]);*/
	}
	else if(command=="Load"){
		//load the saved game status;
    fin.open("SaveFile.txt");
    MatchStatus match=load(fin);
    fin.close();
	}
  else if(command=="Clear"){
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
	else if(command=="Exit"){
		cout<<"bye"<<endl;
		return 0;
	}
	else{
		cout<<"Invalid command, please restart"<<endl;
		return 0;
	}
	//implementation of the game
	cout<<"This game has three levels. After you win, you can proceed to the next level."<<endl;
	cout<<"After each game, you could receive a high-power player or boosters."<<endl;
	cout<<"Enter play to start a game."<<endl;
	string instruction;		     
	cin >> instruction;
	while (instruction != "play"){
		cout<<"Enter play"<<endl;
		cin>> instruction;
	}
	if(GamePlay(match)=="save"){
    Save(match);
    cout<<"Save complete, goodbye."<<endl;
    return 0;
  };
}
