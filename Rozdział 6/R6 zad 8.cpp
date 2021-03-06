#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void otwarcie_pliku();


int main()
{
    otwarcie_pliku();
}

void otwarcie_pliku()
{
    const int Size = 100;
    char filename[Size];
    ifstream inFile;
    ifstream wczytanie_wiersza;

    cout << "podaj nazwe pliku z danymi: ";
    cin.getline(filename, Size);

    inFile.open(filename);

    if (!inFile.is_open()) {
        cout << " otwieranie pliku nie powiodlo sie!" << endl;
        exit(EXIT_FAILURE);
    }
    char znak_po_znaku;
    int chars = 0;

    while (inFile.get(znak_po_znaku)) {
        ++chars;
        cout << znak_po_znaku;
    }

    if (inFile.eof())
        cout << endl;
    else if (inFile.fail())
        cout << " blad " << endl;
    else
        cout << " wczytywanie przerwane , blad " << endl;
    if (chars == 0)
        cout << " nie wczytano zadnych danych" << endl;
    else {
        cout << " wczytanych znakow: " << chars << endl;
    }
    inFile.close();
}