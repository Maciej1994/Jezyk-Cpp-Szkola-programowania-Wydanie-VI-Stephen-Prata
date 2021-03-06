#include <iostream>

using namespace std;

void menu();
char opcje();
void wybor();


int main()
{
    for (;;) {
        menu();
        wybor();
        getchar(); getchar();
        system("cls");
    }
}

void menu()
{
    cout << " r) roslinozerca  p)pianista\n"
        " d) drzewo        g) gra\n"
        "Prosze podac litere r, p, t lub g:" << endl;
}

char opcje()
{
    char wybor;
    cin >> wybor;
    return wybor;
}

void wybor()
{
    cout << " wybor: ";
    
    switch (opcje())
    {
    case 'r': cout << " rosiczka to roslina owadozerna" << endl; break;
    case 'p': cout << " pianino to instrument klasyczny" << endl; break;
    case 'd': cout << " klon jest drzewem" << endl; break;
    case 'g': cout << " call of duty to gra komputerowa" << endl; break;
    default: cout << " prosze podac litere r, p, t lub g" << endl; break;
    }

}