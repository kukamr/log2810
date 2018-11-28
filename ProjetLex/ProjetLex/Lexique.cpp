#include "Lexique.h"

Lexique::Lexique() 
{
}

Lexique::~Lexique() 
{
	listeCaractere.clear();   // on vide notre lexique
}


void Lexique::creerLexique(string nomFichier) 
{
	ifstream fichier(nomFichier);
	string ligne = "";

	if (fichier)
	{
		while (!(fichier.eof()))
		{
			getline(fichier, ligne);
			Caractere caractereTemp(ligne[0]); // on cree un caractere temporaire

			if (listeCaractere.size() == 0)
			{
				listeCaractere.push_back(caractereTemp);
				caractereTemp.AjouterMot(ligne);
			}
			else
			{
				for (int i = 0; i < listeCaractere.size(); i++)
				{
					if (ligne[0] == listeCaractere[i].getCaractereDedepart())
					{
						listeCaractere[i].AjouterMot(ligne);
						break;
					}
					else
					{
						if (i == listeCaractere.size() - 1 && ligne[0] != listeCaractere[i].getCaractereDedepart())
						{
							listeCaractere.push_back(caractereTemp);
							caractereTemp.AjouterMot(ligne);
						}

					}

				}
			}

		}
	}
	else
	{
		cout << "fichier introuvable " << endl;
	}
	
}

vector<Caractere> Lexique::getlisteCaractere()
{
	return listeCaractere;
}

void Lexique::afficherMot(vector<Mot> liste) 
{
	
	for (int i = 0; i < liste.size(); i++)
	{
		if (liste[i].getMot() != " ")
		{
			cout << liste[i].getMot() << endl;
		}
	}
}

void Lexique:: cherherMot(string mot)
{
	
	if (mot.size() == 1)
	{
		for (int i = 0; i < listeCaractere.size() ; i++)
		{
			if (mot[0] == listeCaractere[i].getCaractereDedepart())
			{
				for (int j = 0; j < listeCaractere[i].getTableauDemot().size(); j++)             /// cette partie a revoir 
				{
					cout << listeCaractere[i].getTableauDemot()[j].getMot();
				}
			}
		}
	}
	else
	{
		vector<Mot> TableauMotTemp;  // contient les mots en fonctions du caractere de départ 
		for (int i = 0; i < listeCaractere.size(); i++)
		{
			if (mot[0] == listeCaractere[i].getCaractereDedepart())
			{
				TableauMotTemp = listeCaractere[i].getTableauDemot();
				break;
			}
		}

		for (int k = 1; k < mot.size(); k++)
		{
			for (int i = 0; i < TableauMotTemp.size(); i++)
			{
				if (TableauMotTemp[i].getMot()[k] != mot[k])
				{
					TableauMotTemp[i].setMot(" ");
				}
			}
		}
		
		afficherMot(TableauMotTemp);
	}
}
