#include <iostream>
using namespace std;

void tresc();
double dlugosc_w_stopniach();
double dlugosc_w_minutach();
double dlugosc_w_sekundach();

double sekundy_na_minuty(double sekundy);
double minuty_na_stopnie(double minuty, double sek_na_min);
void wynik(double stopnie , double minuty , double sekundy, double stopni);

int main()
{
    tresc();
    double stopnie = dlugosc_w_stopniach();
    double minuty = dlugosc_w_minutach();
    double sekundy = dlugosc_w_sekundach();

    double sek_na_min = sekundy_na_minuty(sekundy);
    double min_na_stop = minuty_na_stopnie(minuty, sek_na_min);

    wynik(stopnie, minuty, sekundy, min_na_stop);
    
}

void tresc()
{
    cout << " podaj dlugosc w stopniach, minutach i sekundach" << endl;
}
double dlugosc_w_stopniach()
{
    cout << " podaj stopnie: ";
    double stopnie;
    cin >> stopnie;
    return stopnie;
}
double dlugosc_w_minutach()
{
    cout << " nastepnie podaj minuty stopnia luku: ";
    double minuty;
    cin >> minuty;
    return minuty;
}
double dlugosc_w_sekundach()
{
    cout << " na koniec podaj sekundy luku: ";
    double sekundy;
    cin >> sekundy;
    return sekundy;
}
double sekundy_na_minuty(double sekundy)
{
    const double sek_na_min = sekundy / 60;
    return sek_na_min;

}
double minuty_na_stopnie(double minuty , double sek_na_min)
{
    const double min_na_stop = (minuty + sek_na_min) / 60;
    return  min_na_stop;
}

void wynik(double stopnie, double minuty, double sekundy, const double min_na_stop)
{
    cout << stopnie << " stopni," << minuty << " minut," << sekundy << " sekund = " <<stopnie+min_na_stop << endl;
}