#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	cout << left << "Schaltjahr" << endl;
	cout << left << "----------" << endl;

	int jahr;

	cout << "Geben Sie das Jahr ein : ";
	cin >> jahr;

	cout << endl << endl;

	if (jahr % 4 == 0 && jahr % 100 != 0 || jahr % 400 == 0)
	{
		cout << "Das Jahr" << jahr << " ist ein Schaltjahr"<< endl;
	}
	else
	{
		cout << "Das Jahr " << jahr << " ist kein Schaltjahr" << endl;
	}
}