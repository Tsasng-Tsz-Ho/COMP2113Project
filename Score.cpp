#include "functions.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int Score(Player shooter,Player gk,string direction, string ran_direction){
  cout<<setw(45);
  if (OnTarget(shooter)==false){
    cout<<"He shot the ball straight to the sky! The pressure is surely getting to him!"<<endl;
    return 0;
  } else{
    if (direction!=ran_direction){
      cout<<"He sends the keeper the wrong way! What a pen!"<<endl;
      return 1;
    } else{
      if (ScorePastKeeper(shooter,gk)){
          cout<<"The keeper had his hands on the ball, but the ball was just striked with so much force!"<<endl;
          return 1;
      } else{
          cout<<"What a read by the goalkeeper! A magnificent save!"<<endl;
          return 0;
      }
   }
 }
}
    
