#include <iostream>
#include <array>
using namespace std;

array<long double, 101>factorials;

void petla();


int main()
{
    petla();
  
}
void petla()
{
    factorials[1] = factorials[0] = 1LL;


    for (int i = 2; i < factorials.size(); i++)
        factorials[i] = i * factorials[i - 1];


    for (int i = 0; i < factorials.size(); i++)
        cout << i << "!= " << factorials[i] << endl;
}
