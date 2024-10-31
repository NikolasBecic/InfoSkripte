#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;


int main()
{

	int laenge;

    srand(time(NULL));
	cout << "Quicksort-Algorithmuss" << endl;
	cout << "\nGeben sie die Laenge des Arrays an: ";
	cin >> laenge;

	int* Array = new int[laenge];

	for (int i = 0; i <= laenge; i++)
	{
		Array[i] = rand() % laenge + 1;
		cout << Array[i] << endl;
	}

	
}