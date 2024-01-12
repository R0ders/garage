#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicule
{
protected:
	string marque;
	float puissance, kilometrage;
public:
	Vehicule(string marque, int puissance, int kilometrage);
	void parcourir(int distance);
	void lireCaracteristique();
};