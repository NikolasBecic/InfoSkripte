#include <iostream>

int jahrDifferenz = 0;
int monatDifferenz = 0;
int tagDifferenz = 0;

int DaysDifference(int tag1, int monat1, int jahr1, int tag2, int monat2, int jahr2)
{
    if (jahr1 < jahr2)
    {
        jahrDifferenz = jahr2 - jahr1;
        monatDifferenz = monat2 - monat1;
        tagDifferenz = tag2 - tag1;
    }
    if (jahr1 > jahr2)
    {
        jahrDifferenz = jahr1 - jahr2;
        monatDifferenz = monat1 - monat2;
        tagDifferenz = tag1 - tag2;
    }
}

int main()
{
    std::cout << "Hello World!\n";


}
