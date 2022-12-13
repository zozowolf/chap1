/*======================================================
 programme �lementaire en C++
 Auteur: Da Cunha Enzo
 Date:15/09/2022
 version:1.0
========================================================*/

// iostream contient la d�claration des fonctions
// d'entr�e/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S

using namespace std; // utilisation de l'espace de nommage
                     // de la biblioth�que standard

/*======================================================
Fonction principal
========================================================*/

int main()
{
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
            cout << i * j << "\t";
        cout << endl;
    }
    // Attendons qu'on appuie sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

