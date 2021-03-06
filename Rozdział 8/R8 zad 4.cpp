#include <iostream>
#include <cstring>
using namespace std;

struct stringy {
    char* str;
    int ct;
};

void set(stringy&, char[]);
void show(char[], int a = 1);
void show(stringy&, int a = 1);

int main(int argc, char** argv)
{
    stringy beany;

    char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";

    set(beany, testing);
    show(beany);
    show(beany, 2); 
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Gotowe");

    return 0;
}

void set(stringy& bean, char test[])
{
    bean.str = new char;
    strcpy(bean.str, test);
    int a = strlen(test);
    bean.ct = a;
}
void show(char tab[], int t)
{
    for (int i = 0; i < t; i++)
        cout << tab << endl;
}
void show(stringy& bean, int t)
{
    for (int i = 0; i < t; i++)
        cout << bean.str << endl;
}

