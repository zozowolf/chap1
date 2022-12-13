/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:15/09/2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream>  // entete de gestion des E/S

using namespace std; //utilisation de l'espace de nommage 
					 //de la bibliothéque standard

/*======================================================
Fonction principal 
========================================================*/
int main()
{
    int annee;

    cout << "Entrez une annee" << endl;
    cin >> annee;

    if (annee % 4 == 0 && annee % 100 != 0)
        cout << annee << " est une annee bissextile" << endl;
    else if (annee % 400 == 0)
    {
        cout << annee << " est une annee bissextile" << endl;
    }
    else
    {
        cout << annee << " n'est pas une annee bissextile" << endl;
    }

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}