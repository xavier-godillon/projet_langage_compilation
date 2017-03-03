#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include "menu.h"

using namespace std;

int main(void)
{
  system("clear");

  int choix = 0, fichier_choisi = 0, option = 0;
  bool check = false;
  string nom_fichier, nom_fichier_resultat; //resultat des traces d'éxecution

  cout << "Hello" << '\n';

  do
	{
		choix = menu_principal();
		check = false;

		switch (choix)
		{
			/* Cas particulier du switch en C++ pour une déclaration de variable entre case et break:
			   Il faut ouvrir un bloc d'instructions avec les accolades après les 2 points du case pour pouvoir déclarer une variable
			   ou instancier un objet. Sinon, le compilateur l'interdit avec une erreur du type: "cannot jump from switch statement to this case label" */
			case 1:
			{
				fichier_choisi = menu_fichier();

				switch (fichier_choisi)
				{
					case 1:
					nom_fichier = "test1.txt";
					nom_fichier_resultat = "test1-resultat.txt";
					break;

					case 2:
					nom_fichier = "test2.txt";
					nom_fichier_resultat = "test2-resultat.txt";
					break;

					case 3:
					nom_fichier = "test3.txt";
					nom_fichier_resultat = "test3-resultat.txt";
					break;

					case 4:
					nom_fichier = "test4.txt";
					nom_fichier_resultat = "test4-resultat.txt";
					break;

					default:
					break;
				}
      }
    }
  }while (choix != 0);

				/* Si ce fichier n'existe pas, il sera crée automatiquement
				   Pour qu'on évite d'écraser le contenu lors de l'écriture, chaque méthode qui initialise le graphe
				   va prendre une référence du flux d'écriture (ofstream) pour continuer sans écraser */
				//ofstream fichier_resultat(nom_fichier_resultat.c_str(), ios::trunc); // Début des traces d'exécution

				system("clear");

        return 0;
}
