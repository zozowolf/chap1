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
    double x, resultat;
    int i, n;
    cout << "Entrer un reel x et ensuite un entier n" << endl;
    cin >> x >> n;
    resultat = x;
    if (n > 0.0)
    {
        if (n == 1.0)
        {
            cout << "la reponse est " << x << endl;
        }
        else
        {
            for (i = 1; i < n; i++)
            {
                resultat *= x;
            }
            cout << "la reponse est " << resultat << endl;
        }
    }
    else if (n < 0.0)
    {
        if (n == -1.0)
        {

            cout << "la reponse est 1/" << x << endl;
        }
        else
        {
            for (i = 1; i < -n; i++)
            {
                resultat *= x;
            }
            resultat = 1.0 / resultat;
            cout << "la reponse est " << resultat << endl;
        }

    }
    else
    {
        cout << "la reponse est 1" << endl;

    }

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}