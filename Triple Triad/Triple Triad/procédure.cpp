// initialisation

/*
 1. On démarre un plateau vide (tableau de cartes de 9 emplacements)
 2. On crée deux mains pour les joueurs (tableau de cartes de 5 emplacements)
 3. On dit quel joueur commence (on lui donne le token pour jouer)
 */

// boucle principale

/*
tant que(espace libre) faire{
    on regarde quel joueur doit jouer
    on affiche les cartes du joueur qu'il lui reste
    on lui demande quelle carte il veut jouer (carte entre 1 et 5)
    on lui demande où il veut jouer sa carte (ligne entre 1 et 3, colonne entre 1 et 3)
    on place la carte sur le tableau :
        main_joueur.nb_cartes --;
        plateau.emplacement_libre --;
    si(voisin) alors {
        combat : (à avoir défini en début de partie)
        1. classique : on regarde juste les voisins adjacents avec strict sup
        2. addition : on regarde les voisins adjacents avec sup ou égal
        3. propagation : lors d'une pose, on peut faire de la propagation quand on récup des cartes
        test combat : si carte.pwr>carte_ennemie.pwr alors carte_ennemie.couleur=carte.couleur
        faire pareil pour tous les voisins adjacents
    }
    on donne le token au joueur suivant
 }
*/

// fin de jeu

/*
1. on affiche le vainceur : on compte le nombre de cartes de chaque joueur
2. on demande s'ils veulent rejouer
*/

// classes

/*
cartes{
 pwr : gauche,droite,haut,bas
 couleur : bleu ou rouge
 
 public:
 
 void défaite() permet de changer la couleur de la carte après une défaite
 void bagarre() permet de regarder les voisins et de procéder aux combats
 
}
 
plateau{
 table : tableau de cartes de taille 9
 nb_dispo : nb d'emplacement entre 0 et 9
 
 public:
 
 void tour() permet de changer le token des joueurs
 
}
 
main_joueur{
 main : tableau de cartes de taille 5
 nb_cartes : nb de cartes entre 0 et 5
 couleur_joueur : bleu/rouge
 token : permet de déterminer si c'est son tour
 
 public :
 
 void jouer(int pos) : permet de joueur une carte de la main du joueur
}
*/
