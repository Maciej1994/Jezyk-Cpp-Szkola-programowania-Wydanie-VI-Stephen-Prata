﻿#include <iostream>

using namespace std;

long long silnia(int n)
{
    if (n < 2)
        return 1; //silnia z 0 i 1 wynosi 1

    return n * silnia(n - 1); 
}

int main()
{
    int n;

    for (;;) {
        cout << " podaj liczbe: ";
        cin >> n;

        cout << "n!= " << silnia(n) << endl;
    }
    
}




 
