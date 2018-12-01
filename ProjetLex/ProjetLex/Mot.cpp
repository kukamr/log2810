#include "Mot.h"

Mot::Mot():nombreFoisUtilis�(0), recementUtilis�(false)
{
	mot = " ";
}

Mot::Mot(string mot):nombreFoisUtilis�(0), recementUtilis�(false)
{
	this->mot = mot;
}

Mot::~Mot() 
{
	mot.clear();   // on supprime la chaine
}

void Mot::setNombreFoisUtilis�(int nombre) 
{
	nombreFoisUtilis� = nombre;
}

void Mot::motUtilis�()
{
	++nombreFoisUtilis�;
}

void Mot::setRecementUtilis�(bool valeur) 
{
	recementUtilis� = valeur;
}

void Mot::AfficherlabelsMots() 
{
	cout << "Le nombre de fois utilis�e est " << this->nombreFoisUtilis� << endl;

	if (this->recementUtilis� == false) 
	{
		cout << "Ce mot n'a pas �t� r�cement utilis�" << endl;
	}
	else
	{
		cout << "Ce mot a �t� r�cement utilis�" << endl;
	}
}

void Mot::setMot(string mot)
{
	this->mot = mot;
}

int Mot::getNombreDefoisUtilis�() 
{
	return  nombreFoisUtilis�;
}

bool Mot::getRecementUtilis�() 
{
	return recementUtilis�;
}

string Mot::getMot()
{
	return mot;
}