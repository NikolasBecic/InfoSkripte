#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::cout << "Geben sie einen text an der in grossbuchstaben umgewandelt werden soll" << std::endl;

    char text[100];
   
    std::cin.getline(text, 100);

    for (int i = 0; i < 100; ++i)
        if (text[i] >= 97 && text[i] <= 122)
            text[i] -= 32;

    std::cout << "Text in Grossbuchstaben: " << text << std::endl;
}