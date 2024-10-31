#include <iostream>
#include <iomanip>
//NIKOLAS BECIC
int main()
{
	using namespace std;
	int Aufgabe;
	cout << "6.3 Welchen Aufgabenteil wollen sie : ";
	cin >> Aufgabe;
	cout << endl;

	//Schleife damit dies immer aktiv ist
	while (Aufgabe > 2)
	{
		if (Aufgabe > 2)
		{
			// Failsafe fals zu grosse zahl angegeben wird
			cout << "Diese aufgabe existiert nicht!!" << endl << "6.3 Welchen Aufgabenteil wollen sie : ";
			Aufgabe = 0;
			cin >> Aufgabe;
			cout << endl;
		}
	}
		   
	
		if(Aufgabe == 1)
		{
			double Laenge, Breite;

			cout << "Flaecheninhalt eines Zimmers" << endl << "---------------------------" << endl;
			cout << "Laenge in m angeben : " << right;
			cin >> Laenge;
			cout << left << "Breite in m angeben : " << right;
			cin >> Breite;

			//Berechnugn des Flaecheninhalts
			double quadrat = ceil(Breite * Laenge);

			cout << endl << left << "Flaeche : " << right << setprecision(2) << fixed << quadrat << "m^2";


			return 0;
		}

		if (Aufgabe == 2)
		{
			double benzin, km;

			cout << "Durchschnittsverbrauch" << endl << "----------------------" << endl;

			cout << "Benzinverbrauch in Liter: ";
			cin >> benzin;
			

			cout << "Gefahrene Kilometer: ";
			cin >> km;
			
			// Berechnung des Verbrauchs pro 100 km
			double durchschnitt = benzin/(km/100);

			cout << "Durchschnittsverbrauch: " << right << setprecision(1) << fixed << durchschnitt << " Liter/100 km";
			

		}

}