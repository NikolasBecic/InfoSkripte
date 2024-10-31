#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
//NIKOLAS
int main()
{
	cout << "Bestimmung von Normalgewicht, BMI und maximaler Herzfrequenz" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "\nBitte geben Sie Ihre persoenlichen Daten ein." << endl;
	double groesse;
	double gewicht;
	int alter;
	char geschlecht;
	

	cout << setw(39) << left << "Koerpergroesse in cm: ";
	cin >> groesse;
	cout << setw(40) << left << "\nGewicht in kg: ";
	cin >> gewicht;
	cout << setw(40) << left << "\nAlter in Jahren: ";
	cin >> alter;
	cout << setw(40) << left << "\nGeschlecht (m/w): ";
	cin >> geschlecht;

	const double Bmiwert = (gewicht / (groesse*groesse))*10000;

	string bmiErgebnis;
	
	double BMIwertTabelle[] = { 16.0, 17.0, 18.5, 25.0, 30.0, 40.0 };
	string BMIKategorien[] = { "Starkes Untergewicht", "Maeßiges Untergewicht", "Normalgewicht", "Leichtes Untergewicht", "Starkes Uebergewicht", "Extremes Uebergewicht" };

	for (int i = 0; i < sizeof(BMIwertTabelle)/sizeof(double); i++)
	{
		if (Bmiwert > BMIwertTabelle[i])
		{
			bmiErgebnis = BMIKategorien[i];
		}
	}

	if (alter < 65)
	{
		switch (geschlecht)
		{
		case 'm':

			cout << "\nIhre Biometrischen Werte:\n";
			cout << setw(40) << left << "Normalgewicht <Broca-Index>: " << setprecision(1) << fixed << groesse - 100 << " kg\n";
			cout << setw(40) << left  << "Idealgewicht <Broca-Index>: " << setprecision(1) << fixed << (groesse - 100) * 0.9 << " kg\n";
			cout << setw(40) << left << "Body-Mass-Index <BMI>: " << setprecision(1) << fixed << Bmiwert << "\n";
			cout << bmiErgebnis;
			
			break;

		case 'w':
			cout << "\nIhre Biometrischen Werte:\n";
			cout << setw(40) << left << "Normalgewicht <Broca-Index>: " << groesse - 100 << " kg";
			cout << setw(40) << left << "Idealgewicht <Broca-Index>: " << (groesse - 100) * 0.85 << " kg";
			cout << setw(40) << left << "Body-Mass-Index <BMI>: " << setprecision(1) << fixed << Bmiwert;
			cout << bmiErgebnis;

		default:
			cout << "\nBitte geben sie einer der zwei Geschlechte (m/w) an!";
			break;
		}
	}
	else
	{
		switch (geschlecht)
		{
		case 'm':

			cout << "\nIhre Biometrischen Werte:\n";
			cout << setw(40) << left << "Normalgewicht <Broca-Index>: " << setprecision(1) << fixed << groesse - 100 << " kg";
			cout << setw(40) << left << "Idealgewicht <Broca-Index>: " << setprecision(1) << fixed << (groesse - 100) * 0.9 + 2.5 << " kg";
			cout << setw(40) << left << "Body-Mass-Index <BMI>: " << setprecision(1) << fixed << Bmiwert;
			cout << bmiErgebnis;
		
		case 'w':
			cout << "\nIhre Biometrischen Werte:\n";
			cout << setw(40) << left << "Normalgewicht <Broca-Index>: "  << setprecision(1) << groesse - 100 << " kg";
			cout << setw(40) << left << "Idealgewicht <Broca-Index>: " << setprecision(1) << (groesse - 100) * 0.85 + 2.5 << " kg";
			cout << setw(40) << left << "Body-Mass-Index <BMI>: " << setprecision(1) << fixed << Bmiwert;
			cout << bmiErgebnis;
		

		default:
			cout << "\nBitte geben sie einer der zwei Geschlechte (m/w) an!";
			break;
		}
	}

	cout << "\n\nIhre Trainingswerte:\n\n";

	double wZ1;
	double wZ2;
	double fZ1;
	double fZ2;
	double pZ1;
	double pZ2;

	if (geschlecht == 'm')
	{
		double frequenzMaxM = 214 - 0.5 * alter - 0.11 * gewicht;
		cout << setw(40) << left << "Maximale Herzfrequenz: " << right << setprecision(0) << fixed << round(frequenzMaxM) << " Schlaege pro Minute\n";
		
		wZ1 = frequenzMaxM * 0.55;
		wZ2 = frequenzMaxM * 0.7;
		
		cout << setw(40) << left << "Wellness-Zone (Fettverbrennungszone): " << right << setprecision(0) << fixed << round(wZ1) << "..." << round(wZ2) << " Schlaege pro Minute\n";

		fZ1 = frequenzMaxM * 0.7;
		fZ2 = frequenzMaxM * 0.8;
		
		pZ1 = frequenzMaxM * 0.8;
		pZ2 = frequenzMaxM;

		cout << setw(40) << left << "Power-Zone (trainierte Sportler): " << right << setprecision(0) << round(pZ1) << "..." << round(pZ2) << " Schlaege pro Minute\n";

		cout << setw(40) << left << "Fitnesszone (Fortgeschrittene): " << right << setprecision(0) << fixed << round(fZ1) << "..." << round(fZ2) << " Schlaege pro Minute\n";
	}
	
	if (geschlecht == 'w')
	{
		double frequenzMaxF = 210 - 0.5 * alter - 0.11 * gewicht;
		cout << setw(80) << left << "Maximale Herzfrequenz: " << setprecision(0) << fixed << right  << round(frequenzMaxF) << " Schlaege pro Minute";

		wZ1 = frequenzMaxF * 0.55;
		wZ2 = frequenzMaxF * 0.7;


		cout << setw(80) << left << "Wellness-Zone (Fettverbrennungszone): " << setprecision(0) << fixed << right << round(wZ1) << "..." << round(wZ2) << " Schlaege pro Minute\n";
		
		fZ1 = frequenzMaxF * 0.7;
		fZ2 = frequenzMaxF * 0.8;

		cout << setw(40) << left << "Fitnesszone (Fortgeschrittene): " << right << setprecision(0) << fixed << round(fZ1) << "..." << round(fZ2) << " Schlaege pro Minute\n";

		pZ1 = frequenzMaxF * 0.8;
		pZ2 = frequenzMaxF;

		cout << setw(40) << left << "Power-Zone (trainierte Sportler): " << right << setprecision(0) << round(pZ1) << "..." << round(pZ2) << " Schlaege pro Minute\n";
	}
		
}