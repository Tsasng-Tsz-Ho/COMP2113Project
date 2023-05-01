#ifndef FUNCTIONS
#define FUNCTIONS
#include <string>
#include <fstream>
using namespace std;
struct Player{
  string name;
  string type;
  int power;
};
vector<Player> CreateTeam(ifstream x);
bool OnTarget(Player x);
bool ScorePastKeeper(Player y,Player z);
void SwapPlayers(vector<Player> v1,Player p1,Player p2);
void PrintAll(vector<Player> v2);
int Score(Player shooter,Player gk);
void GamePlay(vector<Player> &user_team,vector<Player> &user_squad, vector<Player> opponent, int &level);

#endif
