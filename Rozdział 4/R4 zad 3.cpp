#include <iostream>
#include <cstring>

using namespace std;

const int ArSize = 20;

int main()
{
    char imie[ArSize];
    cout << " podaj imie: ";
    cin >> imie;

    char nazwisko[ArSize];
    cout << " podaj nazwisko: ";
    cin >> nazwisko;

    cout << " Oto informacje zestawione w jeden napis: " << nazwisko << ", " << imie;
}

