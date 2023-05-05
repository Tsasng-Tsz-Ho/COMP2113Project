//Function "Save" saves the match status during match, "Load" loads the match status before match
#include "functions.h"
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void Save(MatchStatus match){
  ofstream fout;
  fout.open("SaveFile.txt");
  for(int i=0;i<6;i++){
    fout<<match.user_team[i].type<<" "<<match.user_team[i].name<<" "<<match.user_team[i].power<<"\n";
  }
  for(int i=0;i<6;i++){
    fout<<match.opponent_team[i].type<<" "<<match.opponent_team[i].name<<" "<<match.opponent_team[i].power<<"\n";
  }
  fout<<match.turn<<"\n";
  fout<<match.user_score<<"\n";
  fout<<match.opponent_score;
  fout.close();
}

string Load(MatchStatus &match){
  ifstream fin;
  fin.open("SaveFile.txt");
  if(fin.peek()==EOF){return "no save";}
  for(int i=0;i<6;i++){
    fin>>match.user_team[i].type>>match.user_team[i].name>>match.user_team[i].power;
  }
  for(int i=0;i<6;i++){
    fin>>match.opponent_team[i].type>>match.opponent_team[i].name>>match.opponent_team[i].power;
  }
  fin>>match.turn>>match.user_score>>match.opponent_score;
  fin.close();
  return "done";
}
