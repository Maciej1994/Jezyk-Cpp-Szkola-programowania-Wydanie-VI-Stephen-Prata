#include <iostream>
using namespace std;

int liczba_wierszy();
void wyswietl(int liczba);

int main()
{
	int liczba = liczba_wierszy();
	wyswietl(liczba);
	
}
int liczba_wierszy()
{
	cout << " podaj liczbe wierszy: ";
	int liczba;
	cin >> liczba;
	return liczba;
}

void wyswietl(int liczba)
{
	for (int i = 1; i <= liczba; i++) {

		for (int a = 1; a <= liczba - i; a++)
		{
			cout << ".";
		}
		for (int b = 1; b <= i; b++)
		{
			cout << "*";
		}
		cout << "" << endl;

	}

}
