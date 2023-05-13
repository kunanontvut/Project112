
#include <iostream>
#include "monster.h"
using namespace std;
#include "color.h"

monster_node::monster_node(string typ,string el){
    element = el;
    type = typ;
    next = NULL;

    if(type == "Aves"){
        if(element == "Wind"){
            monsname = "Ambiente";
        }
        else if(element == "Fire"){
            monsname = "Phoenix";
        }
        else if(element == "Plant"){
            monsname = "Em madeira";
        }
        else if(element == "Water"){
            monsname = "Maremoth";
        }
        else{
            monsname = "Terreno";
        }
    }

    else if(type == "Aquatic"){
        if(element == "Wind"){
            monsname = "Rivotra";
        }
        else if(element == "Fire"){
            monsname = "Vatra Voda";
        }
        else if(element == "Plant"){
            monsname = "Acqua Albero";
        }
        else if(element == "Water"){
            monsname = "Aqua vandens";
        }
        else{
            monsname = "Terra Akvo";
        }
    }

    else if(type == "Reptilia"){
        if(element == "Wind"){
            monsname = "Atmosfera";
        }
        else if(element == "Fire"){
            monsname = "Queima";
        }
        else if(element == "Plant"){
            monsname = "Madeirgarto";
        }
        else if(element == "Water"){
            monsname = "Lagarto";
        }
        else{
            monsname = "verma";
        }
    }

    else if(type == "Primitive"){
        if(element == "Wind"){
            monsname = "Pterosaur";
        }
        else if(element == "Fire"){
            monsname = "Spinosauras";
        }
        else if(element == "Plant"){
            monsname = "Camarasaurus";
        }
        else if(element == "Water"){
            monsname = "Liopleurodon";
        }
        else{
            monsname = "Kentrosaurus";
        }
    }
    
    else{
        if(element == "Wind"){
            monsname = "Byakko";
        }
        else if(element == "Fire"){
            monsname = "Chimera";
        }
        else if(element == "Plant"){
            monsname = "Centaur";
        }
        else if(element == "Water"){
            monsname = "Mah Nil Mang Korn";
        }
        else{
            monsname = "Chang A Ra Wan";
        }
    }

    cout<<"Momster "<<monsname<<"add in your hand.."<<endl;
}

void monster_node::insert_monster(monster_node*& x){
     x->next=this;
}

void monster_node::changcolor(string a ,int x){
    textcolor(x,BLACK);
    cout<<a;
    resetcolor();
}

/*
    w=8
    f=12
    p=10
    wa=3
    e=14

    Av= 7
    R = 2
    P = 5
    T = 6
    A = 11
*/

void monster_node::show_monster(){
    int x,y;
    if(type == "Aves") x = 7;
        else if(type == "Reptilia") x = 2;
        else if(type == "Aquatic") x = 11;
        else if(type == "Primitive") x = 5;
        else x = 6;

        if(element == "Wind") y = 8;
        else if (element == "Fire") y = 12;
        else if (element == "Plant") y = 10;
        else if (element == "water") y = 3;
        else y = 14;
    cout<<monsname<<" [ ";changcolor(type,x); cout<<" ]"<<"[ ";changcolor(element,y);cout<<" ]";
}

monster_node* monster_node::movenext(){
    return next;
}

void monster_node::delete_monsterin_hand(monster_node*& a){
    a->next=this;
}

monster_node::~monster_node(){

}