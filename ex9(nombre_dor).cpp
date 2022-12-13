/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:15/09/2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream>  // entete de gestion des E/S
#include <math.h>

using namespace std; //utilisation de l'espace de nommage 
					 //de la bibliothéque standard

/*======================================================
Fonction principal 
========================================================*/
int main()
{
    double nombredor, n;

    cout << "Entrez une valeur pour n" << endl;
    cin >> n;

    nombredor = 0.0;
    if (n <= 0.0)
        cout << "Erreur" << endl;
    else
    {

        while (n > 0.0)
        {
            nombredor = sqrt(1.0 + nombredor);
            n -= 1.0;
        }
        cout << "Le nombre d or est egal a " << nombredor << endl;
    }

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}