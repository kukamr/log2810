#pragma once
#include <string>
#include <iostream>


using namespace std;



class Mot
{
public:
	// constructeurs
	Mot();
	~Mot();
	Mot(string mot);   // constructeurs par parametre   changer le nom valeur dans le constructeur

	// setteurs
	void setNombreFoisUtilis�(int nombre);  // on en a besoin ??
	void Mot::motUtilis�();
	void  setRecementUtilis�(bool valeur);
	void setMot(string mot);

	// methodes
	void AfficherlabelsMots();

	// getteurs
	int getNombreDefoisUtilis�();
	bool getRecementUtilis�();
	string getMot();

private:
	int nombreFoisUtilis�;     // le nombre de fois qu'un  mot a �t� utilis� , il me sert aussi de compteur 
	bool recementUtilis�;     // dit si le mot a �t� r�cement utilis�
	string mot;     // chaine du mot
};

