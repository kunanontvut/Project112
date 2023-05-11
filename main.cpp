#include <iostream>
#include <stdlib.h>
#include "linklist.h"
using namespace std;

void pregame_display();
void selectmonster();
void clearscr();

int main(){
    LL P1("Player 1"),P2("Player 2");
    int mode,i,mt,me,pp1,pp2;
    string mtn,men;
    monster_node *t;

    cout<<"*** Monscard game ***"<<endl;
    cout<<"1. Player VS Player"<<endl;
    cout<<"2. Player VS Computer"<<endl;
    cout<<"3. Rule"<<endl;
    
    do{
        cout<<"?"<<endl;
        cin>>mode;
        if(mode == 3){
            pregame_display();
        }
    }while(mode<0 || mode >2);

    if(mode ==2){
        P2.changename();
    }

    cout<<P1.returnname()<<" choose your 7 monster"<<endl;
    selectmonster();
    for(i=0;i<7;i++){
        do{
        mt=0;
        me=0;
        cin>>mt>>me;
        }while(mt < 1 || mt > 5 || me < 1 || me > 5);

        if(mt == 1) mtn = "Aves";
        else if(mt == 2) mtn = "Reptilia";
        else if(mt == 3) mtn = "Aquatic";
        else if(mt == 4) mtn = "Primitive";
        else mtn = "Terrestial";

        if(me == 1) men = "Wind";
        else if (me == 2) men = "Fire";
        else if (me == 3) men = "Plant";
        else if (me == 4) men = "water";
        else men = "Earth";

        t = new monster_node(mtn,men);
        P1.add_monster(t);
    }

        clearscr();

    if(mode == 1){
        cout<<P2.returnname()<<" choose your 7 monster"<<endl;
        selectmonster();
    for(i=0;i<7;i++){
        do{
        mt=0;
        me=0;
        cin>>mt>>me;
        }while(mt < 1 || mt > 5 || me < 1 || me > 5);

        if(mt == 1) mtn = "Aves";
        else if(mt == 2) mtn = "Reptilia";
        else if(mt == 3) mtn = "Aquatic";
        else if(mt == 4) mtn = "Primitive";
        else mtn = "Terrestial";

        if(me == 1) men = "Wind";
        else if (me == 2) men = "Fire";
        else if (me == 3) men = "Plant";
        else if (me == 4) men = "water";
        else men = "Earth";

        t = new monster_node(mtn,men);
        P2.add_monster(t);
    }
    }
    else{
        for(i=0;i<7;i++){

            mt = rand()%5+1;
            me = rand()%5+1;
        if(mt == 1) mtn = "Aves";
        else if(mt == 2) mtn = "Reptilia";
        else if(mt == 3) mtn = "Aquatic";
        else if(mt == 4) mtn = "Primitive";
        else mtn = "Terrestial";

        if(me == 1) men = "Wind";
        else if (me == 2) men = "Fire";
        else if (me == 3) men = "Plant";
        else if (me == 4) men = "water";
        else men = "Earth";

        t = new monster_node(mtn,men);
        P2.add_monster(t);
    }
    }
    
    clearscr();
    do{
    cout<<"!! Battle face !!"<<endl;
    cout<<"Turn "<<P1.returnname()<<" pick"<<endl;
    system("pause");
    cout<<P1.returnname()<<" 1 pick 1 monster to fight"<<endl;
    P1.show_allmonster();
    cout<<"?";
    do{
    pp1=0;
    cin>>pp1;
    }while(pp1<1 || pp1>P1.returnsize());
    // sent card
    clearscr();
    cout<<"Turn "<<P2.returnname()<<" pick"<<endl;
    system("pause");
     cout<<P2.returnname()<<" 1 pick 1 monster to fight"<<endl;
    P2.show_allmonster();
    cout<<"?";
    do{
    cin>>pp2;
    }while(pp2<1 || pp2>P2.returnsize());
    // sent card
    P1.winlosecal(P1,pp1-1,P2,pp2-1);
    }while(P1.returnscore()!=3 ||P2.returnscore()!=3 || P1.returnsize() != 0);

}

void pregame_display(){
    cout<<"| Monster Type | (Win -> Lose)"<<endl;
    cout<<"   ------- Aves <---------     "<<"     "<<"   ----- Primitive <------     "<<endl;
    cout<<"   V                     |     "<<"     "<<"   V                     |     "<<endl;
    cout<<"Reptilia           Terrestial  "<<"     "<<" Aves                Reptilia  "<<endl;
    cout<<"   V                     ^     "<<"     "<<"   V                     ^     "<<endl;
    cout<<"Aquatic ------------>Primitive "<<"     "<<"Aquatic ------------>Terrestial"<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<"|Monster Element|  (Win -> Lose)"<<endl;
    cout<<"  ----- Wind <------   "<<"     "<<"  ----- Water <------  "<<endl;
    cout<<"  V                |   "<<"     "<<"  V                |   "<<endl;
    cout<<"Fire             Earth "<<"     "<<"Wind             Fire  "<<endl;
    cout<<"  V                ^   "<<"     "<<"  V                ^   "<<endl;
    cout<<"Plant ---------->Water "<<"     "<<"Plant ---------->Earth "<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
}

void selectmonster(){
    cout<<"---Monster Type---|---Element---"<<endl;
    cout<<"1. Aves           |1. Wind"<<endl;
    cout<<"2. Reptilia       |2. Fire"<<endl;
    cout<<"3. Aquatic        |3. Plant"<<endl;
    cout<<"4. Primitive      |4. Water"<<endl;
    cout<<"5. Terrestial     |5. Earth"<<endl;
    cout<<"Choose your monstertype & element - (numbermontsterype numberelement)"<<endl;
    cout<<"ex. your want Aves and Water input 1 4"<<endl;

}

void clearscr(){
    for(int i=0;i<20;i++)
        cout<<endl;
}