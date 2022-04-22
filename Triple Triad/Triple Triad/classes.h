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
    void def_couleur(int couleur){couleur=couleur;}
};

class plateau{ //utiliser la classe vector et les itérateurs
    carte *table;
    int emplacement_libre=0;
public:
    plateau();
    ~plateau();
    //void afficher();
    int espace(){return (emplacement_libre);}
    void up_espace(){emplacement_libre++;}
};

class joueur{
    carte *main;
public:
    joueur();
    //~joueur();
    void jouer(plateau table);
    
};
#endif /* classes_h */
