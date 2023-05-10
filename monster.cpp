
#include <iostream>
#include "monster.h"
using namespace std;

monster_node::monster_node(string el,string typ){
    element = el;
    type = typ;
    next = NULL;

    if(el == "Avest"){
        if(type == "Wind"){
            monsname = "Ambiente";
        }
        else if(type == "Fire"){
            monsname = "Phoenix";
        }
        else if(type == "Plant"){
            monsname = "Em madeira";
        }
        else if(type == "Water"){
            monsname = "Maremoth";
        }
        else{
            monsname = "Terreno";
        }
    }

    else if(el == "Aquatic"){
        if(type == "Wind"){
            monsname = "Rivotra";
        }
        else if(type == "Fire"){
            monsname = "Vatra Voda";
        }
        else if(type == "Plant"){
            monsname = "Acqua Albero";
        }
        else if(type == "Water"){
            monsname = "Aqua vandens";
        }
        else{
            monsname = "Terra Akvo";
        }
    }

    else if(el == "Reptilia"){
        if(type == "Wind"){
            monsname = "Atmosfera";
        }
        else if(type == "Fire"){
            monsname = "Queima";
        }
        else if(type == "Plant"){
            monsname = "Madeirgarto";
        }
        else if(type == "Water"){
            monsname = "Lagarto";
        }
        else{
            monsname = "verma";
        }
    }

    else if(el == "Primitive"){
        if(type == "Wind"){
            monsname = "Pterosaur";
        }
        else if(type == "Fire"){
            monsname = "Spinosauras";
        }
        else if(type == "Plant"){
            monsname = "Camarasaurus";
        }
        else if(type == "Water"){
            monsname = "Liopleurodon";
        }
        else{
            monsname = "Kentrosaurus";
        }
    }
    
    else{
        if(type == "Wind"){
            monsname = "Byakko";
        }
        else if(type == "Fire"){
            monsname = "Chimera";
        }
        else if(type == "Plant"){
            monsname = "Centaur";
        }
        else if(type == "Water"){
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