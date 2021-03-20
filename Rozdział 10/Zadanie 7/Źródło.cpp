#include <iostream>
#include <cstring>
#include "Nag³ówek.h"

using namespace std;

Plorg::Plorg()
{
    strcpy_s(name, "Plorga");
    sytosc = 50;

}

Plorg::Plorg(const char* str, const int s)
{
    int str_size = strlen(str) + 1;

    if (str_size > LIMIT)
        cout << "Za dlugie imie.\n";
    else
        strcpy_s(name, str);
    sytosc = s;

}
void Plorg::zmien_sytosc(const int s)
{
    sytosc = s;
}
void Plorg::pokaz() const
{
    cout << " imie : " << name << endl;;
    cout << " sytosc :" << sytosc << endl;
}

