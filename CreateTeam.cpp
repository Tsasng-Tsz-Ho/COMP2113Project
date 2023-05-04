#include "functions.h"
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<Player> CreateTeam(istream fin){
  //It makes a team
  //It takes a input file stream as arguement
  //and out put a vector of players as a team
  string input;
  int count;
  Player temp;
  vector<Player> result;
  while(fin>>input){
    if(count%3==0){
      temp.type=input;
      count++;
    }else if(count%3==1){
      temp.name=input;
      count++;
    }else{
      temp.power=stoi(input);
      result.push_back(temp);
      count++;
    }
  }
  return result;
}
