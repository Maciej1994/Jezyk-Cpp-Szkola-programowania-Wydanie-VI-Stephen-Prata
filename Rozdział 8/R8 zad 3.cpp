#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void zwieksz(string& wyraz);


int main()
{
    string wyraz;
    while (true) {
        cout << "Podaj wyraz (q konczy program): ";
        getline(cin, wyraz);
        if (wyraz == "q") break;

        zwieksz(wyraz);

        cout << wyraz << endl;
    }
    cout << "Do widzenia!";
    return 0;
}

void zwieksz(string& wyraz) {

    string wynik;
    for (int i = 0; i < wyraz.size(); i++) {
        wynik += char(toupper(wyraz[i]));
    }
    wyraz = wynik;
}