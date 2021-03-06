#include <iostream>
using namespace std;

double ile_km();
double ile_benzyny();
double obliczenia(double litry , double km);
void pokaz(double wynik);

int main()
{
    double km = ile_km();
    double litry =  ile_benzyny();
    double wynik = obliczenia(km ,litry);
    pokaz(wynik);
}

double ile_km()
{
    cout << " ile przejechano kilometrow?: ";
    double km;
    cin >> km;
    return km;
}
double ile_benzyny()
{
    cout << " ile litrow benzyny zuzyto?: ";
    double litry;
    cin >> litry;
    return litry;
}
double obliczenia(double km , double litry)
{
    double wynik = (litry / km) * 100;
    return wynik;
}
void pokaz(double wynik)
{
    cout << " zuzycie wynosi: " << wynik <<" l/km "<<endl;
}