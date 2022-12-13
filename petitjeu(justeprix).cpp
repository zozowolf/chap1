/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:15/09/2022
 version:1.0
========================================================*/

// iostream contient la d�claration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S
#include <time.h>
#include <stdlib.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la biblioth�que standard

/*======================================================
Fonction principal
========================================================*/
int main()
{
    unsigned short alea, nbUser, nbCoupsMax, nbCoups;
    char re;
    //====== Initialiser le génératuer de nombres aléatoires
    // sinon on a toujours la meme série aléatoire
    // on a initialiser en utilisant l'horloge
    srand(time(NULL));
    
    do
    {
        nbCoups = 0;
        do
        {
            alea = rand();
        } while (alea > 100 || alea == 0);

        cout << "Valeur de coups max" << endl;
        cin >> nbCoupsMax;
        do
        {
            cout << "Entrez une valeur" << endl;
            cin >> nbUser;
            nbCoups += 1;
            if (nbUser < alea)
                cout << "trop petit" << endl;
            else if (nbUser > alea)
            {
                cout << "trop grand" << endl;
            }
            else
            {
                cout << "Gagne en " << nbCoups << "coups" << endl;
            }

            if (nbCoups == nbCoupsMax)
            {
                cout << "Perdue fallait trouver " << alea << endl;
            }
        } while (nbUser != alea && nbCoups < nbCoupsMax);
        cout << "Veux-tu continuer (o/n) ? " << endl;
		cin >> re;
    } while (re != 'n' && re != 'N');

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}