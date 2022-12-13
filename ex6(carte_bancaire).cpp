/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:15/09/2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream>  // entete de gestion des E/S
#include <string>

using namespace std; //utilisation de l'espace de nommage 
					 //de la bibliothéque standard

/*======================================================
Fonction principal 
========================================================*/
int main()
{
    int pcalcule, P, i,temp;
    string code;

    i = 0;
    pcalcule = 0;

    cout << "Entrez votre code de carte bancaire de 16 chiffres" << endl;
    cin >> code;

    P = code[15] - '0';

    for (i = 0; i <= 14; i += 2)
    {
        temp = (code[i] - '0') * 2;

        if (temp > 9)
        {
            code[i] = temp - 9;
        }
        else
        {
            code[i] = temp;
        }
    }

    for (i = 1; i <= 14; i+=2)
    {
        pcalcule = pcalcule + (code[i] - '0');
    }
    for (i = 0; i <= 14; i+=2)
    {
        pcalcule = pcalcule + code[i];
    }

    pcalcule = pcalcule % 10;

    if (pcalcule != 0)
    {
        pcalcule = 10 - pcalcule;
        cout << pcalcule << " comparaison " << P <<" carte valide"<< endl;
    }
    else

    {

        cout << pcalcule << " comparaison " << P <<" carte non valide"<< endl;
    }

    // Attends  qu'on appuie sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

// 4978740880590824
