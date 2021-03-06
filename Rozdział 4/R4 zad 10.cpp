#include <iostream>
#include <array>
using namespace std;

array<double, 3>arr;

void podaj_czas();
void wyniki_czasu();
void policz_srednia();

int main()
{
    podaj_czas();
    wyniki_czasu();
    policz_srednia();

}
void podaj_czas()
{
    for (int i = 0; i < 3; i++) {
        cout << "podaj "<< i+1<<" wynik na 100m: ";
        cin >> arr[i];
    }
}

void wyniki_czasu()
{
    for (int i = 0; i < 3; i++) {
        cout << "czas nr." << i + 1 << " "<< arr[i] << endl;
    }
}

void policz_srednia()
{
    double srednia = 0;
    srednia = srednia + (arr[0] + arr[1] + arr[2]) / 3;
    cout << "srednia czasow to: " << srednia << endl;
}




