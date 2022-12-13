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
    double x1, y1, x2, y2, surface, x, y;
    int verif ;
    char re;

    do
    {
        verif =0;
        do
        {
            cout << "Entrez les valeurs de x1, y1, x2, y2  " << endl;
            cin >> x1 >> y1 >> x2 >> y2;

            if (x2 > x1 && y1 > y2)
            {
                x = x2 - x1;
                y = y1 - y2;
                surface = x * y;
                cout << "Donc la surface des coordonnees saisie est " << surface << "\n"
                     << endl;
                verif++;
            }
            else if (y2 > y1 && x1 > x2)
            {
                x = x1 - x2;
                y = y2 - y1;
                surface = x * y;
                cout << "Donc la surface des coordonnees saisie est " << surface << "\n"
                     << endl;
                verif++;
            }
            else if (y1 > y2 && x1 > x2)
            {
                x = x1 - x2;
                y = y1 - y2;
                surface = x * y;
                cout << "Donc la surface des coordonnees saisie est " << surface << "\n"
                     << endl;
                verif++;
            }
            else if (y2 > y1 && x2 > x1)
            {
                x = x2 - x1;
                y = y2 - y1;
                surface = x * y;
                cout << "Donc la surface des coordonnees saisie est " << surface << "\n"
                     << endl;
                verif++;
            }
            else
            {
                cout << "Erreur\n"<< endl;
            }
        } while (verif != 1.0);
        cout << "Veux-tu recommencer (o/n) ? " << endl;
        cin >> re;
    } while (re != 'n' && re != 'N');
    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}