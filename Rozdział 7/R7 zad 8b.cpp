#include <iostream>
using namespace std;

const int Max = 4;

struct dane
{
	double wydatki[Max];
};

const int Pory = 4;
const char* pory_roku[Pory] =
{
"Wiosna",
"Lato",
"Jesien",
"Zima"
};

void fill(dane* new_dane, int Pory);
void show(dane* new_dane, int Pory);

int main()
{
	dane* new_dane = new dane[Max];

	fill(new_dane,Pory);
	show(new_dane, Pory);

	delete[] new_dane;
}

void fill(dane*new_dane, int Pory)
{
	

	for (int i = 0; i < Pory; i++) {

		cout << " podaj wydatki za okres >> " << pory_roku[i] << endl;
		cin >> *new_dane[i].wydatki;

	}

}
void show(dane*new_dane, int Pory)
{
	double total = 0.0;
	cout << " wydatki : " << endl;

	for (int i = 0; i < Pory; i++)
	{
		cout << pory_roku[i] << ": " << *new_dane[i].wydatki << " zl" << endl;
		total += *new_dane[i].wydatki;

	}
	cout << " laczne wydatki roczne : " << total << "zl " << endl;
}