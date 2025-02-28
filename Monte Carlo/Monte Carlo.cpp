#include <iostream>
#include<math.h>

#include "Tacka.h"
#include "Monte_Carlo.h"

static const double Pi = 3.14159265358979323846;

using namespace std;




int main()
{



	int opcija = 0;

	do {
		cout << "Izaberite jednu od opcija za unos: \n[1] - Broj slucajno generisanih vrijednosti [2] - Broj decimala \n\n";
		cin >> opcija;
	} while (opcija != 1 && opcija != 2);

	 

	switch (opcija)
	{
	case 1:
	{
		int n_total = 0;
		Monte_Carlo Monte_Carlo;


		cout << "\nUnesite ukupan broj tacaka: ";
		cin >> n_total;

		Monte_Carlo.generisi_tacke(n_total);

		cout << "\nPi = " << Monte_Carlo.pi();


	}
	break;

	case 2:
	{
		int broj_decimala;

		cout << "\nUnesite broj decimala koje treba da se poklope (maksimalno 20): ";
		cin >> broj_decimala;

		Monte_Carlo Monte_Carlo;

		int korak = 1000;
		int broj_uzoraka = 1000;

		Monte_Carlo.generisi_tacke(broj_uzoraka);

		while ((long long)(Monte_Carlo.pi() * pow(10, broj_decimala)) != (long long)(Pi * pow(10, broj_decimala))) {
			Monte_Carlo.generisi_tacke(broj_uzoraka);
			broj_uzoraka += korak;
		}

		cout << "\nPi (Monte Carlo) = " << Monte_Carlo.pi() << "\nPi (tacna vrijednost) = " << Pi << "\nBroj uzoraka: " << Monte_Carlo.get_total_n() << "\n";

	}

	break;
	}




}


