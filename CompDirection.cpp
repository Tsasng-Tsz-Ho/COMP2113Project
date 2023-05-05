#include "functions.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string CompDirection(){
  //It receives integer and returns direction in string, it returns L for 0, M for 1, and R for 2
  int t1 = rand()%60+1;
  if (t1 <= 20) {return "L";}
  else if (t1>20 && t1<=40) {return "M";}
  else {return "R";}
}
  
