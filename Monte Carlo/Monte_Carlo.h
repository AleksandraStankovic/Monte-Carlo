#pragma once
#include"Tacka.h"
class Monte_Carlo
{
private:

	int n_total;
	int n_circle;

public:

	Monte_Carlo();

	double pi();
	void generisi_tacke(int);
	void n_in_circle(Tacka);
	int get_total_n();
};

