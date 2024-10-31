#include <iostream>

// NIKOLAS BECIC
void Aufgaben() {
{
	
		
    using namespace std;
	int Aufgabe;
	cout << "Aufgabe 5.5: Zu welcher Aufgabe willst du springen? :";
	cin >> Aufgabe;

	if (Aufgabe == 1)
	{
		double Stunden;
		cout << "Zeitumrechnung" << endl;
		cout << "--------------" << endl << endl;
		cout << "Zeit in Stunden eingeben: ";
		cin >> Stunden;
		cout << endl;
		double Minuten = Stunden * 60;
		cout << Stunden << "Stunden sind " << Minuten << "Minuten." << endl;
		double Sekunden = Stunden * 3600;
		cout << Stunden << "Stunden sind " << Sekunden << "Sekunden" << endl;
	}

	if (Aufgabe == 2)
	{
		double Sekunden;
		double Minuten = 0;
		double Stunden = 0;
		cout << "Zeitumrechnung" << endl;
		cout << "--------------" << endl << endl;
		cout << "Zeit in Sekunden eingeben: ";
		cin >> Sekunden;
		double Sekunden2 = Sekunden;

		while (Sekunden2 >= 60)
		{
			if (Sekunden2 >= 60)
			{
				Minuten = Minuten + 1;
				Sekunden2 -= 60;
			}

			if (Minuten >= 60)
			{
				Stunden = Stunden + 1;
				Minuten = Minuten - 60;
			}
		}

		cout << Sekunden << " Sekunden sind " << Stunden << " Stunden, "<< Minuten << " Minuten und "<< Sekunden2 << " Sekunden.";
	}


	if (Aufgabe == 3)
	{
		double Celsius;
		cout << "Temperaturumrechnung" << endl;
		cout << "--------------" << endl << endl;
		cout << "Temperatur in °C eingeben: ";
		cin >> Celsius;
		double Kelvin = Celsius + 273.15;
		double Fahrenheit = Celsius * 1.8 + 32;
		cout << "Celsius :" << Celsius << "C" << endl;
		cout << "Kelvin :" << Kelvin << "K" << endl;
		cout << "Fahrenheit :" << Fahrenheit << "F" << endl;

	}

	
}
