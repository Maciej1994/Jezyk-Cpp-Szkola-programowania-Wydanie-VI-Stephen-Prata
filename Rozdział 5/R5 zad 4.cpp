#include <iostream>

using namespace std;

void inwestycje();

int main()
{
    inwestycje();
    
    
}

void inwestycje()
{
    int Dafne = 100;
    int Cleo = 100;
    int lata = 0;

    do {
        Dafne = Dafne + 10;
        Cleo = Cleo + (Cleo * 0.05);
        lata++;

    } while(Dafne > Cleo);

    cout << "Cleo przebije Dafne po " << lata << " latach" << endl;
    cout << "Dafne bedzie miala wtedy " << Dafne << " zl, a Cleo " << Cleo << " zl";
}

