#include <iostream>
#include <vector>

//NIKOLAS BECIC

int dualHexa()
{
	return 1;
}
int dualDeza()
{
	int dual;
	std::vector<int> deza;

	std::cout << "\nGeben sie eine Duale Zahl ein: ";
	std::cin >> dual;

	int index = deza.size();
	int ergebnis;
	int i = 0;

	while (index != 0)
	{
		
		index--;
	}
	
	return 1;
}
int hexaDual()
{
	return 1;
}
int hexaDez()
{
	return 1;
}
int dezaDual()
{
	int dez;
	std::vector<int> dual;
	int index = 0;

	std::cout << "\nGeben sie eine Dezimale Zahl ein: ";
	std::cin >> dez;


	while (dez != 0)
	{
		dual.push_back(dez % 2);
		dez /= 2;
	}

	for (int i = dual.size() - 1; i >= 0; --i)
	{
		std::cout << dual[i];
	}
	return 1;
}
int dezaHexa()
{
	int dez;
	std::vector<int> hexa;
	int index = 0;
	char hexa10[] = { 'A', 'B', 'C', 'D', 'E', 'F', };

	std::cout << "\nGeben sie eine Dezimale Zahl ein: ";
	std::cin >> dez;


	while (dez > 0)
	{
		hexa.push_back(dez % 16);
		dez /= 16;
	}

	for (int i = hexa.size() - 1; i >= 0; --i)
	{
		if (hexa[i] <= 10)
		{
			std::cout << hexa[i];
		}
		else
		{
			std::cout << hexa10[hexa[i] - 10];
		}
	}
	return 1;
}
int main()
{
	int umwandlung;
	std::cout << "Aufgabe 1.7" << std::endl;
	std::cout << "-----------" << std::endl;

	std::cout << "Welche umwandlung wollen sie durchführen?" << std::endl;
	std::cout << std::endl << "1.Dezimal zu Hexadezimal" << std::endl;
	std::cout << "2.Dezimal zu Dual" << std::endl;
	std::cout << "3.Hexadezimal zu Dezimal" << std::endl;
	std::cout << "4.Hexadezimal zu Dual" << std::endl;
	std::cout << "5.Dual zu Dezimal" << std::endl;
	std::cout << "6.Dual zu Hexadezimal" << std::endl;


	std::cin >> umwandlung;

	switch (umwandlung)
	{
	case 1:
		dezaHexa();
		std::cout << std::endl << std::endl;
		main();
	case 2:
		dezaDual();
		std::cout << std::endl << std::endl;
		main();
	case 3:
		hexaDez();
		std::cout << std::endl << std::endl;
		main();
	case 4:
		hexaDual();
		std::cout << std::endl << std::endl;
		main();
	case 5:
		dualDeza();
		std::cout << std::endl << std::endl;
		main();
	case 6:
		dualHexa();
		std::cout << std::endl << std::endl;
		main();
	}

}