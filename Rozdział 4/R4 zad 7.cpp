#include <iostream>
#include <string>
using namespace std;

string podaj_nazwe();
double podaj_srednice();
double podaj_wage();
void wyniki(string nazwa, double srednica, double waga);


struct pizza 
{
    string nazwa;
    double srednica;
    double waga;
};



int main()
{
    string nazwa = podaj_nazwe();
    double srednica = podaj_srednice();
    double waga = podaj_wage();

    wyniki(nazwa,srednica,waga);
    
}

void wyniki(string nazwa, double srednica, double waga)
{
    cout << " Nazwa pizzy: " << nazwa << endl;
    cout << " Srednica pizzy: " << srednica << endl;
    cout << " Waga pizzy: " << waga << endl;
}

string podaj_nazwe()
{
    string nazwa;
    cout << " podaj nazwe pizzy: ";
    getline(cin, nazwa);
    return nazwa;

}
double podaj_srednice()
{
    double srednica;
    cout << " podaj srednice pizzy: ";
    cin >> srednica;
    return srednica;

}
double podaj_wage()
{
    double waga;
    cout << " podaj wage pizzy: ";
    cin >> waga;
    return waga;

}