#include <iostream>
using namespace std;


void wyniki();


int main()
{
   wyniki();
   
}

void wyniki()
{
    const int miesiace = 12;
    int dane[12];
    int suma = 0;

    string miesiac[miesiace] =
    {
         "styczen",
         "luty",
         "marzec",
         "kwiecien",
         "maj",
         "czerwiec",
         "lipiec",
         "sierpien",
         "wrzesien",
         "pazdziernik",
         "listopad",
         "grudzien",
    };

    for (int i = 0; i < 12; ++i)
    {
        cout << miesiac[i] << ": ";
        cin >> dane[i];
        suma = dane[i] + suma;      
    }

    cout << "suma to: " << suma << endl;
}

