#ifndef FUNCTIONS
#define FUNCTIONS
#include <string>
#include <fstream>
using namespace std;
struct Player{
  string name;
  int type;
  int power;
};
vector<Player> CreateTeam(ifstream x);
bool OnTarget(Player x);
bool ScorePastKeeper(Player y,Player z);
void SwapPlayers(vector<Player> v1,Player p1,Player p2);
void PrintAll(vector<Player> v2);

#endif
