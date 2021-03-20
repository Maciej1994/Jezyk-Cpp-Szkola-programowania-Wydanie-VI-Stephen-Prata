#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"Nag³ówek.h"
#include <cstring>
using namespace std;

Person::Person(const string& ln, const char* fn ) 
{
	lname = ln;
	strcpy(fname, fn);
}

Person::~Person() {};

void Person::Show() const 
{
	cout << "Imie: " << lname << endl;
	cout << "Nazwisko: " << fname << endl;
}
void Person::FormalShow() const 
{
	cout << "Imie:" << lname << endl;
	cout << "Nazwisko: " << fname << endl;
}

#endif