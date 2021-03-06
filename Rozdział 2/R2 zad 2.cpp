#include <iostream>
using namespace std;

double mile_na_metry(double metr);
double wczytanie_mile();
void prezentacja(double mile , double metry);

const double mila = 1852;


int main()
{
    double mile = wczytanie_mile();
    double metry = mile_na_metry(mile);

    prezentacja(mile, metry);

}

void prezentacja(double mile, double metry)
{
    cout << mile << " mil(e) to : " << mile_na_metry(mile) << " metrow" << endl;
}
double wczytanie_mile()
{
    cout << "Podaj odleglosc w milach morskich: ";
    double mile;
    cin >> mile;
    return mile;
}

double mile_na_metry(double metry)
{
    return metry * mila;
}
