#include <iostream>
#include <string>
#include <cctype>

//NIKOLAS BECIC

bool kartenGueltigkeit(std::string kartennummer)
{
	int nummerLaenge = 0;
	int ziffern[16];

	for (int i = 0; i < kartennummer.length(); i++)
		if (isdigit(kartennummer[i]))
		{
			ziffern[nummerLaenge] = kartennummer[i] - '0';
			nummerLaenge++;
		}

	if (nummerLaenge != 16)
		return false;

	int ungerade = 0;
	int gerade = 0;
	int pruefziffer = ziffern[15];
	
	for (int i = 0; i < nummerLaenge-1; i++)
	{
		if (i % 2 == 0)
		{
			int dopplung = ziffern[i] * 2;
			if (dopplung >= 10)
			{
				int einser = dopplung % 10;
				int zehner = dopplung / 10;
				ungerade += einser + zehner;
			}
			else 
			{
				ungerade += dopplung;
			}
		}
		else
		{
			gerade += ziffern[i];
		}
	}

	int differenzZiffer= gerade +ungerade;

	while (differenzZiffer % 10 != 0)
		differenzZiffer += 1;

	return(differenzZiffer - (gerade + ungerade) == pruefziffer);
}


bool IBANgueltigkeit(std::string Iban)
{
	std::string IBANziffern;
	
	for (int i = 0; i<Iban.length(); i++) 
	{
		if(!std::isspace(Iban[i]) && (std::isalpha(Iban[i]) || std::isdigit(Iban[i])))
		{
			IBANziffern += Iban[i];
		}
	}

	std::cout << IBANziffern.length() << std::endl;

	if (IBANziffern.length() != 22)
		return false;


	int pruefzifferStelle1 = IBANziffern[2];
	int pruefzifferStelle2 = IBANziffern[3];

	int pruefzifferIBAN = pruefzifferStelle1 + pruefzifferStelle2;

	for (int i = 0; i < 4; ++i) 
	{
		if (std::isalpha(IBANziffern[i])) 
		{
			IBANziffern[i] = (std::toupper(IBANziffern[i]) - 'A') + '10';
		}
		else if(std::isdigit(IBANziffern[i]))
		{
			IBANziffern[i] = '0';
		}
	}

	std::string tempend;

	for (int i = 0; i < 4; i++)
	{
		tempend += IBANziffern[i];
		IBANziffern.erase(i);
		IBANziffern += tempend;
	}

		
	

	std::cout << pruefzifferIBAN << std::endl;

	std::cout << "konvertierte IBAN: " << IBANziffern << std::endl;

	long long int IbanziffernInt = std::stoll(IBANziffern);

	int rest = IbanziffernInt % 97;

	std::cout << rest;

	return (98 - rest == pruefzifferIBAN);
}

int main()
{

	std::string kreditkarte;
	std::string Iban;

	int pruefung;

	std::cout << "Welche Ziffern wollen sie ueberpruefen?: \n 1.Kreditkartennummer\n 2.IBAN " << std::endl;

	std::cin >> pruefung;

	if (pruefung == 1)
	{

		std::cout << "Geben sie eine 16-Stellige Kreditkartennummer zu ueberpruefung an" << std::endl;

		std::cin >> kreditkarte;

		if (kartenGueltigkeit(kreditkarte))
		{
			std::cout << "Die Karte ist gueltig :) !!!" << std::endl;
		}
		else
		{
			std::cout << "Die Karte ist ungueltig :( !!!" << std::endl;
		}
	}
	else if(pruefung==2)
	{

		std::cout << "Geben sie eine 22-Stellige IBAN zur ueberpruefung an" << std::endl;

		std::cin >> Iban;

		if (IBANgueltigkeit(Iban))
		{
			std::cout << "Die IBAN ist gueltig :) !!!" << std::endl;
		}
		else
		{
			std::cout << "Die IBAN ist ungueltig :( !!!" << std::endl;
		}
	
	}

	
}