#include <iostream>
#include"Nagłówek.h"
using namespace std;

int main()
{
	Person one;
	Person two("Staszek");
	Person three("Jacek", "Placek");

	one.Show();
	cout << endl;
	one.FormalShow();

	cout << endl;
	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;

	three.Show();
	cout << endl;
	three.FormalShow();

}

