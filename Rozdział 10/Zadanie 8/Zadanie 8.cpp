#include <iostream>
#include<windows.h>
#include<list>
#include"list.h"
using namespace std;

int main()
{
    List a1;
    list<int>lista;

	do
	{
		a1.wyswietl();
		a1.menu();

		cout << "Wybierz: " << endl;
		int wybor;
		cin >> wybor;

		switch (wybor)
		{
		case 1: a1.push_front(); break;
		case 2: a1.push_back(); break;
		case 3: a1.pop_front(); break;
		case 4: a1.pop_back(); break;
		case 5: a1.size(); break;
		case 6: a1.max_size(); break;
		case 7: a1.empty(); break;
		case 8: a1.remove(); break;
		case 9: a1.sort(); break;
		case 10: a1.reverse(); break;
		case 11: a1.exit(); break;
		default:
			cout << " pomylka";
			Sleep(2000);
			break;

		}	

    } while (true);

} 

