#include <iostream>

using namespace std;

double podaj_liczby();
double licz_srednia(double x, double y);
void pokaz(double srednia);

int main()
{
    podaj_liczby();


}

double podaj_liczby()
{
    double x, y;
    cout << " podaj dwie liczby: ";

    while ((cin >> x >> y) && (x > 0) && (y > 0)) {

        double srednia = licz_srednia(x, y);
        pokaz(srednia);
        cout << " nastepne dwie liczby: ";

    }

    cout << " koniec";
    return x, y;
}

double licz_srednia(double x, double y)
{
    double srednia = 0.0;
    srednia = 2.0 *x * y/(x+y);
    return srednia;
}

void pokaz(double srednia)
{
    cout << " srednia harmoniczna = " << srednia << endl;
}