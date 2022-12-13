/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:15/09/2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S
#include <string>
#include <cstring>

using namespace std; // utilisation de l'espace de nommage
					 // de la bibliothéque standard

/*======================================================
Fonction principal
========================================================*/
int main()
{
	int  mini = 99999, maxi = 0, moyenne = 0, i, somme = 0;
	string valeur, temp;
	char re;


	do
	{
		cout << "Entrez une valeur" << endl;
		cin >> temp;
		valeur = valeur + temp;

		cout << "\nVeux-tu continuer (o/n) ? " << endl;
		cin >> re;


	} while (re != 'n' && re != 'N');




	//mini et maxi
	for (i = 0; i < valeur.length(); i++)
	{
		if (valeur[i] < mini)
		{
			mini = 0;
			mini = valeur[i];
			mini = mini - 48;
		}
	}

	for (i = 0; i < valeur.length(); i++)
	{
		if (valeur[i] > maxi)
		{
			maxi = 0;
			maxi = valeur[i];
			maxi = maxi - 48;

		}
	}

	// moyenne
	for (i = 0; i < valeur.length(); i++)
	{
		somme = somme + (valeur[i] - 48);
	}
	moyenne = somme / valeur.length();


	cout << "Le mini est de " << mini << "\nLe maxi est de " << maxi << "\nEt la moyenne est de " << moyenne << endl;





	// Attendons  qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}