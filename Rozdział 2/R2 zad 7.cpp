#include <iostream>
using namespace std;


int wczytanie_godzin();
int wczytanie_minut();
void czas(int godziny , int minuty);

int main()
{
    
    int godziny = wczytanie_godzin();
    int minuty = wczytanie_minut();
    czas(godziny , minuty);

}

int wczytanie_godzin()
{
    cout << " podaj ilosc godzin: ";
    int godziny;
    cin >> godziny;
    return godziny;
}
int wczytanie_minut()
{
    cout << " podaj ilosc minut: ";
    int minuty;
    cin >> minuty;
    return minuty;
}

void czas(int godziny , int minuty)
{
    cout << "czas: " << godziny << ":" << minuty << endl;
}
