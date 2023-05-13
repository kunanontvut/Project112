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
    size++;
}

void LL::show_allmonster(){
    monster_node* tmp=head;
        for(int i=0;i<size;i++){
            cout<<i+1<<". ";
            tmp->show_monster();
            cout<<endl;
            tmp = tmp->movenext();
        }
}

void LL::dropcard(int n){
    monster_node* pre=NULL;
    monster_node* tnext=head;
    monster_node* tmp=head;
    int i;
    for(i=0;i<n;i++){
       pre = tnext;
       tnext = tnext->movenext();
    }
    if(pre == NULL){
        head = tnext->movenext();
    }
    else{
        tmp = tnext;
        tnext=tnext->movenext();
        tnext->delete_monsterin_hand(pre);
    }
    delete tmp;
    size--;
    
}

void LL::changecolorll(string a,int x,int y){
    textcolor(x,y);
    cout<<a;
    resetcolor();
}

void LL::winlosecal(LL& p1,int P1P,LL& p2,int P2P){
    monster_node *t1=head;
    monster_node *t2=p2.head;
    int i;

    for(i=0;i<P1P;i++){
            t1=t1->movenext();
        }
    for(i=0;i<P2P;i++){
            t2=t2->movenext();
        }
    t1->show_monster();
    cout<<" VS ";
    t2->show_monster();
    cout<<endl;

    if(t1->returntype() == t2->returntype()){
        
        if(t1->returnele() == t2->returnele()){
            cout<<"!!Draw!!"<<endl;
        }
        else{
            if(t1->returnele() == "Wind" && t2->returnele() == "Fire" || t1->returnele() == "Wind" && t2->returnele() == "Plant"){
                t1->show_monster();
                cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
                p1.incread_score();
            }
            else if(t1->returnele() == "Fire" && t2->returnele() == "Plant" || t1->returnele() == "Fire" && t2->returnele() == "Water"){
                t1->show_monster();
                cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
                p1.incread_score();
            }
            else if(t1->returnele() == "Plant" && t2->returnele() == "Water" || t1->returnele() == "Plant" && t2->returnele() == "Earth"){
                t1->show_monster();
                cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
                p1.incread_score();
            }
            else if(t1->returnele() == "Water" && t2->returnele() == "Earth" || t1->returnele() == "Water" && t2->returnele() == "Wind"){
                t1->show_monster();
                cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
                p1.incread_score();
            }
            else if(t1->returnele() == "Earth" && t2->returnele() == "Wind" || t1->returnele() == "Earth" && t2->returnele() == "Fire"){
                t1->show_monster();
                cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
                p1.incread_score();
            }
            else{
                t2->show_monster();
                cout<<" Win !! ";changecolorll(returnname(),12);cout<< " Score +1"<<endl;
                p2.incread_score();
            }



        }
    }
    else{

        if(t1->returntype() == "Aves" && t2->returntype() == "Reptilia"){
            t1->show_monster();
            cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
            p1.incread_score();
        }
        else if( t1->returntype() == "Avest" && t2->returntype() == "Aquatic"){
            t1->show_monster();
            cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
            p1.incread_score();
        }
        else if(t1->returntype() == "Reptilia" && t2->returntype() == "Aquatic"){
            t1->show_monster();
            cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
            p1.incread_score();
        }
        else if(t1->returntype() == "Reptilia" && t2->returntype() == "Primitive"){
            t1->show_monster();
            cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
            p1.incread_score();
        }
        else if(t1->returntype() == "Aquatic" && t2->returntype() == "Primitive"){
            t1->show_monster();
            cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
            p1.incread_score();
        }
        else if(t1->returntype() == "Aquatic" && t2->returntype() == "Terrestail"){
            t1->show_monster();
            cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
            p1.incread_score();
        }
        else if(t1->returntype() == "Primitive" && t2->returntype() == "Terrestail"){
            t1->show_monster();
            cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
            p1.incread_score();
        }
        else if(t1->returntype() == "Reptilia" && t2->returntype() == "Aves"){
            t1->show_monster();
            cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
            p1.incread_score();
        }
        else if(t1->returntype() == "Terrestail" && t2->returntype() == "Aves"){
            t1->show_monster();
            cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
            p1.incread_score();
        }
        else if(t1->returntype() == "Terrestail" && t2->returntype() == "Reptilia"){
            t1->show_monster();
            cout<<" Win !! ";changecolorll(returnname(),9);cout<< " Score +1"<<endl;
            p1.incread_score();
        }
        else {
            t2->show_monster();
            cout<<" Win !! ";changecolorll(returnname(),12);cout<< " Score +1"<<endl;
            p2.incread_score();
        }

    }

    p1.dropcard(P1P);
    p2.dropcard(P2P);

}