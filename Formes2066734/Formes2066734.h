//But:
//auteur:
//date:

#pragma once

//liste de declaration de fonction permettant de traiter et de dessiner les formes

int traiterForme();// : Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent
//la phrase de pr�sentation de la forme avec les bonnes dimensions et finalement
//appellent la fonction dessinant la forme.Il y aura donc 4 versions de cette
//fonction : traiterRectangle(), traiterCarre(), traiterTriangle(),
//int traiterLosange();// .
int dessinerRectangle(); //: Fonction qui dessine un rectangle ou un carr� dont la hauteur, la largeur et le
//mode de remplissage sont pass�s en param�tre.
int dessinerTriangle1(); //: Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode
//de remplissage sont pass�s en param�tre.
int dessinerTriangle2(); //: Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode
//de remplissage sont pass�s en param�tre.
int dessinerTriangle3(); //: Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode
//de remplissage sont pass�s en param�tre.
int dessinerTriangle4();// : Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode
//e remplissage sont pass�s en param�tre.
int dessinerLosange();// : Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont
//pass�s en param�tre.
int genererNombreAleatoire();// : Fonction qui retourne un nombre al�atoire compris entre min et max pass�s en
//param�tre.
int traiterRectengle();
int traiterTriangle();
int traiterCarre();
int traiterLosange();