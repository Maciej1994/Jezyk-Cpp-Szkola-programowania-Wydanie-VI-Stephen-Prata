#include <iostream>
#include"Nag³ówek.h"
using namespace std;

Stack::Stack()
{
	x = 0;
}
bool Stack::isempty() const
{
	return x == 0;
}
bool Stack::isfull() const
{
	return x == MAX;
}
bool Stack::push(const Item& item)
{
    if (x < MAX)
    {
        items[x++] = item;
        return true;
    }
    else
        return false;
}
bool Stack::pop(Item& item)
{
    if (x > 0)
    {
        item = items[--x];
        return true;
    }
    else
        return false;
}

void Stack::funkcja()
{
    char ch;
    Stack p1;
    Item p2 = { "Maciej", 10 };
    double sum = 0.0;
    cout << "Nacisnij D, aby wprowadzic nowa platnosc, \n"
        << "P, aby przetworzyc platnosc, lub K, aby zakonczyc.\n";
    while (cin >> ch && toupper(ch) != 'K')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'D':
        case 'd': cout << "Podaj nowa platnosc: ";
            cin >> p2.payment;
            if (p1.isfull())
                cout << "Stos pelen!\n";
            else
                p1.push(p2);
            break;
        case 'P':
        case 'p': if (p1.isempty())
            cout << "Stos pusty!\n";
                else {
            p1.pop(p2);
            sum += p2.payment;
            cout << "Dodano platnosc " << p2.payment << " do sumy naleznosci, ktora wynosi: " << sum << endl;
        }
                break;
        }
        cout << "Nacisnij D, aby wprowadzc nowa platnosc, \n"
            << "P, aby przetworzyc platnosc, lub K, aby zakonczyc.\n";
    }
    cout << "Koniec\n";
   
}