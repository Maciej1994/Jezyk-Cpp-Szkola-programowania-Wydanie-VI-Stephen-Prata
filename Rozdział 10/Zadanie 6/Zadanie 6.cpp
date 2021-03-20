#include <iostream>
#include"Nagłówek.h"
using namespace std;


int main()
{
    Move a1(10,20);
    Move a2(30,40);

    cout << " objekt 1:\n";
    a1.showmove();
    cout << endl;

    cout << " objekt 2:\n";
    a2.showmove();
    cout << endl;

    a1 = a2.add(a1);
    a2 = a1.add(a2);
    cout << " po edycji\n";
    cout << " objekt 1:\n";
    a1.showmove();
    cout << endl;

    cout << " objekt 2:\n";
    a2.showmove();

    cout << " reset objektu 2\n";
    a2.reset(0, 0);
    cout << " objekt 2\n";
    a2.showmove();


}
