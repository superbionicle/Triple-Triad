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
    int **tab;
    int couleur;
public:
    carte();
    ~carte();
    void afficher();
    void generer();
};
/*class plateau{
    carte table[9];
public:
    
}

class joueur{
    carte main[5];
public:
    void jouer();
    
}*/
#endif /* classes_h */
