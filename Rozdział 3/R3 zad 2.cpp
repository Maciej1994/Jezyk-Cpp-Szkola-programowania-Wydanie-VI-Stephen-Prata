#include <iostream>
using namespace std;

const double stopa = 12;
const double waga_f = 2.2;
const double metr = 0.0254;

double wczytanie_wzrostu_w_calach();
double wczytanie_wzrostu_w_stopach();
double wczytanie_wagi_w_funtach();

double wzrost_w_calach(double cale, double stopy);
double wzrost_w_metrach(double na_cale);
double waga_w_kg(double funty);
double bmi(double kilogramy, double na_metry);
void wynik_bmi(double bmI);




int main()
{
	double cale = wczytanie_wzrostu_w_calach();
    double stopy = wczytanie_wzrostu_w_stopach();
	double funty = wczytanie_wagi_w_funtach();

	double na_cale = wzrost_w_calach(cale, stopy);
	double na_metry = wzrost_w_metrach(na_cale);
	double kilogramy = waga_w_kg(funty);
	double bmI = bmi(kilogramy , na_metry);
	wynik_bmi(bmI);
   
}

double wczytanie_wzrostu_w_calach()
{
	cout << "podaj wzrost w calach: ";
	double cale;
	cin >> cale;
	return cale;
}
double wczytanie_wzrostu_w_stopach()
{
	cout << "podaj wzrost w stopach: ";
	double stopy;
	cin >> stopy;
	return stopy;
}
double wczytanie_wagi_w_funtach()
{
	cout << "podaj wage w funtach: ";
	double funty;
	cin >> funty;
	return funty;
}





double wzrost_w_calach(double cale , double stopy)
{
	double na_cale = stopy * stopa + cale;
	return na_cale;
}
double wzrost_w_metrach(double na_cale)
{
	double na_metry = na_cale * metr;
	return na_metry;
}

double waga_w_kg(double funty)
{
	double kilogramy = funty / waga_f;
	return kilogramy;
}
double bmi(double kilogramy , double na_metry )
{
	
	double bmI = kilogramy / na_metry;
	return bmI;
}
void wynik_bmi(double bmI)
{
	cout << " twoje bmi wynosi: " << bmI << endl;
}
