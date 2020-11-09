#include "Formes2066734.h"
#include <iostream>
using namespace std;



int dessinerRectangle(int haut, int larg, int dedans)
{
    if (dedans == 1)
    {

        for (int i = 0; i < haut; i++)
        {
            for (int i = 0; i < larg; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i <larg ; i++)
        {
            cout << "*";
        }
        cout << endl;
        for (int i = 1; i < haut - 1; i++)
        {
            cout << "*";
            for (int i = 1; i < larg - 1; i++)
            {
                cout << " ";
            }
            cout << "*"<<endl;
        }
        for (int i = 0; i < larg; i++)
        {
            cout << "*";
        }
    }
    cout << endl; system("pause");
    return 0;
}

int dessinerTriangle1(int hauteur, int choix)  // finction qui dessine le triangle
{
    int larg;
    larg = -1;
    cout << "*" << endl;
    for (int i = 0; i <hauteur-2; i++)
    {
        if (larg<=hauteur)
        {
            larg++;
        }
        cout << "*";
        for (int i = 0; i < larg; i++)
        {
            if (choix == 2)
            {
                cout << " ";
            }
            else
            {
                cout << "#";
            }
        }cout << "*" << endl;
    }for (int i = 0; i < hauteur; i++)
    {
        cout << "*";
    }cout << endl;
    system("pause");
    return 0;
}

int dessinerTriangle2(int hauteur,int choix)
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

int dessinerTriangle3(int hauteur ,int choix)
{
    return 0;
}

int dessinerTriangle4(int hauteur,int choix)
{
    return 0;
}

int dessinerLosange()
{
    return 0;
}

int genererNombreAleatoire()
{
    return 0;
}

int traiterRectangle(int choixRemplissage)
{ //déclaration des variables
    int hauteur;
    int largeur;
    cout << "entrer la hauteur:" << endl;
    cin >> hauteur;
    cout << "entrer la largeur: " << endl;
    cin >> largeur;
    system("cls");
    cout << "voici votre Rectangle de: " << hauteur << " x " << largeur << endl;
        dessinerRectangle(hauteur, largeur , choixRemplissage);
       

    return 0;
}

int traiterTriangle(int choixRemplissage)
{
    int random;
    int hauteur;
    cout << "entrez la hauteur: "; // demande la hauteur
    cin >> hauteur;//entre la hauteur
    //random=rand()%4+1; // prend un chiffre entre 1 et 4 de façon aléatoire
    random = 1;
    system("cls");
    cout << "voici votre triangle de " << hauteur << " de hauteur!" << endl;
    switch (random) // choisi le triangle a utiliser selon le random
    {
    case 1 :
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
    cin >> hauteur;                                       // mais lenvoie 2 fois a la fonction
    system("cls");
    cout << "voici votre carré de " << hauteur << " x " << hauteur << endl;
    dessinerRectangle(hauteur, hauteur, choixRemplissage);  // du rectangle pour faire a croire à dessinerRectangle que l'on dessine un rectangle
    return 0;
}

int traiterLosange(int choixRemplissage)
{
    return 0;
}
