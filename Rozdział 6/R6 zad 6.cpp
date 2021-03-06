#include <iostream>
#include <string>
using namespace std;

struct wplywy
{
    string nazwisko;
    double kwota;
};


int podaj_ilu_wplacajacych()
{
    cout << "ile jest wplacajacych?: ";
    int wplacajacy;
    cin >> wplacajacy;
    return wplacajacy;
}

wplywy* podaj_nazwe(wplywy* ps, int wplacajacy)
{
    for (int i = 0; i < wplacajacy; ++i)
    {
        cout << " podaj nazwisko : " << i + 1 << " sponsora" << endl;
        cin.ignore();
        getline(cin, ps[i].nazwisko);

        cout << " podaj wplate: " << endl;
        cin >> ps[i].kwota;
    }
    return ps;
}

void pokaz_wspanialych(wplywy*ps,int wplacajacy)
{
    bool NotEmpty = false;
    cout << "Nasi wspaniali sponsorzy:" << endl;
    for (int i = 0; i < wplacajacy; ++i) {
        if (ps[i].kwota >= 10000) {
            cout << "nazwisko: " << ps[i].nazwisko << endl;
            cout << "kwota: " << ps[i].kwota << endl;
            cout << endl;
            NotEmpty = true;
        }
    }
     if (!NotEmpty) {
        cout << "BRAK" << endl;
       
    }
}

void pokaz_reszte(wplywy* ps, int wplacajacy)
{
    bool NotEmpty = false;
    cout << "Nasi sponsorzy:" << endl;
    for (int i = 0; i < wplacajacy; ++i) {
        if (ps[i].kwota < 10000) {
            cout << "nazwisko: " << ps[i].nazwisko << endl;
            cout << "kwota: " << ps[i].kwota << endl;
            cout << endl;
            NotEmpty = true;
        
        }
    }
    if (!NotEmpty) {
        cout << "BRAK" << endl;
        NotEmpty = false;
    }
}

int main()
{
    int wplacajacy = podaj_ilu_wplacajacych();

    wplywy* ps = new wplywy[wplacajacy];

    ps = podaj_nazwe(ps, wplacajacy);
    pokaz_wspanialych(ps, wplacajacy);
    pokaz_reszte(ps, wplacajacy);

    delete[] ps;
    
}

