#include <iostream>
using namespace std;

int podaj_1_liczbe();
int podaj_2_liczbe();
int suma_liczb(int liczba1, int liczba2);
void wynik(int suma);

int main()
{
	int liczba1 = podaj_1_liczbe();
	int liczba2 = podaj_2_liczbe();
	int suma = suma_liczb(liczba1, liczba2);
	wynik(suma);
  
}

int podaj_1_liczbe()
{
	cout << " podaj pierwsza liczbe: ";
	int liczba1;
	cin >> liczba1;
	return liczba1;
}
int podaj_2_liczbe()
{
	cout << " podaj druga liczbe: ";
	int liczba2;
	cin >> liczba2;
	return liczba2;
}
int suma_liczb(int liczba1, int liczba2)
{
	int suma = 0;
	for (int i = liczba1; i <= liczba2; i++) {
		suma += i;
	}
	return suma;
}void wynik(int suma)
{
	cout << " suma liczb to: " << suma << endl;
}