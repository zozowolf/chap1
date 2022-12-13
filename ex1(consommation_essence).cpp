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
	double nbKms, nbLitres, conso;
	cout << "Saisir le nombre de kilometres" << endl;
	cin >> nbKms;

	cout << "Saisir le nombre de litres d'essence" << endl;
	cin >> nbLitres;

	conso = nbLitres * 100.0 / nbKms;
	cout << "La consomation pour 100 kms est de " << conso << endl;



	//Attendons  qu'on appui sur une touche pour terminer
	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}