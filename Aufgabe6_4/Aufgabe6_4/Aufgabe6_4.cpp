#include <iostream>
#include <locale>
#include <iomanip>
//NIKOLAS BECIC
int main()
{
    using namespace std;
    locale german_locale("de_DE.utf8");
    wcout.imbue(german_locale);
  
        // Deklaration der Variablen
        double geschwindigkeit_mbps, dateigroesse_mib;
        double transferrate_mib_sek, transferrate_mib_min;
        int stunden, minuten, sekunden, millisekunden;

        cout << "Berechnung der Datentransferraten" << endl;
        cout << "_________________________________" << endl << endl;

        // Eingabe der Geschwindigkeit und Dateigröße
        cout << "Geschwindigkeit des Anschlusses in Megabit pro Sekunde: ";
        cin >> geschwindigkeit_mbps;

        cout << "Groesse der zu uebertragenden Datei in MiB: ";
        cin >> dateigroesse_mib;

        // Berechnung der Transferraten
        transferrate_mib_sek = geschwindigkeit_mbps / 8;
        transferrate_mib_min = transferrate_mib_sek * 60;
        double transferrate_MB_sek = ((transferrate_mib_sek / 1024) / 1024) * 1000000;
        double transferrate_MB_min = ((transferrate_mib_min / 1024) / 1024) * 1000000;

        // Berechnung der Download-Zeit in Sekunden
        double download_Zeit = dateigroesse_mib / transferrate_MB_sek;

        // Umrechnung der Download-Zeit in Stunden/Minuten/Sekunden
        stunden = int(download_Zeit / 3600);
        minuten = int((download_Zeit - stunden * 3600) / 60);
        sekunden = int(download_Zeit - stunden * 3600 - minuten * 60);
        //millisekunden = int((download_Zeit - stunden * 3600 - minuten * 60 - sekunden) * 1000);
        millisekunden = int(download_Zeit * 1000) % 1000;

        // Ausgabe der Ergebnisse
        cout << "Ihre Datentransferraten: " << endl; 
        cout << setprecision(2) <<fixed <<setw(2) << right << transferrate_MB_sek << " MiB/s" << endl;
        cout << setprecision(2) << fixed << setw(2) << right << transferrate_MB_min << " MiB/min" << endl;
        cout << "Der Download dieser Datei dauert: " << endl;
        cout << setw(2) << setfill('0') << stunden << ":"; 
        cout << setw(2) << setfill('0') << minuten << ":";
        cout << setw(2) << setfill('0') << sekunden << ".";
        cout << setw(3) << setfill('0') << millisekunden << endl;
        return 0;

}