#include "Menus2066734.h"
#include <iostream>
#include<string>
using namespace std;

int afficherMenu1()
{

	system("cls");
	cout << "1.  Rectangle"<< endl;
	cout << "2.  Triangle" << endl;
	cout << "3.  Carré" << endl;
	cout << "4.  Losange" << endl;
	cout << "5.  Quitter" << endl;
	cout << "Votre choix --> " << endl;
	
	return 0;
}

int afficherMenu2()
{
	//int choix;
	system("cls");
	cout << "1.  Forme pleine" << endl;
	cout << "2.  Forme vide" << endl;
	cout << "3.  Retour au menu précédent" << endl;

	return 0;
}

int validerMenu(int choixMenu, int nbMax)
{
	int nombre;
	if (choixMenu == 1)
	{
		afficherMenu1();
		nombre=input();
		system("cls");
		while (nombre < 1 || nombre > nbMax)
		{
			afficherMenu1();
			nombre=input();
			system("cls");
		}
	}
	else
	{
		afficherMenu2();
		nombre=input();
		while (nombre < 1 || nombre > nbMax)
		{
			afficherMenu2();
			nombre=input();
			system("cls");
		}
	}
	return nombre;
}

int input()// fonction qui assure le bont finctionnement de tout les donner entrer par lutilisateur
{

	string clavier;

	getline(cin, clavier, '\n');

	while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
		|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))


	{
		cout << "Erreur : vous devez entrer un entier." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		getline(cin, clavier, '\n'); 
	}


	// convetion de la chaine en entier
	return stoi(clavier);
	
}
