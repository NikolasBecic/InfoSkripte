#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;

	int Zahl1;
	int Zahl2;

	cout << left << "Zahlenvergleich"<< endl;
	cout << left << "---------------" << endl << endl;
	cout << "Geben Sie zwei Zahlen ein. " << endl;
	cout << "Zahl 1: ";
	cin >> Zahl1;
	cout << endl << "Zahl 2: ";
	cin >> Zahl2;
	cout << endl << endl;
	


	if (Zahl1 < Zahl2)
	{
		cout << Zahl2 << " ist die groessere Zahl.";
	}
	if (Zahl1 > Zahl2)
	{
		cout << Zahl1 << " ist die groesse Zahl.";
	}
	if (Zahl1 == Zahl2)
	{
		cout << "Beide Zahlen sind gleich gross";
	}

}