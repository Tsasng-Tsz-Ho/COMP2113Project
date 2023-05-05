#include "functions.h"
#include <iostream>
#include <string>
using namespace std;

string CompDirection(int num){
  //It receives integer and returns direction in string, it returns L for 0, M for 1, and R for 2
  if (num==0){
    return "L";
  } else if (num==1){
    return "M";
  } else{
    return "R";
  }
}
