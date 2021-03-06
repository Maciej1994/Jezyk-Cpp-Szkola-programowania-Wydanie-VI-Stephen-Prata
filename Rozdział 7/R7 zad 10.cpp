#include <iostream>
#include<cstdlib>
using namespace std;

double podaj_liczbeX();
double podaj_liczbeY();
double add(double x, double y);
double multi(double x, double y);
double calculate(double x, double y , double(*pf)(double,double));

int main()
{
    for (;;) {
        double x = podaj_liczbeX();
        double y = podaj_liczbeY();
       
        
        cout << " suma to: " << calculate(x, y, add) << endl;
        
        cout << " iloczyn to: " << calculate(x, y, multi) << endl;

        getchar(); getchar(); 
        system("cls");
    }

}

double podaj_liczbeX()
{
    double x;
    cout << " podaj liczbe x: ";
    cin >> x;
    return x;
}

double podaj_liczbeY()
{
    double y;
    cout << " podaj liczbe y: ";
    cin >> y;
    return y;
}

double add(double x , double y)
{
    return x + y;       
}

double multi(double x, double y)
{
    return x * y;
}


double calculate(double x, double y, double(*pf)(double, double))
{
    return (*pf)(x, y);
}
