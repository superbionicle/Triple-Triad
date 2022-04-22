//
//  classes.h
//  Triple Triad
//
//  Created by Arthur on 21/04/2022.
//  Copyright © 2022 Arthur. All rights reserved.
//

#ifndef classes_h
#define classes_h

class carte{
    //int **tab;
    int gauche,droite,haut,bas;
    int couleur=0; // 1 : rouge / 2 : bleu
public:
    carte();
    ~carte();
    void afficher();
    void generer();
    void operator =(carte a_copier);
    //void affiche_ligne(int k);
};

class plateau{ //utiliser la classe vector et les itérateurs
    carte **table;
    int emplacement_libre=0;
public:
    carte emplacement(int i,int j){return(table[i][j]);};
    plateau();
    ~plateau();
    void afficher();
    int espace(){return (emplacement_libre);}
    void up_espace(){emplacement_libre++;}
};

class joueur{
    carte *main;
public:
    void jouer();
    
};
#endif /* classes_h */
