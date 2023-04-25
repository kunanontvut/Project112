
#include <iostream>
#include "monster.h"
using namespace std;

monster_node::monster_node(string el,string typ){
    element = el;
    type = typ;
    next = NULL;

    

    cout<<"Momster "<<monsname<<"add in your hand.."<<endl;
}

void monster_node::insert_monster(monster_node*& x){
     x->next=this;
}

void monster_node::show_monster(){
    cout<<monsname<<" [ "<<type<<" ]"<<"[ "<<element<<" ]"<<endl;
}

monster_node* monster_node::movenext(){
    return next;
}

void monster_node::delete_monsterin_hand(monster_node*& a){
    a->next=this;
}

monster_node::~monster_node(){

}