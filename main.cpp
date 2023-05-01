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
	if(command=="New"){
		//initiate a new game status;
		ifstream starter;
		starter.open("starter.txt);
		vector<Player> your_team = CreateTeam(starter);
		vector<Player> your_squad = your_team ;
		int level=1;	    
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
		SwapPlayers(your_team,new_gk,your_team[0]);	    
		cout<<"This game has three levels. After you win, you can proceed to the next level."<<endl;
		cout<<"After each game, you could receive a high-power player or boosters."<<endl;
		cout<<"Enter play to start a game."<<endl;
		cin >> instruction;
		while (instruction != "play"){
			cout<<"Enter play"<<endl;
			cin>> instruction;
		}
		ifstream opponent;
		opponent.open("Team_1.txt");
		vector<Player> opponent_team = CreateTeam(opponent);
		GamePlay(your_team, &level, opponent team);
			     
	}
	else if(command=="Load"){
		//load the saved game status;
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
	
}
