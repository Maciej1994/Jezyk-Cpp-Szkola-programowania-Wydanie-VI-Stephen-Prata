#include <iostream>
#include <cstring>
#include <string>
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
    string word = "gotowe";

    cout << " podaj slowa (kiedy skonczysz, napisz gotowe)" << endl;
    cin >> word;

    do
    {
        cin >> word;
        ++numberword;
    } while (word != "gotowe");

    return numberword;

}

void wynik(int numberword)
{
    cout << " podano: " << numberword << " slow/slowa.";
}





       
  