#include <iostream>
using namespace std;

float lata_na_jednostki(float jednostki);
float wczytanie_lat();
void prezentacja(float lata, float jednostki);

int main()
{
    float lata = wczytanie_lat();
    float jednostki = lata_na_jednostki(lata);
    prezentacja(lata, jednostki);

}
void prezentacja(float lata, float jednostki)
{
    cout << lata << " lat swietlnych = " << lata_na_jednostki(lata) << " jednostek astronomicznych" << endl;
}

float wczytanie_lat()
{
    cout << "Podaj liczbe lat swietlnych: ";
    float lata;
    cin >> lata;
    return lata;
}
float lata_na_jednostki(float jednostki)
{
    const float lata = 63240;
    return jednostki * lata;;
}
