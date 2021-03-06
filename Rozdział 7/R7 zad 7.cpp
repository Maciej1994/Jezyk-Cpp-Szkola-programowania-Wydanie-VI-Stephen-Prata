#include <iostream>
using namespace std;

const int Max = 5;

double* fill_array(double * begin, int limit);
void show_array(double* begin, double* end);
void revalue(double r, double* begin, double* end);

int main()
{
     
     double* properties = new double[Max];

    double * pt = fill_array(properties, Max);
    show_array(properties, pt);
    if (pt != properties)
    {
        cout << " podaj czynnik zmiany wartosci: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << " nieprawidlowa wartosc , podaj liczbe: ";
        }
        revalue(factor, properties,pt);
        show_array(properties,pt);
    }
    cout << " gotowe.\n";
    cin.get();
    cin.get();

   
}

double* fill_array(double* begin, int limit)
{
    double temp;
    double* pt = begin;
    int i;
    for (int i = 0; i < limit; ++pt)
    {
        cout << " podaj wartosc nr " << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << " bledne dane , wprawadzanie przerwane ";
            break;
        }
        else if (temp < 0)
            break;
        (*pt) = temp;
        
    }
    return pt;
}
void show_array(double* begin, double* end)
{
    double* pp = begin;
    int nr = 1;
    for (pp = begin; pp != end; pp++)
    {
        cout << " nieruchomosc nr " << nr << ": ";
        cout << (*pp) << endl;
        ++pp; ++nr;
    }
}
void revalue(double r, double* begin, double* end)
{
    double* pp = begin;

    for (pp = begin; pp < end; pp++) {
        (*pp) *= r;
        ++pp;
    }
}