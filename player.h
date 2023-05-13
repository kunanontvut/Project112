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
        string returnname(){
            return name;
        }

        int returnscore(){
            return score;
        }
        void colorc(string a,int x,int y=0);
};