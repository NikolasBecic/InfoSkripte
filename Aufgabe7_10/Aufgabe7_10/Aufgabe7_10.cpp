#include <iostream>
#include <iomanip>
//NIKOLAS BECIC
using namespace std;
int main()
{
    cout << "Tage eines Monats" << endl;
    cout << "-----------------" << endl;

    cout << "Geben sie eine Zahl ein (1-12) : ";

    char zahl;
    cin >> zahl;
    cout << endl;

    switch (zahl)
    {
    case '1':
        cout << "Der Monat hat 31 Tage.";
        break;
    case '2':
        cout << "Der Monat hat 28 Tage.";
        break;
    case '3':
        cout << "Der Monat hat 31 Tage.";
        break;
    case '4':
        cout << "Der Monat hat 30 Tage.";
        break;
    case '5':
        cout << "Der Monat hat 31 Tage.";
        break;
    case '6':
        cout << "Der Monat hat 30 Tage.";
        break;
    case '7':
        cout << "Der Monat hat 31 Tage.";
        break;
    case '8':
        cout << "Der Monat hat 31 Tage.";
        break;
    case '9':
        cout << "Der Monat hat 30 Tage.";
        break;
    case '10':
        cout << "Der Monat hat 31 Tage.";
        break;
    case '11':
        cout << "Der Monat hat 30 Tage.";
        break;
    case '12':
        cout << "Der Monat hat 31 Tage.";
        break;
    default:
        cout << "Gibe Geben sie eine valide Zahl ein!";
        break;
    }
}