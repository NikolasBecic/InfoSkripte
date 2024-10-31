#include<iostream>
#include <ctime>
#include <vector>
int main()
{

	srand(time(NULL));

	std::cout << "Aufgabe 2.1" << std::endl;
	std::cout << "-----------" << std::endl;

	int anzahl;
	std::cout << "wie viele zahlen sollen in diesem Dynmaischem Feld sein :";

	double mittelwert = 0;
	
    std::cin >> anzahl;

	std::vector<int> zahlen;

	for (int i = 0; i < anzahl; i++)
	{
		zahlen.push_back(1 + rand() % 100);
		std::cout << std::endl << i << ". " << zahlen[i];
		mittelwert += zahlen[i];
	}
		
	int index_kleinste = 0;
	int index_groesste = 0;

	for (int i = 1; i < anzahl; i++)
	{
		if (zahlen[i] < zahlen[index_kleinste])
			index_kleinste = i;

		if (zahlen[i] > zahlen[index_groesste])
			index_groesste = i;
	}
	std::cout << "\nDie kleinste Zahl im Feld ist : " << zahlen[index_kleinste] << " an der Stelle " << index_kleinste << std::endl;

	std::cout << "Die groesste Zahl im Feld ist : " << zahlen[index_groesste] << " an der Stelle " << index_groesste << std::endl;

	std::cout << "Der Mittelwert betraegt : " << mittelwert/anzahl << std::endl;

}