#include <iostream>
#include <string>
using namespace std;

struct dane
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};

dane* podaj_nazwe(dane*nowe_dane)
{
    cout << " podaj nazwe producenta: ";
    cin.get(nowe_dane->producent,40);
    return nowe_dane;

}

dane* podaj_wysokosc(dane* nowe_dane)
{
    cout << " podaj wysokosc: ";
    cin >> (*nowe_dane).wysokosc;
    return nowe_dane;
  
}

dane* podaj_szerokosc(dane* nowe_dane)
{
    cout << " podaj szerokosc: ";
    cin >> (*nowe_dane).szerokosc;
    return nowe_dane;
}

dane* podaj_dlugosc(dane* nowe_dane)
{
    cout << " podaj dlugosc: ";
    cin >> (*nowe_dane).dlugosc;
    return nowe_dane;
}

float podaj_objetosc(dane* nowe_dane)
{
    float iloczyn;
    iloczyn = (*nowe_dane).wysokosc * (*nowe_dane).szerokosc * (*nowe_dane).dlugosc;
    return iloczyn;
    
}

int main()
{
    dane* nowe_dane = new dane;

    nowe_dane = podaj_nazwe(nowe_dane);
    nowe_dane = podaj_wysokosc(nowe_dane);
    nowe_dane = podaj_szerokosc(nowe_dane);
    nowe_dane - podaj_dlugosc(nowe_dane);
    

    cout << " nazwa : " << (*nowe_dane).producent << endl;
    cout << " wysokosc : " << (*nowe_dane).wysokosc << endl;
    cout << " szerokosc : " << (*nowe_dane).szerokosc << endl;
    cout << " dlugosc : " << (*nowe_dane).dlugosc << endl;
    cout << " objetosc : "<< podaj_objetosc(nowe_dane) << endl;
    
    delete nowe_dane;
}

