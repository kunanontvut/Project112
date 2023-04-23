#include "monster.h"
#include "player.h"

class LL :public player{
      monster_node* head;
      int size;
public:
       void add_monster(monster_node*&);
       void show_allmonster();
       void dropcard(monster_node*&,int);
    
       ~LL();
       LL(string);


};