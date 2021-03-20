#include <iostream>
#include<list>
#include<windows.h>
#include"list.h"
using namespace std;

list<int>lista;

void List::menu()
{
	int wybor;

	cout << " Menu glowne listy " << endl;
	cout << "wyswietl" << endl;

	cout << "1.push_front" << endl;
	cout << "2. push_back" << endl;
	cout << "3.pop_front" << endl;
	cout << "4.pop_back" << endl;
	cout << "5.size" << endl;
	cout << "6. max_size" << endl;
	cout << "7.empty" << endl;
	cout << "8. remove " << endl;
	cout << "9. sort" << endl;
	cout << "10.reverse" << endl;
	cout << "11.exit" << endl;
	cout << ".................." << endl;
	


}
void List::wyswietl()
{
	system("cls");
	cout << " Zawartosc listy " << endl;
	cout << ".................." << endl;
	for (list<int>::iterator i = lista.begin(); i != lista.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
}

void List::push_front()
{
	cout << " podaj liczbe (na poczatek listy): ";
	int liczba;
	cin >> liczba;
	lista.push_front(liczba);

}
void List::push_back()
{
	cout << " podaj liczbe (na koniec listy): ";
	int liczba;
	cin >> liczba;
	lista.push_back(liczba);
}
void List::pop_front()
{
	cout << " usuniecie liczby z poczatku listy";
	Sleep(2000);
	lista.pop_front();
}
void List::pop_back()
{
	cout << " usuniecie liczby z konca listy";
	Sleep(2000);
	lista.pop_back();
}
void List::size()
{
	cout << " liczb na liscie: " << lista.size();
	Sleep(2000);
}
void List::max_size()
{
	cout << " max liczb na liscie: " << lista.max_size();
}
void List::empty()
{
	cout << " czy lista jest pusta ? ";
	if (lista.empty() == 1) cout << "TRUE";
	else
		cout << "FALSE";
	Sleep(2000);
}
void List::remove()
{
	int liczba;
	cout << " usun z listy wszystkie elementy rowne = ";
	cin >> liczba;
	lista.remove(liczba);
}
void List::sort()
{
	cout << " nastapi posortowanie listy ";
	lista.sort();
	Sleep(2000);
}
void List::reverse()
{
	cout << " nastapi oswrocenie kolejnosci liczb na liscie ";
	lista.reverse();
	Sleep(2000);
}
void List::exit()
{
	cout << " koniec programu ";
	Sleep(2000);
}