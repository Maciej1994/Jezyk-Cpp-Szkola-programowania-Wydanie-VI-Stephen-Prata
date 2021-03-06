#include <iostream>
using namespace std;

const int ArSize = 10;
float datki[ArSize];
int i = 0;


float wpisz_datki();
void srednia_datkow(float srednia);
void wyswietl_wieksze_datki(float srednia);

int main()
{
	float srednia = wpisz_datki();
	srednia_datkow(srednia);
	wyswietl_wieksze_datki(srednia);
	
}

float wpisz_datki()
{
	float suma = 0.0;
	float srednia = 0.0;
	
	for (i = 0; i < ArSize; ++i) {
		cout << " podaj datek: ";
		cin >> datki[i];
		suma += datki[i];
		if (!(datki[i])) {
			break;
		}
		else {
			continue;
		}
	}
	srednia = suma / i;
	return srednia;
}

void srednia_datkow(float srednia)
{
	cout << "srednia datkow to: " << srednia << endl;
}

void wyswietl_wieksze_datki(float srednia)
{
	cout << "Datki wieksze od sredniej datkow to: " << endl;
	for (int j = 0; j < i; j++)
	{
		if (datki[j] > srednia)
			cout << datki[j] << endl;
	}
}

		
	
		



