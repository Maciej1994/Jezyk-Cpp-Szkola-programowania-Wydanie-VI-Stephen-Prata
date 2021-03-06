#include <iostream>
using namespace std;

float celsjusz_na_farhrenheit(float far);
float wczytanie_celsjusza();
void prezentacja(float celsjusz, float farhrenheit);

int main()
{
  float celsjusz = wczytanie_celsjusza();
  float farhrenheit = celsjusz_na_farhrenheit(celsjusz);

  prezentacja(celsjusz, farhrenheit);

}

void prezentacja(float celsjusz, float farhrenheit)
{
    cout << celsjusz << " stopni Celsjusza to: " << celsjusz_na_farhrenheit(celsjusz) << " stopnie Farhrenhita" << endl;
}
float wczytanie_celsjusza()
{
    cout << "podaj temperature w stopniach Celsjusza: ";
    float celsjusz;
    cin >> celsjusz;
    return celsjusz;
}

float celsjusz_na_farhrenheit(float far)
{
    float farhrenheit;
    farhrenheit = 1.8 * far + 32.0;
    return farhrenheit;

}
