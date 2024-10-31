#include <iostream>
#include <string>

bool kartenpruefer(std::string kartennummer)
{
    if (kartennummer.length != 16)
    {
        return false;
    }

    int gerade = 0;

    int ungerade = 0;

    for (int i = 0; i <= 16; i++ )
    {
        if (i % 2 == 0)
        {
            gerade += kartennummer[i];
        }

        if (i % 2 != 0)
        {
            if (kartennummer[i] * 2 <= 10)
            {
                int tempe = (kartennummer[i] * 2) % 10;
                int tempz = (kartennummer[i] * 2) / 10;

                ungerade += tempe + tempz;
            }

            ungerade += (kartennummer[i] * 2);
        }
    }


    

}

int main()
{
    std::cout << "Kreditkarten-Pruefung\n-----------------\n";

    std::string Kreditkarte;

    std::getline(std::cin,Kreditkarte);

    std::string KreditRein;
    
    int index = 0;
    
    for (char z : Kreditkarte)
        if (!std::isspace(z))
        {
            KreditRein[index] += z;
            index++;
        }

    if (kartenpruefer)
    {
        std::cout << "Richtig";
    }
    else
    {
        std::cout << "Falsch";
    }
}