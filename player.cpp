#include <iostream>
#include "player.h"
using namespace std;
#include "color.h"

void player::incread_score(){
    score+=1;
}

player::player(string ename){
    name = ename;
    score =0;
}

void player::colorc(string a,int x,int y){
    textcolor(x,y);
    cout<<a;
    resetcolor();
}

player::~player(){
    int x=15,y=0;
    if(score == 3){ x= 0;
    y=2;}
    colorc(name,x,y);
    cout<<"'s score : "<<score<<endl;
}

