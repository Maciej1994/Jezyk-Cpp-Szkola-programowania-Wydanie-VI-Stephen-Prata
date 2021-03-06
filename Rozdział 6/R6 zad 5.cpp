#include <iostream>

using namespace std;

int ile_zarabiasz();
void ile_twarpow(int twarpy);

int main()
{
    int twarpy = ile_zarabiasz();
    ile_twarpow(twarpy);
   

}


int ile_zarabiasz()
{
    cout << " ile zarabiasz?: ";
    int twarpy;
    cin >> twarpy;
    return twarpy;
}
void ile_twarpow(int twarpy)
{
    float podatek;
 
    while (twarpy > 0) {
        if (twarpy <= 5000) {
            cout << "0% podatku" << endl;
            
        }
        else if (twarpy > 5000 && twarpy <= 10000) {
            podatek = 5000 * 0.00 + 10000 * 0.10;
            cout << "podatek = " << podatek << endl;
            
        }
        else if (twarpy >= 20000 && twarpy <= 35000) {
            podatek = 5000 * 0.00 + 10000 * 0.10 + 20000 * 0.15;
            cout << "podatek = " << podatek << endl;
            
        }
        else if (twarpy > 35000) {
            podatek = 5000 * 0.00 + 10000 * 0.10 + 20000 * 0.15 + 3000 * 0.20;
            cout << "podatek = " << podatek << endl;
           
        }
        else if (!cin)
        {
            cout << " to nie jest liczba!";
            cin.clear();
            cin.get();
        }
        getchar(); getchar();
        system("cls");
  
            cout << "ile zarabiasz?: ";
            cin >> twarpy;
       
    }
   
}

