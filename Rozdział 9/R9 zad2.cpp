#include <iostream>
#include<string>
using namespace std;


void strcount(string str);

int main()
{
    string input;

    while (getline(cin, input) && input != "")
    {
        strcount(input);
        cout << "Wprowadź następny wiersz (wiersz pusty kończy wprowadzanie):\n";

    }
    cout << "Koniec\n";

}
   

void strcount(string str)
{
    static int total = 0;
    total += str.length();
    cout << "\"" << str << "\" zawiera " << str.length() << " znakow\n";
    cout << "lacznie " << total << " znakow\n";

}
