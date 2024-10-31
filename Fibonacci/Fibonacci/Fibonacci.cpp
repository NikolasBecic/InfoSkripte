#include <iostream>

int main() 
{
    std::cout << "Fibonacci\n---------\n";

    int laenge = 10;
    int erst = 0, zweit = 1;

    for (int i = 0; i < laenge; i++) {
        std::cout << erst << "\t";

        int next = erst + zweit;

        erst = zweit;
        zweit = next;
    }

}