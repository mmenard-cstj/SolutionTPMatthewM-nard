	//but:
//auteur: Matthew menard
//2020-10-19

#pragma once
//liste des d�claration des fonctions qui permettemet de g�rer les menu et leur validation


int afficherMenu1(); //: Fonction qui affiche le menu 1

int afficherMenu2(); //: Fonction qui affiche le menu 2

int validerMenu(int menu1, int quitter); //: Fonction qui lit le choix de l�utilisateur et v�rifie que le choix est bien parmi les
//choix offerts dans le menu, informations pass�es en param�tre.Cette fonction
//retourne le choix valid�.L�utilisateur peut taper n�importe quoi au clavier, le
//programme ne part pas en boucle infinie.