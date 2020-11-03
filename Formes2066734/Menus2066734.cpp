#include "Menus2066734.h"
#include <iostream>
using namespace std;

int afficherMenu1()
{

	cout << "1.  REctengle"<< endl;
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
	cout << "1.  Forme pleine" << endl;
	cout << "2.  Forme vide" << endl;
	cout << "3.  Retour au menu précédent" << endl;

	return 0;
}

int validerMenu(int choixMenu, int nbMax)
{
	int nombre;
	if (choixMenu==1)
	{
		afficherMenu1();
		cin >> nombre;
		system("cls");
		while (nombre < 1 || nombre > nbMax)
		{
			afficherMenu1();
			cin >> nombre;
			system("cls");
		}
	}
	if (choixMenu==2)
	{
		cin >> nombre;
		while (nombre < 1 || nombre > nbMax)
		{
			afficherMenu2();
			cin >> nombre;
			system("cls");
		}
	}
	return nombre;
}
