#include "Voiture.h"

Voiture::Voiture(string marques, int puissances, int kilometrages, string type):Vehicule(marques, puissances, kilometrages)
{
	if (type == "berline" && type == "suv" && type == "4x4" && type == "break") 
	{
		types = type;
	}
	else
	{
		cout << "Le type de voiture demander n'est pas disponible" << endl;
	}
}

void Voiture::lireType()
{
	cout << "Le type de voiture : " << types << endl;
}