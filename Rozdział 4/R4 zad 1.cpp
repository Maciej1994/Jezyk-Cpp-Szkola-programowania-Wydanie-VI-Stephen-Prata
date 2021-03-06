#include <iostream>
#include <string>
using namespace std;

struct dane
{
string imie;
string nazwisko;
int ocena;
int wiek;
};

dane* podaj_imie(dane*p)
{
    string imie;
    cout << " podaj swoje imie: ";
    getline(cin,p->imie);
    return p;
    
}
dane* podaj_nazwisko(dane* p)
{
    string nazwisko;
    cout << " jak sie nazywasz? ";
    getline(cin,p->nazwisko);
    return p;
}

dane* podaj_ocene(dane* p)
{
    int ocena;
    cout << " na jaka ocene zaslugujesz?: ";
    (cin >> p->ocena).get();
    return p;   
}

dane* podaj_wiek(dane* p)
{
    int wiek;
    cout << " ile masz lat?: ";
    (cin >> p->wiek).get();
    return p;
}

void wyniki(dane*p)
{
    cout << " Nazwisko: " << (*p).nazwisko << ", " << (*p).imie << endl;
    cout << " Ocena: " << (*p).ocena - 1 << endl;
    cout << " Wiek: " << (*p).wiek << endl;
}


int main()
{
    dane* p = new dane;

    p = podaj_imie(p);
    p = podaj_nazwisko(p);
    p = podaj_ocene(p);
    p = podaj_wiek(p);

    wyniki(p);

    delete p;

}