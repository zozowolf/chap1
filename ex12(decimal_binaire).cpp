/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:../../2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S
#include <string>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard

/*======================================================
Fonction principal
========================================================*/
int main()
{
    unsigned char binaire;
    char re;
    int nombre, poid = 32768;
    do
    {
        cout << "Entrez un nombre pour le transformer en binaire" << endl;
        cin >> nombre;
        while (poid > 0)
        {
            if (nombre >= poid)
            {
                cout << "1";
                nombre = nombre - poid;
                poid /= 2;
            }
            else if (nombre < poid)
            {
                cout << "0";

                poid /= 2;
            }
        }
        cout << "\nVeux-tu continuer (o/n) ? " << endl;
        cin >> re;
    } while (re != 'n' && re != 'N');
    // cout << "donc " << nombre << " vaut " << binaire << " en binaire" << endl;

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}