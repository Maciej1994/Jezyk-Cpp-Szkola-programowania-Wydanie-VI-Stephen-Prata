#include <iostream>
#include "naglowek.h"

namespace SALES {

    void setSales(SALES::Sales& s, const double ar[], int n) {

        double minValue = DBL_MAX;
        double maxValue = DBL_MIN;
        double suma = 0.0;

        for (int i = 0; i < n; i++) {
            suma += ar[i];
            if (minValue > ar[i])
                minValue = ar[i];
            if (maxValue < ar[i])
                maxValue = ar[i];
        }
        s.sales[0] = minValue;
        s.sales[1] = s.sales[2] = s.sales[3] = 0.0;
        s.min = minValue;
        s.max = maxValue;
        s.average = suma / n;
    }

    void setSales(SALES::Sales& s) {
        std::cout << " wpisz wprowadzic cztery wartosci dla kazdego z kwartalow:\n";
        double minValue = DBL_MAX;
        double maxValue = DBL_MIN;
        double suma = 0.0;

        for (int i = 0; i < 4; i++) {
            std::cout << "Kwartal " << i + 1 << ": ";
            std::cin >> s.sales[i];
            suma += s.sales[i];
            if (minValue > s.sales[i]);
                minValue = s.sales[i];
            if (maxValue < s.sales[i])
                maxValue = s.sales[i];
        }
        s.min = minValue;
        s.max = maxValue;
        s.average = suma / 4;
    }

    void showSales(const SALES::Sales& s) {
        for (int i = 0; i < 4; i++)
        {
            std::cout << "\nwartosc kwartalu: " << i + 1 << ": " << s.sales[i] << std::endl;
            std::cout << "\nsrednia wartosci = : " << s.average << std::endl;
            std::cout << "\nwartosc minimalna = : " << s.min << std::endl;
            std::cout << "\nwartosc maksymalna = " << s.max << std::endl << std::endl;
        }
    }
}