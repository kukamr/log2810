#pragma once

#include "Mot.h"
#include <vector>



class Caractere
{
public:
	Caractere();
	~Caractere();

	// constructeur par défaut
	Caractere(char caractere);   

	// méthodes
	void AjouterMot(string ligne);  // fonction  qui ajoute un mot dans la liste de mot

	// getters 
	vector<Mot> getTableauDemot();   // retourne le tableau de mot d'un caractere
	char getCaractereDedepart();   // retourne le caractere de départ
	

private:
	vector<Mot> tableauDeMot;  // tabelau contenant tous les mots en fonction d'un caractere de départ
	char caratereDedepart; // caractere de depart
};

