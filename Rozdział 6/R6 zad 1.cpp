#include <iostream>
#include <cctype>

using namespace std;

void funkcja();

int main()
{
    funkcja();
 
}

void funkcja()
{
    char ch;
    cout << " podaj dane z klawiatury, znak @ konczy: " << endl;

    while (cin.get(ch) && ch != '@')
    {
        if (isdigit(ch))
            continue;
        else if (islower(ch))
            ch = (toupper(ch));
        else if (isupper(ch))
            ch = (tolower(ch));
        cout << ch;
    }
}

