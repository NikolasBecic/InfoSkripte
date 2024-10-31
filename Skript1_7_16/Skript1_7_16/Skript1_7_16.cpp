#include <iostream>
int jahr = 0;
int rechner(double sk, double k, double z)
{
	if (sk = k / 2)
	{
		k = k * (1 + z / 100);
		jahr++;
		std::cout << "nach dem " << jahr << ". jahr :\t" << k << std::endl;
		rechner(sk, k, z);
	}
	else
	{
		return jahr;
	}

}
int main ()
{
	std::cout << "Zinsrechner" << std::endl;

	double skapital, kapital, zins;

	std::cout << "geben sie ihren startkapital an : \t";
	std::cin >> skapital;
	
	std::cout << "geben sie den zinssatz in prozent an: \t";
	std::cin >> zins;

	kapital = skapital;

	int laufzeit = rechner(skapital, kapital, zins);

	std::cout << "Es hat " << laufzeit << " jahre gedauert bis sich das kapital verdoppelt hat";
}

