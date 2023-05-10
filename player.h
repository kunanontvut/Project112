#include <iostream>
using namespace std;

class player{
    private:
        int score;
        string name;
    public :
        void incread_score();
        player(string);
        ~player();
        void changename(){
            name = "Computer";
        }
};