#include<iostream>
#include<iomanip>

//NIKOLAS BECIC
int main()
{
	using namespace std;
	double Zahl;
	cout << "Geben sie eine Gleikommazahl an: ";
	cin >> Zahl;
	cout << endl << right << setfill('.') << setprecision(2) << fixed << setw(15) << Zahl;
}