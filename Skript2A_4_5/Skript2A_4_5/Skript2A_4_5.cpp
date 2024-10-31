#include "4_5_Tasker.h"
#include <iostream>
#include <vector>

int main()
{
    double feld[3];

    int size = 3;

    int task;

    std::cout << "Welche aufgabe wollen sie taetigen? : " << std::endl;
    std::cout << "1. Flaeche und Umfang eines Kreises mit Radius r ausrechnen" << std::endl;
    std::cout << "2. Die Werte x1 x2 x3 höhen aufsteigend sortieren" << std::endl;
    std::cout << "3. Die Lösung der quadratischen gleichung a*x^2+b*x+c=0" << std::endl;
    std::cout << "3. Ein Feld vom typ int horizontal oder vertikal ausgeben lassen" << std::endl;
    std::cout << "4. Mittelwert eines Feldes mit Gleitkommazahlen berechnen und ausgeben" << std::endl << std::endl;

    std::cin >> task;

    switch (task)
    {
    case(1):

        int r;

        std::cout << "Geben sie den Radius r an: ";
        std::cin >> r;

        std::cout << "der Flaecheninhalt betraegt : " << Flaeche(r) << std::endl;
        std::cout << "der Umfang betraegt : " << Umfang(r) << std::endl;

        break;
    case(2):

        std::cout << "Geben sie drei zahlen für das feld an : " << std::endl;
        int x1, x2, x3;

        std::cin >> x1 >> x2 >> x3;

        Ausgabe(Sortieren(feld,size,'h'));

        break;
    case(3):
        
        double a, b, c, x;
        
        std::cout << "geben sie die werte für a , b , c und x in dieser Reihenfolge ein:" << std::endl;
        
        std::cin >> a, b, c, x;


        
        break;
    case(4):

        std::cout << "Geben sie drei zahlen für das feld an : " << std::endl;

        int num1, num2, num3;

        std::cin >> num1 >> num2 >> num3;

        feld[0] = num1;
        feld[1] = num2;
        feld[2] = num3;

        char alignement;

        std::cout << "Wollen sie die zahlen vertikal oder horizontal ausgeben lassen? v/h :";

        std::cin >> alignement;

        Ausgabe(feld, size, alignement);
       

        break;
    case(5):
        
        std::cout << "Geben sie drei zahlen für das feld an : " << std::endl;

        double dub1, dub2, dub3;

        std::cin >> dub1 >> dub2 >> dub3;

        feld[0] = dub1;
        feld[1] = dub2;
        feld[2] = dub3;

        break;
    }
    

}
