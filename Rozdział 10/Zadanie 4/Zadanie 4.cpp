#include <iostream>
#include"Nagłówek.h"


namespace SALES
{
    
int main()
{
        double arr[3] = { 1.1, 1.2, 1.3, };
        Sales sale;
        
        Sales sale2(arr, 3);
        sale.showSales();
        sale2.showSales();
        return 0;
  }

}