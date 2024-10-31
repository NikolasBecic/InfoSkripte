#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

//NIKOLAS
int main()
{
	srand(time(NULL));

	bool gamewon = false;
	int guess;
	int attempt = 0;

	int winnumber = rand() % 1000 + 1;
	while(gamewon == false)
	{
		cout << "Dein " << attempt + 1 << " Versuch :";
		cin >> guess;

		if (guess == winnumber)
		{
			cout << "\n\nGlückwunsch! Du hast die Zahl in "<< attempt <<" Versuchen erraten";
			gamewon = true;
		}
		if (guess < winnumber)
		{
			cout << "\nDie Zahl ist zu klein.\n";
			attempt++;
		}
		if (guess > winnumber)
		{
			cout << "\nDie Zahl ist zu Gross\n";
			attempt++;
		}
	}
}