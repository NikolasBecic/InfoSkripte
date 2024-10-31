#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a;
	int b;
	int c;

	cout << "Loesen der quadratischen Gleichung\n";
	cout << "a * x^2 + b * x + c = 0\n\n";

	cout << "Geben Sie die Koeffizienten ein: \n\n";

	cout << setw(20) << left << "a = "; cin >> a;
	cout << setw(20) << left << "b = "; cin >> b;
	cout << setw(20) << left << "c = "; cin >> c;

	int p = b / a;
	int q = c / a;

	int calc1 = -(p / 2);
	int calc2 = sqrt(pow((p / 2), 2) - q);

	int x1 = calc1 - calc2;
	int x2 = calc1 + calc2;

	

	if (calc2 < 0)
	{
		cout << "\nDie quadratische Gleichung hat keine Loesung\n";
	}
	if (calc2 == 0)
	{
		cout << "\nDie quadratische Gleichung hat die Loesung\n";
		cout << setw(10) << left << "x1 = " << right << x1 << endl;
	}
	if (calc2 >= 1)
	{

		cout << "\nDie quadratische Gleichung hat die beiden Loesungen\n";
		cout << setw(10) << left << "x1 = " << right << x1 << endl << setw(10) << left << "x2 = " << right << x2;
	}

}
