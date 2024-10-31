#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    cout << "Wochentag" << endl;
    cout << "---------" << endl;
    
    cout << "Geben sie eine Zahl ein (1-7) : ";

    char zahl;
    cin >> zahl;
    cout << endl;

    switch (zahl)
    {
    case '1':
        cout << "Der Wochentag ist Montag";
        break;
    case '2':
        cout << "Der Wochentag ist Dienstag";
        break;
    case '3':
        cout << "Der Wochentag ist Mittwoch";
        break;
    case '4':
        cout << "Der Wochentag ist Donnerstag";
        break;
    case '5':
        cout << "Der Wochentag ist Freitag";
        break;
    case '6':
        cout << "Der Wochentag ist Samstag";
        break;
    case '7':
        cout << "Der Wochentag ist Sonntag";
        break;
    default :
        cout << "Geben sie eine valide Zahl ein!";
        break;
    }
}
