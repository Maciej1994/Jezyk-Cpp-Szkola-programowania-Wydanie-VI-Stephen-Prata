#include <iostream>
using namespace std;

const int Size = 10;
int wyniki[Size];

int podaj_wyniki(int wyniki[], int Size);
void pokaz_wyniki(const int wyniki[], int Size);
double sredni_wynik(const int wyniki[], int Size);


int main()
{
    podaj_wyniki(wyniki, Size);
    pokaz_wyniki(wyniki,Size);
    cout<< " srednia to: "<< sredni_wynik(wyniki, Size);
}

int podaj_wyniki(int wyniki[], int Size)
{
    int wynik;
    for (int i = 0; i < Size; i++) {
        cout << " podaj " << i + 1 << " wynik: ";
        cin >> wynik;
        if (wynik < 0) 
            break;
            wyniki[i] = wynik;
    }
    return wynik;
}

void pokaz_wyniki(const int wyniki[], int Size)
{
    for (int i = 0; i < Size; i++) {
        cout << wyniki[i]<< " ";
    }
}

double sredni_wynik(const int wyniki[], int Size)
{
    double suma = 0.0;
    double srednia = 0.0;
    for (int i = 0; i < Size; i++) {
        suma = suma + wyniki[i];
    }
     srednia = suma / Size;
     return  srednia;
   
}
