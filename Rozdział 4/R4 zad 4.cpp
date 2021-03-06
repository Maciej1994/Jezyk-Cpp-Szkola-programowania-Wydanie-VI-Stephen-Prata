#include <iostream>
#include <string>

using namespace std;

string podaj_imie();
string podaj_nazwisko();
void wyswietl(string imie, string nazwisko);


int main()
{
    string imie = podaj_imie();
    string nazwisko = podaj_nazwisko();
    wyswietl(imie, nazwisko);

}
void wyswietl(string imie, string nazwisko)
{
    cout << imie << ", " << nazwisko << endl;
}
string podaj_imie()
{
    string imie;
    cout << " podaj imie: ";
    getline(cin, imie);
    return imie;
}
string podaj_nazwisko()
{
    string nazwisko;
    cout << " podaj nazwisko: ";
    getline(cin, nazwisko);
    return nazwisko;
}
