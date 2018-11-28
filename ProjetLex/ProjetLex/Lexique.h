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
	void cherherMot(string mot); // méthode qui cherhe si le mot entré au clavier est dans le lexique
	void afficherMot(vector<Mot> liste);
	// getter
	vector<Caractere> getlisteCaractere();  // retourne la liste de caractere


private:
	vector<Caractere> listeCaractere;  // liste contenant tout les caracteres
};

