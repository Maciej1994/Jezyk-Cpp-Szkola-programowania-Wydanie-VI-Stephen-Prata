#include "naglowek.h"

int main() {

    SALES::Sales a;
    SALES::Sales b;

    SALES::setSales(a);

    const double values[4] = { 10.01, 11.02, 12.03, 14.04 };

    SALES::setSales(b, values, 4);
    SALES::showSales(a);
    SALES::showSales(b);
}
