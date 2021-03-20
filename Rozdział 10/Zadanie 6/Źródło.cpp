#include <iostream>
#include"Nag³ówek.h"
using namespace std;

Move::Move(double a, double b)
{
	x = a;
	y = b;

}

void Move::showmove() const
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}

Move Move::add(const Move& m) const
{
	Move suma((m.x + this->x), (m.y + this->y));
	return suma;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}