//But:
//auteur:
//date:

#pragma once

//liste de declaration de fonction permettant de traiter et de dessiner les formes

//int traiterForme();// : Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent
//la phrase de présentation de la forme avec les bonnes dimensions et finalement
//appellent la fonction dessinant la forme.Il y aura donc 4 versions de cette
//fonction : traiterRectangle(), traiterCarre(), traiterTriangle(),
//int traiterLosange();// .
int dessinerRectangle(int haut, int larg, int dedans); //: Fonction qui dessine un rectangle ou un carré dont la hauteur, la largeur et le
//mode de remplissage sont passés en paramètre.
int dessinerTriangle1(int hauteur, int choix); //: Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode
//de remplissage sont passés en paramètre.
int dessinerTriangle2(int hauteur, int choix); //: Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode
//de remplissage sont passés en paramètre.
int dessinerTriangle3(int hauteur, int choix); //: Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode
//de remplissage sont passés en paramètre.
int dessinerTriangle4(int hauteur, int choix);// : Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode
//e remplissage sont passés en paramètre.
int dessinerLosange(int hauteur, int remplissage);// : Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont
//passés en paramètre.
int genererNombreAleatoire();// : Fonction qui retourne un nombre aléatoire compris entre min et max passés en
//paramètre.
int traiterRectangle(int choixRemplissage);
int traiterTriangle(int choixRemplissage);
int traiterCarre(int choixRemplissage);
int traiterLosange(int choixRemplissage);