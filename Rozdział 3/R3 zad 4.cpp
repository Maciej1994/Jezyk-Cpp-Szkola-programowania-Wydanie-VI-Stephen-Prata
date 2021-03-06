#include <iostream>
using namespace std;

const long sekund = 60;
const long minut = 60;
const long godziny = 3600;
const long dni = 86400;


long long wczytanie_liczb();

long ilosc_dni(long long sekundy, const long dni);
long reszta_z_dni(long long sekundy, const long dni);
long ilosc_godzin(long reszta1, const long godziny);
long reszta_z_godzin(long reszta1, const long godziny);
long ilosc_minut(long reszta2, const long minut);
long reszta_z_minut(long reszta2, const long minut);
long ilosc_sekund(long reszta3);

void wynik(long long sekundy, long liczba_dni, long liczba_godzin, long liczba_minut, long liczba_sekund);




int main()
{
    long long sekundy = wczytanie_liczb();

    long liczba_dni = ilosc_dni(sekundy,dni);
    long reszta1 = reszta_z_dni(sekundy,dni);

    long liczba_godzin = ilosc_godzin(reszta1,godziny);
    long reszta2 = reszta_z_godzin(reszta1, godziny);

    long liczba_minut = ilosc_minut(reszta2,minut);
    long reszta3 = reszta_z_minut(reszta2,minut);

    long liczba_sekund = ilosc_sekund(reszta3);

    wynik(sekundy, liczba_dni, liczba_godzin, liczba_minut, liczba_sekund);

}

long long wczytanie_liczb()
{
    cout << "podaj liczbe sekund: ";
    long long sekundy;
    cin >> sekundy;
    return sekundy;
}
long ilosc_dni(long long sekundy, const long dni)
{
    long liczba_dni = sekundy / dni;
    return liczba_dni;
}
long reszta_z_dni(long long sekundy , const long dni)
{
    long reszta1 = sekundy % dni;
    return reszta1;
}
long ilosc_godzin(long reszta1, const long godziny)
{
    long liczba_godzin = reszta1 / godziny;
    return liczba_godzin;
}
long reszta_z_godzin(long reszta1,const long godziny)
{
    long reszta2 = reszta1 % godziny;
    return reszta2;
}
long ilosc_minut(long reszta2, const long minut)
{
    long liczba_minut = reszta2 / minut;
    return liczba_minut;
}
long reszta_z_minut(long reszta2, const long minut)
{
    long reszta3 = reszta2 % minut;
    return reszta3;
}
long ilosc_sekund(long reszta3)
{
    long liczba_sekund = reszta3;
    return liczba_sekund;
   
}

void wynik(long long sekundy, long liczba_dni , long liczba_godzin , long liczba_minut , long liczba_sekund)
{
    cout<< sekundy << " sekund = " << liczba_dni << " dni, " << liczba_godzin << " godzin, " << liczba_minut << " minut, " << liczba_sekund << " sekund";
}

