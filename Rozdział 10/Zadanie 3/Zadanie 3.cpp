#include <iostream>
#include<string>
#include"Nagłówek.h"
using namespace std;

int main()
{
    Golf g1("Ann Birdfree", 12);
    g1.showgolf();
 
   
    cout << " ...........Nowe dane........... " << endl;
    int new_hc;

    cout << " podaj nowego inta: ";
    cin >> new_hc;
    g1.handicap_n(new_hc);
    g1.showgolf();
    
}

