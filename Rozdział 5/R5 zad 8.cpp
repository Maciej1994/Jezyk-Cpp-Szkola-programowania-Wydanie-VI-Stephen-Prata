#include <iostream>
#include <cstring>
using namespace std;

int liczenie_slow();
void wynik(int numberword);

int main()
{
    int numberword = liczenie_slow();
    wynik(numberword);
}

int liczenie_slow()
{
    int numberword = 0;
    const int Size = 100;
    char word[Size];

    cout << " podaj slowa (kiedy skonczysz, napisz gotowe)" << endl;
    cin >> word;

    do
    {
        cin >> word;
        ++numberword;
    } while (strcmp(word, "gotowe") != 0);

    return numberword;

}

void wynik(int numberword)
{
    cout << " podano: " << numberword << " slow/slowa.";
}
