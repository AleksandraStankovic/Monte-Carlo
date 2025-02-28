#include "Tacka.h"
#include<iostream>
#include<random>

Tacka::Tacka(double x, double y) : x(x), y(y) {};

Tacka Tacka::generisiRandomTacku()
{
	double x = 0.0;
	double y = 0.0;

	std::random_device rd;
	std::mt19937 gen(rd()); 

	std::uniform_real_distribution<double> dis(0.0, 1.0);


	double random_x = dis(gen);
	double random_y = dis(gen);


	Tacka tacka(random_x, random_y);
	return tacka;

}