#pragma once

#include <fstream>
#include "Caractere.h"


using namespace std;

class Lexique
{
public:
	Lexique();
	~Lexique();
	
	
	// methodes
	
	void creerLexique(string nomFichier);   // methode qui cree un lexique a partir d'un fichier 
	void cherherMot(char caractere); // méthode qui cherhe si le mot entré au clavier est dans le lexique
	void afficherMot(vector<Mot> liste);

	// getters
	vector<Caractere> getlisteCaractere();  // retourne la liste de caractere
	vector<Mot>  getResultatRecherhce();

private:
	vector<Caractere> listeCaractere;  // liste contenant tout les caracteres
	 int compteur;   // compteur
	vector<Mot> resultatRecherche;   // tableau contenant le resultat de la recherche
};

