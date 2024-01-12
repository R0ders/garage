#pragma once
#include "Vehicule.h"

class Voiture :
	public Vehicule
{
private:
	string types;
public:
	Voiture(string marques, int puisance, int kilometrages, string type);
	void lireType();
};