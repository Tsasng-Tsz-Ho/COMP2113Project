//It receives integer and returns direction in string, it returns L for 0, M for 1, and R for2
#include "functions.h"
#include <iostream>
#include <string>
using namespace std;

string CompDirection(int num){
  if (num==0){
    return "L";
  } else if (num==1){
    return "M";
  } else{
    return "R";
  }
}
