#include "Lexique.h"

Lexique::Lexique() 
{
	compteur = 0;
}

Lexique::~Lexique() 
{
	listeCaractere.clear();   // on vide notre lexique
	resultatRecherche.clear();
	compteur = 0;
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
				for (unsigned i = 0; i < listeCaractere.size(); i++)
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

vector<Mot> Lexique::getResultatRecherhce()
{
	return resultatRecherche;
}

vector<Caractere> Lexique::getlisteCaractere()
{
	return listeCaractere;
}

void Lexique::afficherMot(vector<Mot> liste) 
{
	
	for (unsigned i = 0; i < liste.size(); i++)
	{
		if (liste[i].getMot() != " ")
		{
			cout << liste[i].getMot() << endl;
		}
	}
}

void Lexique::cherherMot(char caractere)
{

	if (resultatRecherche.size() == 0)
	{
		for (unsigned i = 0; i < listeCaractere.size(); i++)
		{
			if (caractere == listeCaractere[i].getCaractereDedepart())
			{
				resultatRecherche = listeCaractere[i].getTableauDemot();
				break;                        // on prend le tableau de mot correspondant 
			}
		}
		afficherMot(resultatRecherche);
		compteur++;
	}
	else
	{

		for (unsigned i = 0; i < resultatRecherche.size(); i++)
		{
			if (compteur < resultatRecherche[i].getMot().size()) {
				if (caractere != resultatRecherche[i].getMot()[compteur])
				{
					resultatRecherche[i].setMot(" ");
				}
			}
			else {
				resultatRecherche[i].setMot(" ");
			}
		}
		afficherMot(resultatRecherche);
		compteur++;
	}
	if (caractere == '\r')
	{
		this->resultatRecherche.clear();
		compteur = 0;
	}
}