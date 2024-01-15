#include <iostream>
#include "Vehicule.h"
#include "Voiture.h"
using namespace std;

void AfficheMenu()
{
	cout << "1) Les informations du vehicule" << endl;
	cout << "2) Le type du vehicule" << endl;
	cout << "3) Quitter" << endl;
}

int main()
{
	string Vmarque, Vtype;
	int choix, Vpuissance, Vdist;

	do {
		AfficheMenu();

		cout << "Quel information souhaitez vous ?" << endl;
		cin >> choix;

		switch(choix)
			{
				case 1:
					cout << "Information du vehicule" << endl;
					cout << "marque du vehicule : ";
					cin << Vmarque;
					cout << "puissance du vehicule : ";
					cin << Vpuissance;
					cout << "Distance parcouru par le vehicule : ";
					cin << Vdist;

					Vehicule(Vmarque, Vpuissance, Vdist);
					Vehicule(lireCaracteristique());

				break();

				case 2:
					cout << "Le type du vehicule" << endl;
					cout << "Type du vehicule : ";
					cin >> Vtype;

					Voiture(Vmarque, Vpuissance, Vdist, Vtype);
					Voiture(lireType());

				break();

				case 3:
					cout << "Au revoir et merci pour votre connexion" << endl;
				
				break();

				default:
					cout << "La formation demander est inaccessible" << endl;

				break();
	} while(choix =! 3)
			{
				return 0;
			}
}
