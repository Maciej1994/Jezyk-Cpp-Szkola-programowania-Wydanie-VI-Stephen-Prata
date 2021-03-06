#include <iostream>

using namespace std;

const int Max = 4;
double wydatki[Max];

const int Pory = 4;
const char* pory_roku[Pory] =
{
"Wiosna",
"Lato",
"Jesien",
"Zima"
};

void fill(double wydatki[], int Pory);
void show(const double ar[], int Pory);

int main()
{
	
		fill(wydatki, Pory);
		show(wydatki,Pory);

}

void fill(double ar[], int Pory)
{
	double wydatek;

	for (int i = 0; i < Pory; i++) {

		cout << " podaj wydatki za okres >> " << pory_roku[i] << endl;
		cin >> wydatek;

		ar[i] = wydatek;
	}
	
}
void show(const double ar[], int Pory)
{
	double total = 0.0;
	cout << " wydatki" << endl;

	for (int i = 0; i < Pory; i++)
	{
		cout << pory_roku[i] << ": " << ar[i] << " zl" << endl;
		total += wydatki[i];
	}
	cout << " laczne wydatki roczne : " << total << "zl " << endl;
}