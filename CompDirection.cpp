#include "functions.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string CompDirection(){
  //It generates a random integer to decide which side the computer chooses (0 to 20 chooses "L", 21 to 40 chooses "M", 41 to 60 chooses "R")
  int t1 = rand()%60+1;
  if (t1 <= 20) {return "L";}
  else if (t1>20 && t1<=40) {return "M";}
  else {return "R";}
}
  
