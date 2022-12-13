/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:../../2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard

/*======================================================
Fonction principal
========================================================*/
int main()
{

    int nb;

    cout << "enter un nombre" << endl;
    cin >> nb;

    for (int i = 0; i != nb; i++)
    {
        cout << "*";
    }
    cout << "\n";

    for (int i = 0; i != nb - 2; i++)
    {
        cout << "*";
        for (int y = 0; y != nb - 2; y++)
        {
            cout << " ";
        }
        cout << "*";
        cout << "\n";
    }

    for (int i = 0; i != nb; i++)
    {
        cout << "*";
    }

    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}