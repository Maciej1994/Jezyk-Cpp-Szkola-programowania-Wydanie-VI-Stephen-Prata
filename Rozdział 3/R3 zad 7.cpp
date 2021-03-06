#include <iostream>
using namespace std;

const double mil = 62.14;
const double gal = 3.875;

double zuzycie();
double obliczenia(double benzyna);
void pokaz(double benzyna , double wynik);

int main()
{
	double benzyna = zuzycie();
	double wynik = obliczenia(benzyna);
	pokaz(benzyna, wynik);


}
double zuzycie()
{
	cout << " podaj zuzycie benzyny l/km: ";
	double benzyna;
	cin >> benzyna;
	return benzyna;
}

double obliczenia(double benzyna)
{
	double wynik = 1.0 / ((benzyna / gal) / mil);
	return wynik;
}
void pokaz(double benzyna, double wynik)
{
	cout << benzyna << " [l/100km] = " <<wynik << " [mil/gal]";
}
