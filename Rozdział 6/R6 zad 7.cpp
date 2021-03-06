#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string slowo;
bool spolgloska = true;
char tab[] = { 'a', 'e', 'i', 'o', 'u', 'y' };
int samogloski = 0;
int spolgloski = 0;
int digits = 0;

int liczenie_spolglosek();
int liczenie_samoglosek();
int liczenie_inne();
void wyswietl();

int main()
{
    cout << " podawaj slowa(pojedyncze q konczy):";
    while ((cin >> slowo) && (slowo != "q")) {
        int spolgloski = liczenie_spolglosek();
        int samogloski = liczenie_samoglosek();
        int digits = liczenie_inne();
    }

    wyswietl();

}



int liczenie_spolglosek()
{
    
    if (isalpha(slowo[0])) {
        if (spolgloska == true)
            spolgloski++;
    }
    return spolgloski;
}
int liczenie_samoglosek()
{
    
    if (isalpha(slowo[0])) {
        for (int i = 0; i < 6; i++)
        {
            if (slowo[0] == tab[i])
            {
                samogloski++;
                spolgloska = false;
                break;
            }
        }
    }
        return samogloski;
}
int liczenie_inne()
{
    if (isdigit(slowo[0])) {
        digits++;

        return digits;
    }
}

void wyswietl()
{
    cout << spolgloski << " slow zaczyna sie od spolglosek.\n";
    cout << samogloski << " slow zaczyna sie od samoglosek.\n";
    cout << digits << " slow nie zalicza sie do zadnej z tych kategorii.";
}
