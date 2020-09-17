//But: Créer un programme qui lit en entier et détermine s'il s'agit d'un nombre impair ou pair
//Auteur: Marc-Olivier Parisien
//Date: 11 septembre 2020

#include <iostream> //Inclut le coffre a outils qui communique avec l'utilisateur en utilisant cout, cin

void main()
{
	setlocale(LC_ALL, ""); //Pour convertir correctement les accents

	//Nom de la variable que l'utilisateur entrera lorsque demandé; la valeur y sera stockée
	int nb;
	
	 // FR : On invite l'utilisateur a entrer une valeur pair ou impair
	std::cout << "Veuillez entrer un nombre entier. ";

	 // FR : Le programme stock la valeur dans la variable initialiser par l'utilisateur
	std::cin >> nb;
	 
	// KM : Manque un commentaire ici pour expliquer pourquoi tu fais ce calcul
	if(nb % 2 == 0)
	{
		std::cout << nb << " est un nombre pair. ";
	}
	else
	{
		std::cout << nb << " est un nombre impair. ";
	}

}
//Plan de test
// KM : Ajoute des valeurs négatives
/*
	nb		résultat
	10		10 est un nombre pair.
	1		1 est un nombre impair.
	0		0 est un nombre pair.
*/
