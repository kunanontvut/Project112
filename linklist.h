#include "monster.h"
#include "player.h"

class LL :public player{
      monster_node* head;
      int size;
public:
       void add_monster(monster_node*&);
       void show_allmonster();
       void dropcard(int);
       void winlosecal(LL&,int,LL&,int);
       int returnsize(){ return size;}
       
       ~LL();
       LL(string);


};