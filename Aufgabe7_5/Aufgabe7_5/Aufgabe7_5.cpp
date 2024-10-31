#include <iostream>
#include <iomanip>
//NIKOLAS

int main()
{
	using namespace std;

	cout << "Pruefungsergebniss" << endl << "----------------" << endl;
	double Erreicht;
	int Gesamt;
	cout << "Geben Sie die Gesamtpunktzahl ein: ";
	cin >> Gesamt;
	cout << endl << "Geben Sie die erreichte Punktzahl ein: ";
	cin >> Erreicht;

	double mindestProzent = 39;


	// rechnung um punktzahl in erreichte prozent umzurechnen
	double prozentErreicht = (Erreicht / Gesamt) * 100;

	//ueberpruefung ob die erreichte punktzahl die mindest prozent erreicht
	if (prozentErreicht >= mindestProzent)
	{
		cout << endl << "Die Pruefung ist bestanden.";
	}
	else
	{
		cout << endl << "Die Pruefung wurde nicht bestanden";
	}
	return 0;
}