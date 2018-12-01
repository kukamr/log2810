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
	void setNombreFoisUtilisé(int nombre);  // on en a besoin ??
	void Mot::motUtilisé();
	void  setRecementUtilisé(bool valeur);
	void setMot(string mot);

	// methodes
	void AfficherlabelsMots();

	// getteurs
	int getNombreDefoisUtilisé();
	bool getRecementUtilisé();
	string getMot();

private:
	int nombreFoisUtilisé;     // le nombre de fois qu'un  mot a été utilisé , il me sert aussi de compteur 
	bool recementUtilisé;     // dit si le mot a été récement utilisé
	string mot;     // chaine du mot
};

