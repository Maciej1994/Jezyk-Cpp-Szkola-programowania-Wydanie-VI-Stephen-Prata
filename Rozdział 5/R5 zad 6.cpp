#include <iostream>
#include <cstdlib>
using namespace std;

const int Miesiace = 12;
const int Lata = 3;
int tablica[Miesiace][Lata];

void wpisz_ilosc();


int main()
{
    wpisz_ilosc();
}

void wpisz_ilosc()
{
    int suma = 0;
    int suma_calkowita = 0;
    const char* miesiace[Miesiace] =
    {
        "Styczen",
        "Luty",
        "Marzec",
        "Kwiecien",
        "Maj",
        "Czerwiec",
        "Lipiec",
        "Sierpien",
        "Wrzesien",
        "Pazdziernik",
        "Listopad",
        "Grudzien"
    };

    for (int j = 1; j <= Lata; ++j)
    {
        cout << "Rok " << j << endl;

        for (int miesiac = 0; miesiac < Miesiace; ++miesiac)
        {
            cout << miesiace[miesiac] << ":";
            cin >> tablica[miesiac][j];
           suma = suma + tablica[miesiac][j];
        }
 
        cout << "Suma to: " << suma << endl << endl;
        system("pause");
        system("cls");
        suma_calkowita = suma_calkowita + suma;
        suma = 0;
    }
    cout << "Ilosc calkowita: " << suma_calkowita << endl;

}

