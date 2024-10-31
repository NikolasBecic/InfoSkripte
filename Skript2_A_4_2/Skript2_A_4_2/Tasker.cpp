#include <iostream>
#include <iomanip>
#include <math.h>

void Vergleich(int x1, int x2)
{
	if (x1 == x2)
	{
		std::cout << "Beide Zahlen sind gleich gross!" << std::endl;
	}
	if (x1 < x2)
	{
		std::cout << "Die Zahl " << x2 << " ist groesser als " << x1 << "!" << std::endl;
	}
	if (x1 > x2)
	{
		std::cout << "Die Zahl " << x1 << " ist groesser als " << x2 << "!" << std::endl;
	}
}


void Zufall(int x1, int x2)
{
	srand(time(NULL));

	std::cout << rand() % (x1-x2+1) + x2 << std::endl;
}

void Brutto(double x1, double x2)
{
	x2 = x1 * 1.19;
	
	std::cout << "Bruttowarenwert : " << std::setprecision(2) << std::fixed <<x2;
}

void Flaecheninhalt(int x1)
{
	std::cout << "Der Flaecheninhalt betraegt: " << (atan(1)*4)*pow(x1, 2);
}