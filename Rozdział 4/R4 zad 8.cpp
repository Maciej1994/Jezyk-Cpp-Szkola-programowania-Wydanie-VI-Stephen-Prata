#include <iostream>
#include <string>
using namespace std;


struct pizza
{
	string nazwa;
	double srednica;
	double waga;
};


pizza* podaj_srednice(pizza* ps)
{
	double srednica;
	cout << " podaj srednice pizzy: ";
	(cin >> ps->srednica).get();
	return ps;
}

pizza* podaj_nazwe(pizza*ps)
{
	string nazwa;
	cout << " podaj nazwe pizzy: ";
	getline(cin,ps->nazwa);
	return ps;
}

pizza* podaj_wage(pizza*ps)
{
	double waga;
	cout << " podaj wage pizzy: ";
	cin >> ps->waga;
	return ps;
}


int main()
{
	pizza* ps = new pizza;

	ps = podaj_srednice(ps);
	ps = podaj_nazwe(ps);
	ps = podaj_wage(ps);

	cout << " srednica pizzy: " << (*ps).srednica << endl;
	cout << " nazwa pizzy: " << (*ps).nazwa << endl;
	cout << " waga pizzy: " << (*ps).waga << endl;

	delete ps;

}