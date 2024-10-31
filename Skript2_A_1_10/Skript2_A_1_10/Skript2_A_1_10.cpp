#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
	int anzahl = 7;
	
	//std::cout << "Geben sie die anzahl der werte an: ";
	//std::cin >> anzahl;

	double mittelwert = 0.0;

	srand(NULL);

	std::vector<double> zahlen;

	zahlen.push_back(120.0);
	zahlen.push_back(70.0);
	zahlen.push_back(85.0);
	zahlen.push_back(110.0);
	zahlen.push_back(130.0);
	zahlen.push_back(95.0);
	zahlen.push_back(90.0);


	/*for (int i = 0; i < anzahl; i++)
	{
		zahlen.push_back(rand() % 300+ 1);
		mittelwert += zahlen[i];
		std::cout << zahlen[i] << std::endl;
	}*/
	


	for (double i : zahlen)
	{
		mittelwert += i;
	}

	int n = anzahl;
	mittelwert = mittelwert / n;

	double summe = 0;

	for (int i = 0; i < n; i++)
	{
		summe += pow(zahlen[i] - mittelwert, 2);
	}

	double Ssumme = summe/n;

	double standab = sqrt(Ssumme);

	std::cout << "die Standarbabweichung ist: " << standab << std::endl;
	std::cout << "der Mittelwert ist: " << mittelwert << std::endl;
}