#include <iostream>
#include <cstring>
using namespace std;

template < typename T >
T maxElement(T arr[], size_t size)
{
    T tmp = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (tmp < arr[i]) {
            tmp = arr[i];
        }
    }
    return tmp;
}



template <> 
const char* maxElement <const char*>(const char* arr[], size_t size)
{
    const char* tmp = arr[0];
    for (size_t i = 1; i < size; ++i) {

            if ((strlen(arr[i])) > (strlen(tmp)))
            tmp = arr[i];
        
    }
    return tmp;
}

int main()
{
    
    const char* words[5] = { "aaa", "bbbbbb", "najdluzszy", "ccc", "dd" };

    constexpr size_t B_SIZE = 4;
    double numbers[] = { 1.11, 2.22, 3.33, 4.44 };

    constexpr size_t C_SIZE = 5;
    int numbers2[] = { 1,2,3,4,5 };


    cout << "Max wartosc: " << maxElement(numbers, B_SIZE) << '\n';
    cout << "Max wartosc: " << maxElement(numbers2, C_SIZE) << '\n';
    cout << "Wyraz o max dlugosci to: " << maxElement(words, 5) << '\n';
}