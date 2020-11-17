#include "Formes2066734.h"
#include <iostream>
#include"Menus2066734.h"
using namespace std;



int dessinerRectangle(int haut, int larg, int dedans)
{
	/*if (dedans == 1)
	{

		for (int i = 0; i < haut; i++)
		{
			for (int i = 0; i < larg; i++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}*/

	for (int i = 0; i < larg; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 1; i < haut - 1; i++)
	{
		cout << "*";
		for (int i = 1; i < larg - 1; i++)
		{
			if (dedans == 2)   // le choix de remplissage
			{
				cout << " ";
			}
			else
			{
				cout << "#";
			}
		}
		cout << "*" << endl;
	}
	for (int i = 0; i < larg; i++)
	{
		cout << "*";
	}

	cout << endl; system("pause");
	return 0;
}

int dessinerTriangle1(int hauteur, int choix)  // fonction qui dessine le triangle
{
	int larg;
	larg = -1; // moins 1 pour que le premiere augmentation de larg ne compte pas
	cout << "*" << endl; // pointe du trangle
	for (int i = 0; i < hauteur - 2; i++)// boucle qui execute tout le triangle sur sa hauteur
	{
		if (larg <= hauteur)// augmentation de la largeur a chaque ligne(nombre d'espace) jusqua la hauteur
		{
			larg++;
		}
		cout << "*";
		for (int i = 0; i < larg; i++) // intérieur du triangle
		{
			if (choix == 2)   // le choix de remplissage
			{
				cout << " ";
			}
			else
			{
				cout << "#";
			}
		}cout << "*" << endl;
	}for (int i = 0; i < hauteur; i++) //derniere ligne du triangle
	{
		cout << "*";
	}cout << endl;
	system("pause");
	return 0;
}

int dessinerTriangle2(int hauteur, int choix)
{
	int larg;
	larg = hauteur;
	for (int i = 0; i < hauteur; i++)  // boucle qui va dessiner la premiere ligne du traingle
	{
		cout << "*";
	}cout << endl;
	for (int i = 1; i < hauteur; i++) //boucle qui va dessiner tous les autre lignes
	{
		cout << "*";// le premer * de chaque ligne
		for (int i = 2; i < larg - 1; i++) // cette boucle choisi le remplissage et le gère
		{
			if (choix == 2)
			{
				cout << " ";
			}
			else
			{
				cout << "#";
			}
		}larg--;
		if (larg >= 2) // arrete le dernier * pour éviter 4 point coller a la pointe
		{
			cout << "*" << endl;
		}
	}
	cout << endl;
	system("pause"); //met le syteme en pause pour avoir le temps de voir la forme avant de reaficher le menu
	return 0;
}

int dessinerTriangle3(int hauteur, int choix)
{
	int larg; // largeur,remplissage
	int espace;// espace a partir de la gauche
	larg = hauteur - 3;
	espace = 1;
	for (int i = 0; i < hauteur; i++)
	{
		cout << "*"; // ligne de debut
	} cout << endl; //retour à la ligne
	for (int i = 1; i < hauteur - 1; i++) // Triangle
	{
		for (int i = 0; i < espace; i++) // espace avant le triangle
		{
			cout << " ";
		}
		espace++;
		cout << "*";//coter du gauche du triangle
		for (int i = 0; i < larg; i++)//intérieur du triangle
		{
			if (choix == 2)
			{
				cout << " ";  //interieur vide
			}
			else
			{
				cout << "#"; //interieur plein
			}
		}
		larg--; // baisse linterieur du Triangle pour avoir une ligne de droite verticale
		cout << "*" << endl;   //ligne de droite
	}for (int i = 0; i < espace; i++)//nombre d'espace pour aligner le dernier point
	{
		cout << " ";
	}
	cout << "*" << endl; //point de la pointe
	system("pause");
	return 0;
}

int dessinerTriangle4(int hauteur, int choix)
{
	int larg = 0; // largeur,remplissage
	int espace;// espace a partir de la gauche
	espace = hauteur - 2;

	for (int i = 0; i < hauteur - 1; i++)//nombre d'espace pour aligner le premier point
	{
		cout << " ";
	}
	cout << "*" << endl; //point de la pointe
	for (int i = 0; i < hauteur - 2; i++)// pour chaque ligne du triangle
	{

		for (int i = 0; i < espace; i++)//espace de gauche
		{
			cout << " ";
		}
		espace--; // diminue le nombre d'espace a chaque ligne
		cout << "*";
		for (int i = 0; i < larg; i++)// interieur du triangle
		{
			if (choix == 2)
			{
				cout << " ";  //interieur vide
			}
			else
			{
				cout << "#"; //interieur plein
			}
		}
		cout << "*" << endl;
		larg++; //augmente le nombre despace à chaque lignes
	}
	for (int i = 0; i < hauteur; i++) // derniere ligne
	{
		cout << "*";
	}
	cout << endl;
	system("pause");
	return 0;
}

int dessinerLosange(int hauteur, int remplissage)
{/*espace haut gauche, escapce bas gauche// remp haut,remp bas//largeur=hauteur*/
	int largeur;
	largeur = hauteur;
	int espaceG = (hauteur / 2) - 1;
	int inth = 1;
	for (int i = 0; i < hauteur / 2; i++)// espace pour le premier point
	{
		cout << " ";
	}cout << "*" << endl;
	for (int i = 0; i < hauteur / 2; i++) // chaque ligne du losange (partie haut)
	{
		//espace haute gauche
		for (int i = 0; i < espaceG; i++)
		{
			cout << " ";
		}cout << "*";
		espaceG--;
		//espace interieur haut
		for (int i = 0; i < inth; i++)
		{
			if (remplissage == 2)
			{
				cout << " ";  //interieur vide
			}
			else
			{
				cout << "#"; //interieur plein
			}
		}
		inth = inth + 2;
		cout << "*" << endl;
	}
	for (int i = 0; i < hauteur / 2 - 1; i++)//chaque ligne du losange (partie bas)
	{
		//espace gauche droit
		for (int i = 0; i < espaceG + 2; i++)
		{
			cout << " ";
		}cout << "*";
		espaceG = espaceG++;
		//interieur bas
		for (int i = 0; i < largeur - 4; i++)
		{
			if (remplissage == 2)
			{
				cout << " ";  //interieur vide
			}
			else
			{
				cout << "#"; //interieur plein
			}
		}cout << "*" << endl;
		largeur = largeur - 2;
	}

	for (int i = 0; i < hauteur / 2; i++)// espace pour le premier point
	{
		cout << " ";
	}cout << "*" << endl;


	system("pause");
	return 0;
}

int genererNombreAleatoire()
{
	int random;
	random = rand() % 4 + 1; // prend un chiffre entre 1 et 4 de façon aléatoire
	return random;
}

int traiterRectangle(int choixRemplissage)
{ //déclaration des variables
	int hauteur;
	int largeur;
	cout << "entrer la hauteur:" << endl;
	hauteur = input();
	cout << "entrer la largeur: " << endl;
	largeur = input();
	system("cls");
	cout << "voici votre Rectangle de: " << hauteur << " x " << largeur << endl;
	dessinerRectangle(hauteur, largeur, choixRemplissage);


	return 0;
}

int traiterTriangle(int choixRemplissage)
{
	int hauteur;
	cout << "entrez la hauteur: "; // demande la hauteur
	hauteur = input();//entre la hauteur

	genererNombreAleatoire();
	system("cls");
	cout << "voici votre triangle de " << hauteur << " de hauteur!" << endl;
	switch (genererNombreAleatoire()) // choisi le triangle a utiliser selon le random
	{
	case 1:
		dessinerTriangle1(hauteur, choixRemplissage); // appel le dessin du trangle avec lindiquateur de hauteur et du remplissage
		break;
	case 2:
		dessinerTriangle2(hauteur, choixRemplissage);
		break;
	case 3:
		dessinerTriangle3(hauteur, choixRemplissage);
		break;
	case 4:
		dessinerTriangle4(hauteur, choixRemplissage);
		break;
	}

	return 0;
}

int traiterCarre(int choixRemplissage)
{
	int hauteur;
	cout << "entrez la dimention du carré: " << endl;   // le carrer demande une fois la hauteur
	hauteur = input();                                       // mais lenvoie 2 fois a la fonction
	system("cls");
	cout << "voici votre carré de " << hauteur << " x " << hauteur << endl;
	dessinerRectangle(hauteur, hauteur, choixRemplissage);  // du rectangle pour faire a croire à dessinerRectangle que l'on dessine un rectangle
	return 0;
}

int traiterLosange(int choixRemplissage)
{
	int hauteur;
	cout << "veuillez entrer une hauteur!" <<endl;
	hauteur = input();
	while (hauteur % 2 == 0)
	{
		cout << "La hauteur du losange  doit être impair: "<< endl;
		cin >> hauteur;
	}
	dessinerLosange(hauteur, choixRemplissage);
	return 0;
}

/*largeur = hauteur;
espaceG = (hauteur / 2) - 1;
for (int i = 0; i < espaceG; i++)// espace haut gauche du losange
{
	cout << " ";

}cout << "*";
espaceG--;
//espace intérieur haut du losange
largeur = 0;
for (int i = 0; i < largeur; i++)
{
	cout << " ";
	largeur++;
}cout << "*" << endl;
//espace bas gauche losange
espaceG = 1;
for (int i = 0; i < espaceG; i++)
{
	cout << " ";

}
espaceG++;
//intérieur bas
for (int i = 0; i < largeur / 2 - 1; i++)
{
	cout << " ";
}cout << "*" << endl;
*/