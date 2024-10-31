//NIKOLAS BECIC
#include <iostream>

int main()
{
    std::cout << "Geben sie 10 Zahlen ein!" << std::endl ;

    int *Feld = new int[10];

    std::cout << std::endl << "Vorwaerts"<< std::endl;

    for (int i = 0; i < 10; i++)
        std::cin >> Feld[i];

    std::cout << std::endl << "Rueckwaerts" << std::endl;

    for (int i = 9; i >= 0; i--)
        std::cout << Feld[i] << std:: endl;

    double mittelwert = 0;

    for (int i = 0; i < 10;i++)
        mittelwert += Feld[i];
    

    mittelwert /= 10;

    std::cout << "\nDer Mittelwert betraegt: " << mittelwert;
}