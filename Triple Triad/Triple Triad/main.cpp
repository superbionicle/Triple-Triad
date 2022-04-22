#include <iostream>
using namespace std;
#include "classes.h"

int main(){
    carte tab;
    joueur joueur_1,joueur_2;
    //cout<<endl;
    plateau plat;
    //tab.afficher();
    cout<<endl;
    tab.generer();
    tab.afficher();
    /*cout<<endl;
    tab.generer();
    tab.afficher();
    cout<<endl;*/
    //carte test=plat.emplacement(0,0);
    //plat.afficher();
    /*int i=1;
    while(plat.espace()<9){
        cout<<"tour n°"<<i<<endl;
        cout<<"tour du joueur 1"<<endl;
        joueur_1.jouer();
        plat.up_espace();
        cout<<"tour du joueur 2"<<endl;
        joueur_2.jouer();
        plat.up_espace();
        cout<<"fin de tour"<<endl;
        i++;
    }*/
    return 0;
}
