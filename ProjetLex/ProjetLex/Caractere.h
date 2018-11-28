#pragma once

#include "Mot.h"
#include <vector>



class Caractere
{
public:
	Caractere();
	~Caractere();

	// constructeur par d�faut
	Caractere(char caractere);   

	// m�thodes
	void AjouterMot(string ligne);  // fonction  qui ajoute un mot dans la liste de mot

	// getters 
	vector<Mot> getTableauDemot();   // retourne le tableau de mot d'un caractere
	char getCaractereDedepart();   // retourne le caractere de d�part
	

private:
	vector<Mot> tableauDeMot;  // tabelau contenant tous les mots en fonction d'un caractere de d�part
	char caratereDedepart; // caractere de depart
};

