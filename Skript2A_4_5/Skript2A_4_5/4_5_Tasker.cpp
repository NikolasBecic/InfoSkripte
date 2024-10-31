#include <iostream>
#include <math.h>
#include <vector>
#include "4_5_Tasker.h"

void FlaecheUndUmfang (double r,double &A, double &U)
{
	A = (atan(1) * 4) * pow(r, 2);
    U = (2 * (atan(1) * 4)) * r;
}

void Sortieren(double& array)
{
    for (int i = 0; i < 2; i++)
    {
        for (int o = 0; o < 2 - i; o++)
        {
            if (array[o] > array[o + 1])
            {
                std::swap(array[o], array[o + 1]);
            }
        }
    }
    return array;
}
void Ausgabe(double& array&, int size, char x)
{
    switch (x)
    {
    case 'h':
        for (int i = 0; i < size; i++)
        {
            std::cout << array[i] << " ";
        }
        break;
    case 'v':
        for (int i = 0; i < size; i++)
        {
            std::cout << array[i] << std::endl;
        }
        break;
    default:
        break;
    }
}
void quadFormel(double& a, double& b, double& c, double& x)
{

}
void Gleitkommazahl(double feld[])
{

}