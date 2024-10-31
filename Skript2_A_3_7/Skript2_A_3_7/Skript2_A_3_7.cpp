#include <iomanip>
#include <iostream>

int main()
{
    std::cout << "Skript 2 Aufgabe 3.7\n";
    std::cout << "Passwortgeneration" << std::endl;;
    std::cout << "Wie lang soll ihr Passwort sein?: " << std::endl;

    int laenge;
    std::cin >> laenge;

    srand(time(NULL));

    char* passwort = new char[laenge];

    for (int a = 0; a <= laenge; a++)
    {
       

        int ranNum = rand() % 12 + 1;
       
        if (ranNum <= 12 && ranNum >= 9)
        {
            passwort[a] += rand() % 57 + 48;

        }

        if (ranNum <= 8 && ranNum >= 5)
        {
            passwort[a] += rand() % 90 + 65;
           
        }

        if (ranNum <= 4 && ranNum >= 1)
        {
            passwort[a] += rand() % 122 + 97;
           
        }
    }
}


