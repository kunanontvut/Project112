#include <iostream>
#include "player.h"
using namespace std;

void player::incread_score(){
    score+=1;
}

player::player(string ename){
    name = ename;
    score =0;
}

player::~player(){
    cout<<name<<"'s score : "<<score<<endl;
}
