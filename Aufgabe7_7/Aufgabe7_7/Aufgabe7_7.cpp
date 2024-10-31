#include <iostream>
#include <locale>
//Nikolas
int main()
{
	using namespace std;
	double punktzahl, erreicht;

	cout << "Klassenarbeit" << endl << "-------------" << endl;

	//Initialisierung der variabeln
	cout << "Geben Sie die Gesamtpunktzahl ein: ";
	cin >> punktzahl;
	cout << endl << "Geben Sie die erreichte Punktzahl ein: ";
	cin >> erreicht;


	//Speichern der Noten und der Dazugehoerigen Prozentstände in Arrays
	double notenProzent[] = { 92.0, 81.0, 67.0, 50.0, 30.0 , 0.0};
	string noten[] = { "Sehr Gut", "Gut", "Befriedigend", "Ausreichend", "Mangelhaft", "Ungenuegend"};

	double prozent = (100 / punktzahl) * erreicht;


	//for-Schleife die solange geht bis i > notenProzent
	for (int i = 0; i < 6; i++)
	{
		//ueberpruefung ob der Index mit dem double prozent uebereinstimmt
		if (notenProzent[i] <= prozent)
		{
			cout << "Der Schueler hat " << prozent << "%" << " und die Note " << '"' << noten[i] << '"' << " erreicht.";
			break;
		}
		
	}
}