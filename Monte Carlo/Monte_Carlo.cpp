#include "Monte_Carlo.h"
#include "Tacka.h"
#include<math.h>
#include <iostream>

Monte_Carlo::Monte_Carlo()
{
	n_total = 0;
	n_circle = 0;
}

void Monte_Carlo::generisi_tacke(int n)
{

	Tacka tacka;

	for (int i = 0; i < n; i++)
	{
		tacka = tacka.generisiRandomTacku();
		n_in_circle(tacka);
	}

}


void Monte_Carlo::n_in_circle(Tacka tacka)
{

	if (sqrt((tacka.x * tacka.x + tacka.y * tacka.y)) < 1)
		n_circle++;
	n_total++;

}

double Monte_Carlo::pi()
{
	
	return 4 * (double)n_circle / n_total;

}

int Monte_Carlo::get_total_n()

{
	return n_total;
}
