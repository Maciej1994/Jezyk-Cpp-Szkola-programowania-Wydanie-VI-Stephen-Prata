#include <iostream>
#include <string>

using namespace std;

int ile_razy;
int i;

struct car
{
	string nazwa;
	int rok;
};

int ile_skatalogowac()
{
	cout << " Ile samochodow chcesz skatalogowac?: ";
	cin >> ile_razy;
	return ile_razy;
}

car* podajDane(car* ps) 
{
	
	for (i = 0; i < ile_razy; i++) {
		cout << "Podaj marke samochodu : ";
		cin.ignore();
		getline(cin, ps[i].nazwa);

		cout << "Podaj rok budowy :";
		cin >> ps[i].rok;
	}
	return ps;
}



int main()
{
	ile_skatalogowac();
	car* ps = new car[ile_razy];
	ps = podajDane(ps);
	
	
	for (int i = 0; i < ile_razy; i++)
	{
		cout << " Marka: "<< ps[i].nazwa << " "<<" Rok: "<< ps[i].rok << endl;
	}
	
	delete []ps;
}

