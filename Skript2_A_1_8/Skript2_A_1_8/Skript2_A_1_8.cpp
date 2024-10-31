#include <iostream>
//NIKOLAS BECIC
int main() 
{
    int haufigkeit[256] = { 0 };

    std::srand(time(NULL));

    for (int i = 0; i < 100000; ++i) 
    {
        int wert = std::rand() % 256;
        haufigkeit[wert]++; 
    }
    for (int i = 0; i < 256; ++i)
        std::cout << "Der Wert " << i << " kommt " << haufigkeit[i] << " mal im Bild vor." << std::endl;
}