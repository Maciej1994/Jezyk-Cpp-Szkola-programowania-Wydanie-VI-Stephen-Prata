#include <iostream>
using namespace std;

const int strsize = 30;
const int tablica = 5;
enum prefer {IMIE ,STANOWISKO ,PSEUDONIM};

struct zpdw
{
    char imie[strsize];
    char stanowisko[strsize];
    char pseudonim[strsize];
    int preferencje; //0 = imie , 1 = stanowisko , 3 = pseudonim
};

void menu();
void wybierz(zpdw inicjalizacja[tablica]);
char wybierz_opcje();
int wybierz_preferencje();
void wyswietl_imiona(zpdw inicjalizacja[tablica]);
void wyswietl_stanowiska(zpdw inicjalizacja[tablica]);
void wyswietl_pseudonimy(zpdw inicjalizacja[tablica]);
void wyswietl_preferencje(zpdw inicjalizacja[tablica]);




int main()
{
    menu();

    zpdw inicjalizacja[tablica] =
    {
        { "Wimp Macho", "Mlodszy Programista", "MOPS", IMIE},
        { "Raki Rohdes", "Mlodszy Programista", "LOOPY", STANOWISKO },
        { "Celia Laiter", "BHP INZYNIER", "MIPS", PSEUDONIM },
        { "Hoppy Hipman", "Szkoleniowiec Analitykow", "Joke", STANOWISKO },
        { "Pat Hand","Stazysta", "LOOPY", PSEUDONIM}

    };

    wybierz(inicjalizacja);
}

void menu()
{
    cout << "a. lista wg imon   b. lista wg stanowisk\n"
        "c. lista wg pseudonimow  d.lista wg preferencji\n"
        "q. koniec" << endl;
}

void wybierz(zpdw inicjalizacja[tablica])
{
    while (true) {
        char opcja = wybierz_opcje();
        switch (opcja)
        {
        case 'a': {
            wyswietl_imiona(inicjalizacja);
            break;
        }
        case 'b': {
            wyswietl_stanowiska(inicjalizacja);
            break;
        }
        case 'c': {
            wyswietl_pseudonimy(inicjalizacja);
            break;
        }
        case 'd': {
            wyswietl_preferencje(inicjalizacja);
            break;
        }
        case 'q': {
            cout << " do zobaczenia ";
            return;
            break;
        }
        default: {
            cout << " nie ma takiej opcji!";
            break;
        }
        }
    }
}


char wybierz_opcje()
{
    cout << "ktora opcja?: ";
    char opcja;
    cin >> opcja;
    return opcja;
}

int wybierz_preferencje()
{
    cout << "wybierz preferencje: ";
    int pref;
    cin >> pref;
    return pref;
}
void wyswietl_imiona(zpdw inicjalizacja[tablica])
{
    for (int i = 0; i < tablica; i++)
        cout << inicjalizacja[i].imie << endl;

}
void wyswietl_stanowiska(zpdw inicjalizacja[tablica])
{
    for (int i = 0; i < tablica; i++)
        cout << inicjalizacja[i].stanowisko << endl;
}
void wyswietl_pseudonimy(zpdw inicjalizacja[tablica])
{
    for (int i = 0; i < tablica; i++)
        cout << inicjalizacja[i].pseudonim << endl;
}
void wyswietl_preferencje(zpdw inicjalizacja[tablica])
{
    for (int i = 0; i < tablica; i++) {

        if (inicjalizacja[i].preferencje == IMIE) {
            cout << inicjalizacja[i].imie << endl;
        }
        else if (inicjalizacja[i].preferencje == STANOWISKO) {
            cout << inicjalizacja[i].stanowisko << endl;
        }
        else if (inicjalizacja[i].preferencje == PSEUDONIM) {
            cout << inicjalizacja[i].pseudonim << endl;
        }
        else {
            cout<<" nie ma takiej opcji"<<endl;
        }
    }

}

