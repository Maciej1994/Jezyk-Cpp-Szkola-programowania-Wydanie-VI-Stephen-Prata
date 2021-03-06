#include <iostream>
#include <array>


using namespace std;

template < typename T >
T maxElement(T arr[], size_t size)
{
    T max = tab[0];

    for (int i{ 1 }; i < size; ++i) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}




int main()
{
    const int ArSize1 = 5;
    const int ArSize2 = 5;

    int arr1[ArSize1] = { 1,2,3,4,5 };
    double arr2 [ArSize2] = { 1.1,2.1,3.5,4.8,5.5 };

   // array<int, ArSize1>arr1 = { 1,2,3,4,5 };          DLACZEGO NIE DZIALA NA TABLICACH ARRAY ? 
   // array<double, ArSize2>arr2 = { 1.1,2.1,3.5,4.8,5.5 };

    cout <<" najwieksza wartosc 1 tablicy: "<< maxElement(arr1, ArSize1) << endl;
    cout <<" najwieksza wartosc 2 tablicy: "<< maxElement(arr2, ArSize2) << endl;
}


