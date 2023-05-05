#ifndef FUNCTIONS
#define FUNCTIONS
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;
struct Player{
  string name;
  string type;
  int power;
};
struct MatchStatus{
  vector<Player> user_team;
  vector<Player> opponent_team;
  int turn;
  int user_score;
  int opponent_score;
};
vector<Player> CreateTeam(string file_name);
bool OnTarget(Player x);
bool ScorePastKeeper(Player y,Player z);
void Booster(vector<Player> &user_team, string name,int k);
void PrintAll(vector<Player> v2);
int Score(Player shooter,Player gk,string shooter_direction,string gk_direction);
int Search(vector<Player> user_team,string name);
string GamePlay(MatchStatus &Match);
string CompDirection();
void Save(MatchStatus match);
string Load(MatchStatus &match);
#endif
