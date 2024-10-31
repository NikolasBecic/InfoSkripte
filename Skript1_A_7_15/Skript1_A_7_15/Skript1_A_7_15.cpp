#include <iostream>
//Nikolas Becic
int jahr = 0;

double rechner(double k, double z, int l)
{
	if(l >= 1)
	{
		k = k * (1 + z / 100);

		l--;
		jahr++;
		std::cout << "nach dem " << jahr << ". jahr :\t" << k << std::endl;
		rechner(k, z, l);
	}
	else
	{
		return k;
	}
	
}

int main()
{
	std::cout << "Zinsrechner" << std::endl;

	int laufzeit;
	double skapital, kapital, zins;

	std::cout << "\n geben sie  ihr startkapital an (00.00): \t";
	std::cin >> skapital;

	std::cout << "\n geben sie die zinsen die angewendet werden in prozent an: \t";
	std::cin >> zins;

	std::cout << "\n geben sie die Laufzeit in Jahren an: \t";
	std::cin >> laufzeit;

	kapital = skapital;

	kapital = rechner(kapital, zins, laufzeit);

	std::cout << "sie haben mit einem Kapital von " << skapital << " euro angefangen und haben nun " << kapital << " euro";
}