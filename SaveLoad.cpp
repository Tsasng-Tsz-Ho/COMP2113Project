#include "functions.h"
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void Save(MatchStatus match){
  //It saves the match status during match
  //Arg: struct of match status which contains all info
  //return value: none, all info are stored in file "SaveFile.txt"
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
  //It loads the match status before match
  //Arg: match status struct that will store needed info to continue a match, passed by reference
  //return value: if there is no previous save, return "no save" else return "done"
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
