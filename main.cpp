#include <iostream>
#include "linklist.h"
using namespace std;

void pregame_display();
void selectmonster();

int main(){

}

void pregame_display(){
    cout<<"| Monster Type |"<<endl;
    cout<<"   ------- Aves <---------     "<<"     "<<"   ----- Primitive <------     "<<endl;
    cout<<"   V                     |     "<<"     "<<"   V                     |     "<<endl;
    cout<<"Reptilia           Terrestial  "<<"     "<<" Aves                Reptilia  "<<endl;
    cout<<"   V                     ^     "<<"     "<<"   V                     ^     "<<endl;
    cout<<"Aquatic ------------>Primitive "<<"     "<<"Aquatic ------------>Terrestial"<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<"|Monster Element|"<<endl;
    cout<<"  ----- Wind <------   "<<"     "<<"  ----- Water <------  "<<endl;
    cout<<"  V                |   "<<"     "<<"  V                |   "<<endl;
    cout<<"Fire             Earth "<<"     "<<"Wind             Fire  "<<endl;
    cout<<"  V                ^   "<<"     "<<"  V                ^   "<<endl;
    cout<<"Plant ---------->Water "<<"     "<<"Plant ---------->Earth "<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
}