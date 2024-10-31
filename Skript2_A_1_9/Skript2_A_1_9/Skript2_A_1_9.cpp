#include <iostream>

int main()
{

    int const zeile = 4;
    int const spalte = 3;

   
    std::cout << "Geben sie 12 Zahlen ein die in die Tabelle eingetragen werden sollen: " << std::endl;

    int tabelle[zeile][spalte];
    double summe = 0;

    for (int i = 0; i < zeile; ++i) {
        for (int o = 0; o < spalte; ++o) {
            std::cout << "Zahl " << (i * spalte + o + 1) << ": ";
            std::cin >> tabelle[i][o];
            summe += tabelle[i][o];
        }
    }

    std::cout << "\nTabelle der eingegebenen Zahlen:" << std::endl;
    for (int i = 0; i < zeile; ++i) 
    {
        for (int o = 0; o < spalte; ++o)
        {
            std::cout << tabelle[i][o] << "\t";
        }
        std::cout << std::endl;
    }

    double mittelwert = summe / (zeile * spalte);
    std::cout << "\nDer Mittelwert der eingegebenen Zahlen: " << mittelwert << std::endl;
}


