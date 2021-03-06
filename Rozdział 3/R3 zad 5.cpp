#include <iostream>
using namespace std;


long double ludnosc_swiata();
long double ludnosc_polski();
long double obliczenia(long double polska, long double swiat);
void wynik(long double pokaz);


int main()
{
    long double swiat = ludnosc_swiata();
    long double polska = ludnosc_polski();
    long double pokaz = obliczenia(polska, swiat);
    wynik(pokaz);
    
}

long double ludnosc_swiata()
{
    cout << " podaj liczbe ludnosci swiata: ";
    long double swiat;
    cin >> swiat;
    return swiat;
}

long double ludnosc_polski()
{
    cout << " podaj liczbe ludnosci polski: ";
    long double polska;
    cin >> polska;
    return polska;
}

long double obliczenia(long double polska , long double swiat)
{
    long double  pokaz = (polska / swiat)*100;
    return pokaz;
}

void wynik(long double pokaz)
{
    cout << " populacja Polski stanowi :" << pokaz << "% populacji swiata." << endl;
}