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
		cout<<"You have received a new player: 2014_Krul."<<endl;
		Player new_gk;
		new_gk.type = "GK";
		new_gk.name = "2014_Krul";
		new_gk.power = 90;
		cout<<"Enter swap to sub in this player."<<endl;
		string instruction;
		cin>> instruction;
		while (instruction != "exit"){
			if (instruction == "swap"){
				SwapPlayers(your_team,new_gk,squad[0]);
			}
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
