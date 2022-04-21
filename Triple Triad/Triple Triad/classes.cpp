//
//  classes.cpp
//  Triple Triad
//
//  Created by Arthur on 21/04/2022.
//  Copyright © 2022 Arthur. All rights reserved.
//

#include "classes.h"
#include <iostream>
using namespace std;

carte::carte(){
    //tab={{0,0,0},{0,0,0},{0,0,0}};
    //tab=new int[3][3];
    tab=new int*[3];
    for(int i=0;i<3;i++){
        tab[i]=new int[3];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tab[i][j]=0;
        }
    }
}

carte::~carte(){
    delete tab;
}

void carte::afficher(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
}

void carte::generer(){
    
}
