#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <iostream>
#include"Nag³ówek.h"
using namespace std;

Golf::Golf(const char* name, int hc)
{
	strcpy(fullname, name);
	this->handicap = hc;

}


Golf::~Golf() {};


void Golf::handicap_n(int hc)
{
	handicap = hc;

}
void Golf::showgolf() const
{
	cout << "Nazwisko: " << fullname << endl;
	cout << "Handicap: " << handicap << endl;

}

