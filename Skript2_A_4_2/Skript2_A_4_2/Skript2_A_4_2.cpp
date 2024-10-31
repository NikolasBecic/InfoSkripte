#include "Tasker.h"
#include <iostream>


void Vergleich(int x1, int x2);

void Zufall(int x1, int x2);

void Brutto(double x1, double x2);

void Flaecheninhalt(int x1);

int main()
{
    std::cout << "Hello World!\n";
    
    int task;

    std::cout << "Welche aufgabe wollen sie taetigen? : " << std::endl;
    std::cout << "1. Gebe die groessere von zwei Zahlen wieder" << std::endl;
    std::cout << "2. Zufallszahl zwischen den Ganzzahligen werten a und b ausgeben" << std::endl;
    std::cout << "3. Nettopreis zu Brutto rechnen und ausgeben" << std::endl;
    std::cout << "4. Flaeche eines kreises mit radius r ausrechnen" << std::endl << std::endl;

    std::cin >> task;

    double brutto = 0.0;

    switch (task)
    {
    case(1):

        std::cout << "Geben sie zwei Zahlen ein die verglichen werden sollen: " << std::endl;

        int zahl1, zahl2;

        std::cin >> zahl1 >> zahl2;

        Vergleich(zahl1, zahl2);

        break;
    case(2):

        int a, b;

        std::cout << "Geben sie den wert a(Minimum)  und b (Maximum) an: " << std::endl;
        std::cout << "a: ";
        std::cin >> a;
        std::cout << "b: ";
        std::cin >> b;

        Zufall(b, a);

        break;
    case(3):

        double netto;
        

        std::cout << "Geben sie einen Nettowarenwert an der zu Brutto umgerechnet werden soll: ";

        std::cin >> netto;

        Brutto(netto, brutto);

        break;
    case(4):

        int r;

        std::cout << "Geben sie den Radius r an: ";
        std::cin >> r;

        Flaecheninhalt(r);

        break;

    default:
        break;
    }
}

