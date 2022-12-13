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
    double h, rebond = 0.0, distance = 0.0;
    cout << "Entrez une hauteur en mm" << endl;
    cin >> h;


    while (h > 0.5)
    {
        rebond = h * (7.0 / 8.0);
        distance = distance + rebond + h;
        h = rebond;

    }

    cout << "donc la balle a parcouru une distance de " << distance << " mm" << endl;


    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}