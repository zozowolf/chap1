/*
programme �l�mentaire en c++
Auteur :
Date : Sept2022
Version : 1.0

*/

// iostrem contient la d�claration des fonctions
// d'entr�e/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S

using namespace std; // utilisation de l'espace de nommage
                     //  de la biblioth�que standard

/*===========================================================
Fonction principale
===========================================================*/
int main()
{
    // Simulation de l'extraction du bit C2 
    // Définition des variables de type octet positif
    unsigned char octetLu, masque, bitC2;
    // on simule ici le résultat fourni par le capteur
    // 0x permet d'écrire de l'hexadécimal
    // On ne peut pas saisir du binaire en C++
    octetLu = 0x3A; 
    masque = 0x10; // seul le bit associé à C2 est à 1
    // on pouvait aussi écrire masque=16;
    bitC2 = octetLu & masque; // ET BIT A BIT
    bitC2 >>= 4; // Décalage de 4 bits à droite
    cout << "bit C2=" <<(int) bitC2 << endl;

    
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}