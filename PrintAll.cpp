//It prints out all the players in the team
#include <iostream>
#include "functions.h"
using namespace std;

void PrintAll(vector<Player> team){
	for(int i=0,i<team.size(),i++){
		if(team[i].type=="GK"){cout<<"Goal Keeper: ";}else{cout<<"Offensive: ";}
		cout<<team[i].name<<" "<<team[i].power<<endl;
	}
}
