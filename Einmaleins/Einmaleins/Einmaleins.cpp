
#include <iostream>

int main()
{
    std::cout << "Einmaleins\n----------\n";
    int laenge;
    std::cout << "wie lang soll die multiplikationstabelle sein? :" << std::endl;

    std::cin >> laenge;

    for (int i = 0; i <= laenge; i++)
    {
        for (int j = 0; j <= laenge; j++)
        {
            std::cout <<i*j << "\t";
        }
        std::cout << std::endl;
    }
}

