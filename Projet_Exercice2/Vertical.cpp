/*But: Programme qui vérifie que l'utilisateur a bien entré 5 chiffres. 
Puis il affiche les chiffres de façon vertical ligne par ligne. 
S'il n'y pas 5 chiffres, le programme le mentionne à l'utilisateur
*/
//Auteur: Marc-Olivier Parisien
//Date: 14 septembre 2020

#include <iostream> //Inclut le coffre a outils qui communique avec l'utilisateur en utilisant cout, cin
#include <string>

int main()

{
	setlocale(LC_ALL, ""); //Pour convertir correctement les accents
	
	//Déclare les variable qui seront initialisé par l'utilisateur
	int nb5;
	
	
	//Demande à l'utilisateur d'enter un nombre entier à 5 chiffres
	std::cout << "Veuillez entrer un nombre entier de 5 chiffres. "; 

	//Stock la valeur dans la variable initialisé par l'utilisateur.
	std::cin >> nb5; 

	if(nb5 >= 10000 && nb5 <= 99999) //Opérateur logique && retourne true si les deux conditions sont respectées. Notions prise de: https://www.w3schools.com/cpp/cpp_operators_logical.asp
	{
		std::cout << nb5 / 10000 << std::endl; /*Programme lit nb5 et le divise par 10000. 
											   Puisque c'est un entier, seulement le premier 
											   nombre revient.*/

		nb5 = nb5 % 10000;					 /*Le programme stock la nouvelle valeur de nb5 
											 et fait le modulo de celui en retirant toutes 
											 les dizaines de milliers possibles.*/

											//Les mêmes opérations sont répétés jusqu'au cinquième chiffre

		std::cout << nb5 / 1000 << std::endl; 
		nb5 = nb5 % 1000; 
		std::cout << nb5 / 100 << std::endl;
		nb5 = nb5 % 100; 
		std::cout << nb5 / 10 << std::endl;
		nb5 = nb5 % 10; 
		std::cout << nb5 << std::endl;
	}

	else
	{
		//Le programme retoure cette phrase si le nombre ne contient pas 5 chiffres.
		std::cout << nb5 << " n'est pas un nombre à 5 chiffres. ";
	}
	
}	

//Plan de test
	/*
		
		L'utilisateur entre comme valuer: 50365

		std::cout << nb5 / 10000 << std::endl; Le programme divise 50365 par 10000 et affiche 5

			nb5 = nb5 % 10000;  Le programme retire toutes les dizaines de milliers jusqu'à il en aille plus.  Il reste donc 0365

		std::cout << nb5 / 1000 << std::endl;  Le programme divise 0365 par 1000 et affiche 0.

			nb5 = nb5 % 1000;  Le programme retire tous les milliers jusqu'à il en aille plus. Il reste donc 365

		std::cout << nb5 / 100 << std::endl; Le programme divise par 365 par 100 et affiche 3

			nb5 = nb5 % 100;  Le programme retire toutes les centaines jusqu'à il en aille plus. Il reste donc 65

		std::cout << nb5 / 10 << std::endl;//Le programme divise 65 par 10 et affiche 6

			nb5 = nb5 % 10;  Le programme retire toutes les dizaines jusqu'à il en aille plus. La valeur de nb5 est donc 5.

		std::cout << nb5 << std::endl; Le programme affiche la valeur de nb5; donc 5.  



	
		Si l'utilisateur entre 19 le programme affiche : 19 n'est pas un nombre à 5 chiffres. 
	
	*/