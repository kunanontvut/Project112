#include <iostream>
using namespace std;
#include "color.h"

class monster_node {
    private :
    string monsname;
    string element;
    string type;
    monster_node* next;
    
    public :
        monster_node(string,string);
        void insert_monster(monster_node*&);
        void show_monster();
        void delete_monsterin_hand(monster_node*&);
        void changcolor(string,int=15);

        monster_node* movenext();
        ~monster_node();

        string returnele(){return element; }
        string returntype(){return type; }
};