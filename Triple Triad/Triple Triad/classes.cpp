#include "classes.h"
#include "utiles.h"
#include <iostream>
using namespace std;

// Méthodes des cartes //

carte::carte(){ // constructeur
    gauche=0;
    droite=0;
    haut=0;
    bas=0;
}

carte::~carte(){ // destructeur
}

void carte::afficher(){
    cout<<"~"<<haut<<"~"<<endl;
    cout<<gauche<<"~"<<droite<<endl;
    cout<<"~"<<bas<<"~"<<endl;
}

void carte::generer(){ // générateur de valeurs // méthode de random à améliorer
    haut=random_at_most(5);
    bas=random_at_most(5);
    gauche=random_at_most(5);
    droite=random_at_most(5);
}

void carte::operator=(carte a_copier){
    a_copier.haut=haut;
    a_copier.bas=bas;
    a_copier.gauche=gauche;
    a_copier.droite=droite;
}

// Méthodes du plateau //

plateau::plateau(){
    table =new carte[9];
}

plateau::~plateau(){
    //delete table;
}

/*void plateau::afficher(){
}*/

// Méthode du joueur //

joueur::joueur(){
    main = new carte[5];
    //utiliser des itérateurs
    for(int i=0;i<5;i++){
        cout<<"génération de la carte "<<i+1<<endl;
    }
    cout<<endl;
}

void joueur::jouer(plateau table){
    //cout<<"test joueur"<<endl;
    }
