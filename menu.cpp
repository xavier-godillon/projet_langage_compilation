#include <iostream>
#include <limits>
#include "menu.h"

using namespace std;

int menu_principal()
{
	system("clear");

	cout << "*******************************************************************" << endl;
	wcout << L"*** Mini-projet Langage et Compilation - Analyseur ***" << endl;
	wcout << L"***                SAKHO - GODILLON - HJIJI              ***" << endl;
	cout << "*******************************************************************" << endl << endl;

	int choix = 0;
	bool check = false;

	wcout << L"1 - Lire un des fichiers officiels de test" << endl;
	cout << "2 - Quitter" << endl << endl;

	// Saisie sécurisée
	do
	{
		cout << "Votre choix: ";
		check = cin >> choix;

		if (cin.fail())
		{
			cerr << "Erreur: SAISIE INVALIDE !" << endl;
			// Les 2 lignes suivantes permettent de vider le buffer: cela assure une nouvelle saisie sans avoir de boucle infinie !!!
 			cin.clear(); // Effacer les bits d'erreurs
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Supprimer la ligne erronée dans le buffer
		}
		else
		{
			if ((choix < 0) || (choix > 2))
			{
				cerr << "Erreur: CHOIX INVALIDE !" << endl;
			}
		}

	} while (((choix < 0) || (choix > 2)) || (check == false));

	return choix;
}

int menu_fichier()
{
	system("clear");

	cout << "*******************************************************************" << endl;
	wcout << L"*** Mini-projet Langage et Compilation - Analyseur ***" << endl;
	wcout << L"***                SAKHO - GODILLON - HJIJI              ***" << endl;
	cout << "*******************************************************************" << endl << endl;

	int choix = 0;
	bool check = false;

	cout << "1 - Lire le fichier test 1" << endl;
	cout << "2 - Lire le fichier test 2" << endl;
	cout << "3 - Lire le fichier test 3" << endl;
	cout << "4 - Lire le fichier test 4" << endl;

	// Saisie sécurisée
	do
	{
		cout << "Votre choix: ";
		check = cin >> choix;

		if (cin.fail())
		{
			cerr << "Erreur: SAISIE INVALIDE !" << endl;
			// Les 2 lignes suivantes permettent de vider le buffer: cela assure une nouvelle saisie sans avoir de boucle infinie !!!
 			cin.clear(); // Effacer les bits d'erreurs
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Supprimer la ligne erronée dans le buffer
		}
		else
		{
			if ((choix < 1) || (choix > 4))
			{
				cerr << "Erreur: CHOIX INVALIDE !" << endl;
			}
		}

	} while (((choix < 1) || (choix > 4)) || (check == false));

	return choix;
}
