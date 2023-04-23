#include <iostream>
#include "linklist.h"
using namespace std;

LL::LL(string pn):player(pn){
    head = NULL;
    size = 0;
}

LL::~LL(){
    monster_node* tmp=head;
        for(int i=0;i<size;i++){
            tmp=head;
            head = head->movenext();
            delete tmp;
        }
}

void LL::add_monster(monster_node*& x){
    head->insert_monster(x);
    head = x;
}

void LL::show_allmonster(){
    monster_node* tmp=head;
        for(int i=0;i<size;i++){
            cout<<i<<". ";
            tmp->show_monster();
            tmp = tmp->movenext();
        }
}

void LL::dropcard(monster_node*& x,int n){
    monster_node* pre=head;
    monster_node* tnext;
    monster_node* tmp;
    int i;
    for(i=0 ;i<n-1;i++){
       pre=pre->movenext();
    }
    if(pre->movenext() != NULL){
        tmp = pre->movenext();

        if(tmp->movenext() != NULL){
            tnext = tmp->movenext();
        }
    }
    delete tmp;
    tnext->delete_monsterin_hand(pre);
    
}