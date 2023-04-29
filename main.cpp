//The file that contain the main function
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	string command;
	cout<<setw(45);
	cout<<"Shoot-Out Game"<<endl;
	cout<<"Enter New to start a new game, Load to load saved game, and Exit to terminate"<<endl;
	cin>>command;
	if(command=="New"){
		//initiate a new game status;
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
