#include <iostream>

using namespace std;

void sumowanie();


int main()
{

sumowanie();
 	
}

void sumowanie()
{
	int liczba;
	int suma = 0;
	do{
		cout << " podaj liczbe: ";
		cin >> liczba;
		suma += liczba;
		cout << "Suma: " << suma << endl;

	} while (liczba != 0);
}




