#include <iostream>
using namespace std;
#include "classes.h"

int main(){
    carte tab;
    //cout<<endl;
    plateau plat;
    tab.afficher();
    cout<<endl;
    tab.generer();
    tab.afficher();
    cout<<endl;
    tab.generer();
    tab.afficher();
    cout<<endl;
    //carte test=plat.emplacement(0,0);
    //plat.afficher();
    return 0;
}
