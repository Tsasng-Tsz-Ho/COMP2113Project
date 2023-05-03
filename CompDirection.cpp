#include "functions.h"
#include <string>

string CompDirection(int num){
  if (num==0){
    return "L";
  } else if (num==1){
    return "M";
  } else{
    return "R";
  }
}
