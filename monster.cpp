
#include <iostream>
#include "monster.h"
using namespace std;

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

void monster_node::show_monster(){
    cout<<monsname<<" [ "<<type<<" ]"<<"[ "<<element<<" ]";
}

monster_node* monster_node::movenext(){
    return next;
}

void monster_node::delete_monsterin_hand(monster_node*& a){
    a->next=this;
}

monster_node::~monster_node(){

}