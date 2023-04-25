
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
        monster_node* movenext();
        ~monster_node();
};