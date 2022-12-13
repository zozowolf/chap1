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
	int nombre,i;
	for (i=0; i<100 ; i++)
	{
		if (i% 2 ==0)
		{
		 nombre = nombre;
		}
		else 
		{
			nombre= nombre + i;
		}
	}
	cout <<"Donc l additionne de tous les nombres impairs inferieurs a 100 est de "<< nombre << endl;

	//Attendons  qu'on appui sur une touche pour terminer
	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}