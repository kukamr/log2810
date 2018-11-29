#include "Lexique.h"
#include <conio.h>

#include <iostream>
using namespace std;

int main()
{
	Lexique lexique;
	string nomFichier;
	char car = ' ';
	int a = 0; // test
	char selection;
	bool lexiqueCreer = false;
	string recherche = "Entrez le mot recherche: ";
	string motlu = " ";
	do
	{
		cout << "  Bienvenue sur l'interface de recherche\n";
		cout << "  ====================================\n";
		cout << "  1.  Creer lexique\n";
		cout << "  2.  Recherche\n";
		cout << "  3.  Afficher label\n";
		cout << "  4.  Mettre a jour le lexique\n";
		cout << "\n";
		cout << "  5.  Quitter\n";
		cout << "  ====================================\n";
		cout << "  Faire votre choix: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			cout << "Entrez le nom du fichier:\n";
			cin.ignore();
			getline(cin, nomFichier);
			lexique.creerLexique(nomFichier);
			cout << "Le lexique a ete creer avec succes\n";
			lexiqueCreer = true;
			break;

		case '2':
			cout << "Entrez le mot recherche: ";
			car = _getch();
			while (car != '\r')
			{
				motlu += car;
				cout << recherche + motlu << endl;
				cout << endl;
				lexique.cherherMot(car);
				cout << "--------------------------" << endl;
				_getch();
				car =_getch();
			}
			
			cout << "résultat de recherche: " + motlu << endl;
			break;

		case '3':

			break;

		case '4':
			if (lexiqueCreer) {
				cout << "Entrez le nom du nouveau fichier:\n";
				cin.ignore();
				getline(cin, nomFichier);
				lexique.creerLexique(nomFichier);
				cout << "La mise a jour a ete fait avec succes" << endl;
			}
			else
				cout << "Le lexique doit etre cree avant!" << endl;
			break;

		case '5':
			cout << "Au revoir et Joyeux Noel!\n";
			selection = 0;
			break;

		default: cout << selection << " N'est pas une option valide.\n";

			cout << endl;
		}

	} while (selection != 0);

	return 0;
}
