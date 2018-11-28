#include "Caractere.h"


Caractere::Caractere() 
{
}

Caractere::Caractere(char caractere) : caratereDedepart(caractere) 
{
}

Caractere::~Caractere() 
{
	tableauDeMot.clear();
}


void Caractere::AjouterMot(string ligne)
{
	Mot motTemp(ligne); // on cree un mot temporaire 
	tableauDeMot.push_back(motTemp);
}

char Caractere::getCaractereDedepart() 
{
	return caratereDedepart;
}

vector<Mot> Caractere::getTableauDemot() 
{
	return tableauDeMot;
}