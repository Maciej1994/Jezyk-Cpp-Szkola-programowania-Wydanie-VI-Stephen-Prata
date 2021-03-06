#include <iostream>
using namespace std;



long double szansa_wygranej(unsigned numbers, unsigned picks);
long double power_ball(unsigned numbers, unsigned picks);
long double wygrana();

long double results = 1.0;
long double wybor = 1.0;


int main()
{
    double total, choices;

        cout << " podaj najwieksza liczbe(1-47), jaka mozna wybrac oraz (5) liczbe skreslen:  " << endl;
        cin >> total >> choices;
        cout << szansa_wygranej(total, choices);
        cout << endl;


        cout << " podaj najwieksza liczbe (1-27), jaka mozna wybrac oraz (1) liczbe power-ball: " << endl;
        cin >> total >> choices;
        cout << power_ball(total, choices);
        cout << endl;

        cout << " SZANSA NA WYGRANA TO: " << wygrana();
    
    
}

 

long double szansa_wygranej(unsigned numbers, unsigned picks)
{
    
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        results = results * n / p;
    return results;


}

long double power_ball(unsigned numbers, unsigned picks)
{
    long double m;
    unsigned q;

    for (m = numbers, q = picks; q > 0; m--, q--)
        wybor = wybor * m / q;
    return wybor;
}

long double wygrana()
{
    long double szansa = 0;
    szansa = results * wybor;
    return szansa;

}