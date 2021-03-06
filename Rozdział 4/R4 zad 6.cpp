#include <iostream>
#include <string>
using namespace std;

struct batonik
{
    string nazwa;
    double waga;
    int kalorie;
};

batonik* podaj_nazwe(batonik*p)
{
    string nazwa;
    cout << " podaj nazwe batonika: ";
    getline(cin, p->nazwa);
    return p;
}

batonik* podaj_wage(batonik*p)
{
    double waga;
    cout << " podaj wage batonika: ";
    (cin >> p->waga).get();
    return p;
}

batonik*podaj_kalorie(batonik*p)
{
    double kalorie;
    cout << " podaj ile kalorii ma batonik: ";
    (cin >> p->kalorie).get();
    return p;
}


int main()
{

    batonik* p = new batonik;

    p = podaj_nazwe(p);
    p = podaj_wage(p);
    p = podaj_kalorie(p);

    cout << "Nazwa: " << (*p).nazwa << endl;
    cout << "Waga: " << (*p).waga << endl;
    cout << "Kalorie: " << (*p).kalorie << endl;
    delete p;
    
}
