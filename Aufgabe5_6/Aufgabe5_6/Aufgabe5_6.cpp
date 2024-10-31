#include <iostream>
#include <iomanip>
// NIKOLAS BECIC
int main() {
    using namespace std;
    
    //Geldwerten in cents 
    int Wechselgelder[] = { 20000,10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 1 };
    int anzahlWechselgelder = sizeof(Wechselgelder) / sizeof(Wechselgelder[0]);
    // Überschrift und ausgabe Texte
    cout << "Simulation Kassenautomat" << endl << "------------------------" << endl;
    double euroZahlen, euroGezahlt;
    cout << "Zu zahlender Betrag: " << right << "\t";
    cin >> euroZahlen;
    cout << "Gezahlt wurden: " << right << "\t";
    cin >> euroGezahlt;

    //Rechnen von dem zu zahlendem wert

    euroZahlen *= 100;
    euroGezahlt *= 100;

    int wechselGeld = euroGezahlt - euroZahlen;

    //Failsafe falls ne negative zahl rauskommt
    if (wechselGeld < 0)
    {
        cout << "Sie haben nicht den Mindestbetrag bezahlt";
    }
    // anzeige für das Wechselgeld
    else
    {
        cout << "Wechselgeld: " << right << "\t" << wechselGeld / 100.0 << " Euro" << endl << endl;

        cout << "Das Wechselgeld wird ausgezahlt in :\n";
        for (int i = 0; i < anzahlWechselgelder; ++i) 
        {
            int anzahlScheine = wechselGeld / Wechselgelder[i];
            if (Wechselgelder[i] >= 500)
            {
                cout << setw(3) << right << Wechselgelder[i] / 100.0 << "-Euro-Scheine: " << "\t" << anzahlScheine << endl;
            }
            if (Wechselgelder[i] <= 200 && Wechselgelder[i] >=100)
            {
                cout << setw(3) << right << Wechselgelder[i] / 100.0 << right <<"-Euro-Muenzen: " << "\t" << anzahlScheine << endl;
            }
            if(Wechselgelder[i] < 100)
            {
                cout << setw(3) << right << Wechselgelder[i] << "-Cent-Muenzen: " << right << "\t" << anzahlScheine << endl;
            }
            wechselGeld %= Wechselgelder[i];
        }
    } 
     return 0;
}
