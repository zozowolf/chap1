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
	double Rser, Rpar, R1, R2, R3;
	int type;
	cout << "Donne les valeurs des 3 resistances electrique" << endl;
	cin >> R1 >> R2 >> R3;

	cout << "Noter 1 si branchees en serie ou 0 si branchees en parallele" << endl;
	cin >> type;

	Rser = R1 + R2 + R3;

	if (type = 1) 
		
		cout << "Donc la resistance equivalente est de " << Rser << endl;

	else if (type = 0)
	{
		Rpar = (R1 * R2 * R3) / (R1 * R2 + R1 * R3 + R2 * R3);
		cout << "Donc la resistance equivalente est de " << Rpar << endl;
	}
	else
	{
		cout << "Erreur" << endl;
	}

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}