#include<iostream>

//NIKOLAS BECIC
int main()
{

	srand(time(NULL));

	std::cout << "Aufgabe 1.6" << std::endl;
	std::cout << "-----------" << std::endl;

	int index = 0;
	int array[1000];

	for (int i = 0; i < 1000; i++)
		array[i] = 1 + rand() % 1000;
	
	for (int i= 1; i < 1000; i++)
	{
		
		if (array[i] < array[index])
		{
			std::cout << i << ". " << array[i] << '<' << array[index] << std::endl;
		    index = i; 
		}
		
	}
	std::cout << "Die kleinste Zahl im Feld ist : " << array[index] << " an der Stelle " << index << std::endl;

	for (int i = 1; i < 1000; i++)
	{

		if (array[i] > array[index])
		{
			std::cout << i << ". " << array[i] << '>' << array[index] << std::endl;
			index = i;
		}

	}

	std::cout << "Die groesste Zahl im Feld ist : " << array[index] << " an der Stelle " << index << std::endl;

}