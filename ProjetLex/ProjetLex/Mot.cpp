#include "Mot.h"

Mot::Mot():nombreFoisUtilisé(0), recementUtilisé(false)
{
	mot = " ";
}

Mot::Mot(string mot):nombreFoisUtilisé(0), recementUtilisé(false)
{
	this->mot = mot;
}

Mot::~Mot() 
{
	mot.clear();   // on supprime la chaine
}

void Mot::setNombreFoisUtilisé(int nombre) 
{
	nombreFoisUtilisé = nombre;
}

void Mot::motUtilisé()
{
	++nombreFoisUtilisé;
}

void Mot::setRecementUtilisé(bool valeur) 
{
	recementUtilisé = valeur;
}

void Mot::AfficherlabelsMots() 
{
	cout << "Le nombre de fois utilisée est " << this->nombreFoisUtilisé << endl;

	if (this->recementUtilisé == false) 
	{
		cout << "Ce mot n'a pas été récement utilisé" << endl;
	}
	else
	{
		cout << "Ce mot a été récement utilisé" << endl;
	}
}

void Mot::setMot(string mot)
{
	this->mot = mot;
}

int Mot::getNombreDefoisUtilisé() 
{
	return  nombreFoisUtilisé;
}

bool Mot::getRecementUtilisé() 
{
	return recementUtilisé;
}

string Mot::getMot()
{
	return mot;
}