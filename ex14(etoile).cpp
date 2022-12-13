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
int main() {

    int nb, i=0, line, n = 0, N = 0;

    cout << "entrer un nombre: " << endl;
    cin >> nb;
    cout << "\n";

    line = nb / 2 + 1;

    while (i != line) {
        for (int y = 0; y != N; y++) {
            cout << " ";
        }
        for (int y = 0; y != nb - n; y++) {
            cout << "*";
        }
        for (int y = 0; y != N; y++) {
            cout << " ";
        }
        cout << "\n";
        n += 2;
        i++;
        N++;
    }

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}