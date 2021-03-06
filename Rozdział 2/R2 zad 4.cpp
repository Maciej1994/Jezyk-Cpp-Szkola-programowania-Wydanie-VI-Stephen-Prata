#include <iostream>
using namespace std;

int lata_na_miesiace(int miesicace);
int wczytanie_wieku();
void prezentacja(int wiek, int miesiace);

int main()
{
    int wiek = wczytanie_wieku();
    int miesiace = lata_na_miesiace(wiek);

    prezentacja(wiek, miesiace);

}

void prezentacja(int wiek, int miesiace)
{
    cout << wiek << " lat(a) to " << lata_na_miesiace(wiek) <<" miesiace"<< endl;
}


int wczytanie_wieku()
{
    cout << " podaj swoj wiek: ";
    int wiek;
    cin >> wiek;
    return wiek;
}

int lata_na_miesiace(int miesiace)
{
    const int wiek = 12;
   return  miesiace * wiek;
    

}
