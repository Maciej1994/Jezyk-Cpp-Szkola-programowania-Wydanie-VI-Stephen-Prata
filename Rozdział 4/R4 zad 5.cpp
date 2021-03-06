#include <iostream>
using namespace std;

struct batonik
{
    string marka;
    double waga;
    int kalorie;
};

void pokaz(batonik snack)
{
    cout << " Nazwa:" << snack.marka << endl;
    cout << " Waga: " << snack.waga << endl;
    cout << " Kalorie: " << snack.kalorie << endl;
}


int main()
{
    batonik snack =
    {
        "Mocha Munch",
        2.3,
        350
    };

    pokaz(snack);
}
