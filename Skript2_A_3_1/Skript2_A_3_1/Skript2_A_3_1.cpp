#include <iostream>
#include <string>
#include <cctype>
#include <vector>

void Task3_1()
{
    std::cout << "Geben sie einen text an der in grossbuchstaben umgewandelt werden soll" << std::endl;

    char text[100+1];

    std::cin.getline(text, 100);

    for (int i = 0; i < 100; ++i)
        if (text[i] >= 97 && text[i] <= 122)
            text[i] -= 32;

    std::cout << "Text in Grossbuchstaben: " << text << std::endl;
}

void Task_Bonus()
{
    const int length = 49;

    //3 Gross
    //5 Klein
    //15 Gross

    char text[] = "It's Friday again, its Saturday, Sunday, WHAT!?!"; 
    char text2[length];

    strcpy_s(text2, text);

    int alpha = 0.0;

    for (int i = 0; i <= length; i++)
    {
        if (text2[i] >= 'a' && text2[i] <= 'z' || text2[i] >= 'A' && text2[i] <= 'Z')
        {
            alpha++;

            if (alpha % 5 == 0)
            {
                if (text2[i] >= 'A' && text2[i] <= 'Z')
                {
                    text2[i] += 32;
                } 
            }
            if (alpha % 3 == 0 || alpha % 15 == 0)
            {
                if (text2[i] >= 'a' && text2[i] <= 'z')
                {
                    text2[i] -= 32;
                }
            }
        }
    }

    std::cout << text2 << std::endl;
}

int main()
{
    std::cout << "Welche aufgabe wollen sie öffnen? 1(3.1) oder 2(Bonus)? :" << std::endl;

    int task;

    std::cin >> task;

    switch (task)
    {
    case(1):
        Task3_1();
        break;
    case(2):
        Task_Bonus();
        break;
    default:
        main();
        break;
    }
}