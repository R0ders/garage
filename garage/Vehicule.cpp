#include "Vehicule.h"

Vehicule::Vehicule(string marques, int puissances, int kilometrages)
{
	marque = marques;
	puissance = puissances;
	kilometrage = kilometrages;
}

void Vehicule::parcourir(int distance)
{
	kilometrage += distance;
}

void Vehicule::lireCaracteristique()
{
	cout << "marque du vehicule : " << marque << endl;
	cout << "puissance du vehicule : " << puissance << "km/h" << endl;
	cout << "le vehicule a parcouru " << kilometrage << "km" << endl;
}