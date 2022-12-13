/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:4/10/2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser

#include <iostream> // entete de gestion des E/S

using namespace std; // utilisation de l'espace de nommage
					 // de la bibliothèque standard

const double zeroabsoluecelsius = -273.15;
const double zeroabsoluefahrenheit = -459.67;
/*======================================================
Fonction principal
========================================================*/
int main()
{
	char re;
	double celsius, fahrenheit, min, max, pas, choix;
	do
	{
		cout << "Tapez '1' pour convertir de celsius a fahrenheit \nTapez '2' pour convertir de fahrenheit a celsius \nTapez '3' pour afficher le tableau de conversion \n"
			 << endl;
		cin >> choix;

		if (choix == 1)
		{
			cout << "Entrez une temperature en celsius" << endl;
			cin >> celsius;
			if (celsius < zeroabsoluecelsius)
				cout << "Erreur" << endl;
			else
				;
			{
				fahrenheit = 9.0 / 5.0 * celsius + 32.0;
				cout << celsius << " degre fait " << fahrenheit << endl;
			}
		}
		else if (choix == 2)
		{
			cout << "Entrez une temperature en fahrenheit" << endl;
			cin >> fahrenheit;
			if (fahrenheit < zeroabsoluefahrenheit)
				cout << "Erreur" << endl;
			else
				;
			{
				celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
				cout << fahrenheit << "F fait " << celsius << endl;
			}
		}
		else if (choix == 3)
		{
			cout << "Entre une temperature en celsius minimun ,maximun et le pas " << endl;
			cin >> min >> max >> pas;

			cout << "Celsius \t Fahrenheit" << endl;
			cout << "=====================================" << endl;

			for (celsius = min; celsius <= max; celsius += pas)
			{

				if (celsius < zeroabsoluecelsius)
					cout << "Erreur" << endl;
				else
				{
					fahrenheit = 9.0 / 5.0 * celsius + 32.0;
					cout << celsius << " \t " << fahrenheit << endl;
				}
			}
		}
		else 
		{
			cout << "Erreur" << endl;
		}
		cout << "Veux-tu continuer (o/n) ? " << endl;
		cin >> re;
	} while (re != 'n' && re != 'N');
	// Attendons  qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}