#include <iostream>
#include <stdlib.h>
#include "color.h"
#include "linklist.h"
using namespace std;

void pregame_display();
void selectmonster();
void clearscr();
void changetextcolor(string,int);

int main(){
    LL P1("Player 1"),P2("Player 2");
    int mode,i,mt,me,pp1,pp2;
    string mtn,men;
    monster_node *t;
    bool compu=false;

    changetextcolor("***",6);
    changetextcolor(" M",1);
    changetextcolor("o",2);
    changetextcolor("n",3);
    changetextcolor("s",4);
    changetextcolor("C",5);
    changetextcolor("a",6);
    changetextcolor("r",7);
    changetextcolor("d",8);
    changetextcolor("G",9);
    changetextcolor("a",10);
    changetextcolor("m",11);
    changetextcolor("e ",12);
    
    changetextcolor("***",6);
   
    cout<<endl<<"1. Player VS Player"<<endl;
    cout<<"2. Player VS Computer"<<endl;
    cout<<"3. Rule"<<endl;
    

    do{
        textcolor(RED,BLACK);
        cout<<"?";
        resetcolor();
        cin>>mode;
        if(mode == 3){
            pregame_display();
        }
    }while(mode<0 || mode >2);

    if(mode ==2){
        P2.changename();
        compu = true;
    }
    changetextcolor(P1.returnname(),9);
    cout<<" choose your 7 monster"<<endl;
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
        changetextcolor(P2.returnname(),12);
        cout<<" choose your 7 monster"<<endl;
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
    if(P1.returnscore() == 3 || P2.returnscore() == 3)break;
    if(P1.returnsize() <= 0 || P2.returnsize() <= 0)break;
    cout<<"!! ";
    changetextcolor("Battle face",4);
    cout<<" !!"<<endl;
    cout<<"Turn ";
    changetextcolor(P1.returnname(),9);
    cout<<" pick"<<endl;
    system("pause");
    clearscr();

    changetextcolor(P1.returnname(),9);
    cout<<" 1 pick 1 monster to fight"<<endl;
    P1.show_allmonster();
    cout<<"?";
    do{
    pp1=0;
    cin>>pp1;
    }while(pp1<1 || pp1>P1.returnsize());
    // sent card
    clearscr();

    cout<<"Turn ";
    changetextcolor(P2.returnname(),12);
    cout<<" pick"<<endl;
    system("pause");
    clearscr();
    if(!compu){
    changetextcolor(P2.returnname(),12);
    cout<<" 1 pick 1 monster to fight"<<endl;
    P2.show_allmonster();
    cout<<"?";
    }
    do{
    if(compu){
        pp2 = (rand()%P2.returnsize())+1;
    }
    else{cin>>pp2;}
    }while(pp2<1 || pp2>P2.returnsize());
    // sent card
    P1.winlosecal(P1,pp1-1,P2,pp2-1);
    changetextcolor("===============================================================",7);
    cout<<endl;
    changetextcolor(P1.returnname(),9);
    cout<< " Score -> "<< P1.returnscore() <<endl;
    changetextcolor(P2.returnname(),12);
    cout<< " Score -> "<< P2.returnscore() <<endl;
    changetextcolor("===============================================================",7);
    cout<<endl;
    }while(1);

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

void pregame_display(){
    cout<<"| Monster Type | (Win -> Lose)"<<endl;
    cout<<"   ------- ";changetextcolor("Aves",7);cout<<" <---------     "<<"     "<<"   ----- ";changetextcolor("Primitive",5); cout<<" <------     "<<endl;
    cout<<"   V                     |     "<<"     "<<"   V                     |     "<<endl;
    changetextcolor("Reptilia",2);cout<<"           ";changetextcolor("  Terrestail",6); cout<<" "<<"     "<<" ";changetextcolor(" Aves",7);cout<<"                ";changetextcolor("Repptilia",2);cout<<endl;
    cout<<"   V                     ^     "<<"     "<<"   V                     ^     "<<endl;
    changetextcolor("Aquatic",11);cout<<" ------------>";changetextcolor("Primitive",5);cout<<" "<<"     ";changetextcolor("Aquatic",11);cout<<" ------------>";changetextcolor("Terrestial",6); cout<<endl;
    cout<<"|Monster Element|  (Win -> Lose)"<<endl;
    cout<<"  ----- ";changetextcolor("Wind",11);    cout<<" <------   "<<"     "<<"  ----- ";changetextcolor("Water",3); cout<<"<------  "<<endl;
    cout<<"  V                |   "<<"     "<<"  V                |   "<<endl;
    changetextcolor("Fire",12);cout<<"             ";changetextcolor("Earth",14); cout<<"     ";changetextcolor(" Wind",11);cout<<"             ";changetextcolor("Fire",12);cout<<endl;
    cout<<"  V                ^   "<<"     "<<"  V                ^   "<<endl;
    changetextcolor("Plant",10);cout<<" ---------->";changetextcolor("Water",3);cout<<"      ";changetextcolor("Plant",10);cout<<" ---------->";changetextcolor("Earth",14); cout<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
}

void selectmonster(){
    cout<<"---Monster Type---|---Element---"<<endl;
    cout<<"1. ";changetextcolor("Aves",7);cout<<"           |1. ";changetextcolor("Wind",8);cout<<endl;
    cout<<"2. ";changetextcolor("Reptilia",2);cout<<"       |2. ";changetextcolor("Fire",12);cout<<endl;
    cout<<"3. ";changetextcolor("Aquatic",11);cout<<"        |3. ";changetextcolor("Plant",10);cout<<endl;
    cout<<"4. ";changetextcolor("Primitive",5);cout<<"      |4. ";changetextcolor("Water",3);cout<<endl;
    cout<<"5. ";changetextcolor("Terrestail",6);cout<<"     |5. ";changetextcolor("Earth",14);cout<<endl;
    cout<<"Choose your monstertype & element - (numbermontsterype numberelement)"<<endl;
    cout<<"ex. your want Aves and Water input 1 4"<<endl;

}

void clearscr(){
    for(int i=0;i<35;i++)
        cout<<endl;
}

void changetextcolor(string a,int x){
   textcolor(x,BLACK);
   cout<<a;
   resetcolor();


}