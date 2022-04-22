#include <iostream>
using namespace std;
#include "classes.h"

int main(){
    joueur joueur_1,joueur_2;
    plateau plat;
    int i=1;
    cout<<"tour n°"<<i<<endl;
    cout<<"tour du joueur 1"<<endl;
    joueur_1.jouer(plat);
    plat.up_espace();
    while(plat.espace()<9){
        cout<<"tour du joueur 2"<<endl;
        joueur_2.jouer(plat);
        plat.up_espace();
        cout<<"fin de tour"<<endl<<endl;
        i++;
        if(i!=1){
            cout<<"tour n°"<<i<<endl;
        }
        cout<<"tour du joueur 1"<<endl;
        joueur_1.jouer(plat);
        plat.up_espace();
    }
    cout<<endl<<"Fin de partie"<<endl;
    cout<<"Nombres de cartes jouées : "<<plat.espace()<<endl;
    return 0;
}
