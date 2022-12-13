/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:15/09/2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream>  // entete de gestion des E/S
#include <math.h>

using namespace std; //utilisation de l'espace de nommage 
					 //de la bibliothéque standard

/*======================================================
Fonction principal 
========================================================*/
int main()
{
	double a, b, c, p, tmp, aire;

	cout << "Saisir les longueurs des trois cotes d'un triangle" << endl;
	cin >> a >> b >> c;

	p = (a + b + c) / 2.0;

	tmp = p * (p - a) * (p * b) * (p - c);

	if (tmp < 0)
		cout << "Erreur de saisie"<<endl;
	else
	{
		aire = sqrt(tmp); 
		cout << "Donc l'aire est de " << aire << endl;
	}
	

	
	cin.get(); cin.ignore();

	return EXIT_SUCCESS;

}