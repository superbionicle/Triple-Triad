//
//  classes.cpp
//  Triple Triad
//
//  Created by Arthur on 21/04/2022.
//  Copyright © 2022 Arthur. All rights reserved.
//

#include "classes.h"
#include "utiles.h"
#include <iostream>
using namespace std;

carte::carte(){ // constructeur
    gauche=0;
    droite=0;
    haut=0;
    bas=0;
    
    /*tab=new int*[3];
    for(int i=0;i<3;i++){
        tab[i]=new int[3];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tab[i][j]=0;
        }
    }*/
}

carte::~carte(){ // destructeur
    //delete tab;
}

void carte::afficher(){
    cout<<"~"<<haut<<"~"<<endl;
    cout<<gauche<<"~"<<droite<<endl;
    cout<<"~"<<bas<<"~"<<endl;
    
    /*for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;*/
}

void carte::generer(){ // générateur de valeurs // méthode de random à améliorer
    //long haut,bas,gauche,droite;
    haut=random_at_most(5);
    bas=random_at_most(5);
    gauche=random_at_most(5);
    droite=random_at_most(5);
    /*tab[0][1]=haut;
    tab[1][0]=gauche;
    tab[1][2]=droite;
    tab[2][1]=bas;*/
    /*cout<<"haut : "<<haut<<endl;
    cout<<"droite : "<<droite<<endl;
    cout<<"bas : "<<bas<<endl;
    cout<<"gauche : "<<gauche<<endl;*/
}

void carte::operator=(carte a_copier){
    a_copier.haut=haut;
    a_copier.bas=bas;
    a_copier.gauche=gauche;
    a_copier.droite=droite;
    /*for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tab[i][j]=a_copier.tab[i][j];
        }
    }*/
}

/*void carte::affiche_ligne(int k){
    for(int i=0;i<3;i++){
        cout<<tab[k][i];
    }
}*/

plateau::plateau(){
    carte carte_nulle;
    carte_nulle.afficher();
    /*table=new carte*[3];
    for(int i=0;i<3;i++){
        table[i]=new carte[3];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            table[i][j]=carte_nulle;
        }
    }*/
}

plateau::~plateau(){
    delete table;
}

void plateau::afficher(){
    /*for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                table[i][j].affiche_ligne(k);
            }
            cout<<"bite"<<endl;
        }
        cout<<endl;
    }
    cout<<endl;*/
    table[0][0].afficher();
}

void joueur::jouer(){
    cout<<"test joueur"<<endl;
}
