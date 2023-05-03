#include "functions.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int Score(Player shooter,Player gk){
  if (OnTarget(shooter)==false){
    cout<<"He shot the ball straight to the sky! The pressure is surely getting to him!"<<endl;
    return 0;
  else{
    
