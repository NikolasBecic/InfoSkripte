#include <iostream>

using namespace std;

//NIKOLAS BECIC

int main()
{
	int Aufgabe;
	cout << "Welche Aufgabe Wollen Sie Durchlaufen?";
	cin >> Aufgabe;

	if (Aufgabe == 1)
	{
		double Radius;
		double Umfang;
		double Flaeche;

		cout << "Geben sie den Radius des Kreises ein : ";
		cin >> Radius;

		Umfang = 3, 1415 * Radius * 2;
		Flaeche = 3, 1415 * Radius * Radius;
		cout << "Der Umfang des Kreises beträgt : " << Umfang << endl;
		cout << "Die Fläche des Kreises liegt bei : " << Flaeche << endl;
	}

	if (Aufgabe == 2)
	{
		double nettobetrag;
		double bruttobetrag;
		int MwSt;

		cout << "Geben Sie den Nettobetrag an: ";
		cin >> nettobetrag;

		bruttobetrag = nettobetrag * 0.81;

		cout << endl << "Nettobetrag: " << nettobetrag << endl;
		cout << "Bruttobetrag: " << bruttobetrag << endl;
		cout << "Mehrwertsteuer: " << MwSt << " Prozent" << endl;
	}

	if (Aufgabe == 3)
	{
		int Stromstaerke;
		int Spannung;
		int Ohm;

		cout << "Geben sie die Stromstaerke in Ampere an: ";
		cin >> Stromstaerke;
		cout << "Geben sie die Spannung in Volt an : " << endl;
		cin >> Spannung;
		Ohm = Spannung * Stromstaerke;
		cout << "Der Ohmische widerstand betraegt : " << Ohm;
	}
}