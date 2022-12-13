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
    int n, resultat;
    cout << "Entrez une valeur pour n" << endl;
    cin >> n;
    resultat = 0;
    for (n = 1; n <= n; n++)
    {
        resultat = resultat + (1 / n);
    }
    cout << "La serie d harmonique de " << n << " est de " << resultat << endl;
    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}