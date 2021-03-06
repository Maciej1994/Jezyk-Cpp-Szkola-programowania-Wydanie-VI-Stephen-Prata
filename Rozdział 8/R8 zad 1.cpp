#include <iostream>
#include <string>
using namespace std;


void pokaz(string  tekst2, int a = 0);

int main()
{
    string tekst = " maciej pracuje w IT ";
    pokaz(tekst);
    pokaz(tekst);
    pokaz(tekst, 2);


}



void pokaz(string tekst2, int a)
{
    static int licznik = 0;
    if (a != 0)
    {
        for (int i = 0; i < licznik; i++)
            cout << tekst2 << endl;
    }
    else
    {
        cout << tekst2 << endl;
        licznik++;
    }
}


