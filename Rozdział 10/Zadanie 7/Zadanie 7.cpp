#include <iostream>
#include "Nagłówek.h"
using namespace std;

int main()
{
    Plorg a1;
    
    a1.pokaz();
    a1.zmien_sytosc(100);
    
    cout << "......Zmiany......" << endl;

    cout << "Zmien imie: \n";
    char new_name[20];
    cin >> new_name;

    cout << "Zmien wpolczynik sytosci: \n";
    int x;
    cin >> x;

    Plorg a2(new_name,x);
    a2.pokaz();

    cout << "......wartosci koncowe.......\n";

    Plorg a3("Plorga", x);
    a3.pokaz();


}

