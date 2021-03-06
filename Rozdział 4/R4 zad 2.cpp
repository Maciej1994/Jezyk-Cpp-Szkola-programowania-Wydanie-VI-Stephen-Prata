#include <iostream>
#include<string>

using namespace std;


string imie();
string posilek();
void wynik(string dessert, string name);

int main()
{
    
    string name = imie();
    string dessert = posilek();
    wynik(dessert, name);
}

void wynik(string dessert, string name)
{
    cout << " mam dla Ciebie " << dessert;
    cout << ", " << name << ".\n";
}

string imie()
{
    string name;
    cout << " podaj swoje imie:\n";
    getline(cin, name);
    return name;
}
string posilek()
{
    string dessert;
    cout << " podaj swoj ulubiony deser:\n";
    getline(cin, dessert);
    return dessert;
}

