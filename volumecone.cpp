/*======================================================
 programme �lementaire en C++
 Auteur: Da Cunha Enzo
 Date:15/09/2022
 version:1.0
========================================================*/

// iostream contient la d�claration des fonctions
// d'entr�e/sortie que je vais utiliser
#include <iostream>  // entete de gestion des E/S

using namespace std; //utilisation de l'espace de nommage 
					 //de la biblioth�que standard

const double PI = 3.14159; // d�finition d'une constante

/*======================================================
Fonction principal
========================================================*/
int main()
{
	// d�finition de trois variables
	double rayon, hauteur, volume;

	//Saisir au clavier le rayon et la hauteur du c�ne
	cout << "Entre la hauteur puis le rayon du cone " << endl;
	cin >> hauteur >> rayon; //clavier => Variables

	volume = PI * rayon * rayon * hauteur / 3.0;
	cout << "Le volume du cone de rayon " << rayon << " et de hauteur "
		<< hauteur << " est " << volume << endl;


	//Attendons  qu'on appui sur une touche pour terminer
	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}