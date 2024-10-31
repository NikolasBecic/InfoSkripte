#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;



int main()
{
	locale::global(locale("german_germany.UTF-8"));

	cout << "ä. ö .ü";

	return 1;
}