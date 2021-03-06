#include <iostream>
#include "golf.h"
using namespace std;



void setgolf(golf& g, const char* name, int hc) 
{
    strcpy_s(g.fullname, name);
    g.handicap = hc;
}



int main()
{
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);

    cout << " name: " << ann.fullname << endl;
    cout << " handicap: " << ann.handicap << endl;

}