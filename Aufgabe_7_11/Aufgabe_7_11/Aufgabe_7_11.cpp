#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Taschenrechner" << endl;
	cout << "--------------" << endl;
	cout << "Geben Sie die 1. Zahl, den Operator (+, -, *oder / ) und die 2. Zahl ein : " << endl << endl;
	int zahl1;
	int zahl2;
	char mathOp;

	cin >> zahl1 >> mathOp >> zahl2;

	switch (mathOp)
	{
	case '*':
		cout << "\nErgebnis: " << zahl1 << mathOp << zahl2 << '=' << zahl1 * zahl2;
		break;
	case '+':
		cout << "\nErgebnis: " << zahl1 << mathOp << zahl2 << '=' << zahl1 + zahl2;
		break;
	case '-':
		cout << "\nErgebnis: " << zahl1 << mathOp << zahl2 << '=' << zahl1 - zahl2;
		break;
	case '/':
		cout << "\nErgebnis: " << zahl1 << mathOp << zahl2 << '=' << zahl1 / zahl2;
		break;
	case '%':
		cout << "\nErgebnis: " << zahl1 << mathOp << zahl2 << '=' << zahl1 % zahl2;
		break;
	default:
		cout<<"\nBitte geben sie einen validen Operator an!";
		break;
	}
	 

}