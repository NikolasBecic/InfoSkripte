#include <iostream>


int main()
{
	std::cout << "Geben sie ihre 16-stellige Kreditkarten nummer auf ueberpruefung ein. Immer eine Zahl zur zeit bitte!" << std::endl;

	int *kreditnummer = new int[17];

    for(int i= 1; i< 16; i++)
	{
		std::cin >> kreditnummer[i];

		if (i % 2 == 0)
		{

		}
	}
		



	int pruefziffer = kreditnummer[17];









}