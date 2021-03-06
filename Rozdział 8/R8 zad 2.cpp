#include <iostream>
using namespace std;

struct batonik
{
	char nazwa[20];
	double waga;
	int kalorie;

};

void pokaz(const batonik& ft);


int main()
{
	batonik dane =
	{
		" Millennium Munch ",
		2.85,
		350
	};

	pokaz(dane);
}

void pokaz(const batonik& ft)
{
	
	cout << " nazwa to: " << ft.nazwa << endl;
	cout << " waga = " << ft.waga << endl;
	cout << " kalorie = " << ft.kalorie << endl;
}

