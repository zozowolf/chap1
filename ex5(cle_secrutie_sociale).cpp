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
	unsigned long long cle , NIR;

	cout << "Entrez votre numero de securite social"<< endl;
	cin >> NIR ;

	cle= 97-(NIR % 97) ;

	if ( cle <100 && cle >9 )
		cout << "Votre cle est donc "<< cle << endl;
	else
	{
		cout <<"Erreur"<< endl;
	}

	//Attendons  qu'on appui sur une touche pour terminer
	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}