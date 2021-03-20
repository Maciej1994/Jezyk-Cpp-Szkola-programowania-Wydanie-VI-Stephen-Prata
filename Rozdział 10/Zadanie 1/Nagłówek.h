#include <iostream>
#include <string>
using namespace std;

class Rachunek
{
private:
	string nazwisko;
	long long numer_rachunku;
	double saldo;

public:
	Rachunek(const string& klient= "Maciej", const long rachunek = 123456, const double kasa = 100000.0);
	~Rachunek();
	void pokaz_dane();
	void przyjmowanie_na_rachunek(const int kwota);
	void wyciaganie_z_rachunku(const int kwota);
};
