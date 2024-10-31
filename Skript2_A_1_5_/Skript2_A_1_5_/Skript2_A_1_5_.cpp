#include <iostream>
#include <stdlib.h>
//NIKOLAS BECIC
int main()
{
	std::cout << "geben sie eine Zahl ein die im Feld gesucht werden soll:\n" << std::endl;

	int feld[1000];
	int suchZahl;
	int indexPosition;
	bool gefunden;

	for (int i = 0; i < 1000; i++)
		feld[i] = 1 + rand() % 1000;
	
	std::cin >> suchZahl;

	for(int i= 0; i < 1000; i++)
		if (feld[i] == suchZahl)
		{
			indexPosition = i;
			std::cout << "Die Zahl ist an der Position " << indexPosition << " vorzufinden.\n" << std::endl << "Ueberpruefung" << std::endl << feld[indexPosition] << std::endl;
        }
		else
			gefunden = false;
}