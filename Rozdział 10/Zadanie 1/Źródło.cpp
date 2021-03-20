#include <iostream>
#include<string>
#include"Nag³ówek.h"
using namespace std;

Rachunek::Rachunek(const string& klient, const long rachunek, const double kasa)
{
	nazwisko = klient;
	numer_rachunku = rachunek;
	saldo = kasa;

}

void Rachunek::pokaz_dane()
{
	
	cout << " Nazwisko: " << nazwisko << endl;
	cout << " Nr. konta: " << numer_rachunku << endl;
	cout << " saldo: " << saldo << endl;
	cout << endl;


}

void Rachunek::przyjmowanie_na_rachunek(const int kwota)
{
	cout << "wplata: " << kwota<< endl;
	
	saldo += kwota;
	cout <<" Kwota po wplacie = " << saldo << endl;
	cout << endl;
}
void Rachunek::wyciaganie_z_rachunku(const int kasa)
{
	cout << "wyplata: " << kasa << endl;
	
	saldo-=kasa;
	cout <<" Kwota po wyplacie = " << saldo << endl;
}


Rachunek::~Rachunek() {};