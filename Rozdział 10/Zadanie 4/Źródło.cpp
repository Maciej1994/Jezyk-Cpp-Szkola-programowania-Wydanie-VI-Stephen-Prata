#include <iostream>
#include"Nag³ówek.h"
using namespace std;

namespace SALES
{

	Sales::Sales()
	{
		int i = 0;
		std::cout << "Wprowadz wartosci sprzedazy z 4 kwartalow:\n";
		while (cin && i < QUARTERS) {
			cin >> sales[i];
			if (!cin) {
				cin.clear();
				while (cin.get() != '\n')
					continue;
				std::cout << "Bledne dane, wprawadzanie przerwane.\n";
				while (i < QUARTERS) {
					sales[i] = 0.0;
					i++;
				}
				break;
			}
			i++;
		}
		average = sales[0];
		max = sales[0];
		min = sales[0];
		for (i = 1; i < QUARTERS; i++)
		{
			average += sales[i];
			max = (max > sales[i]) ? max : sales[i];
			min = (min < sales[i]) ? min : sales[i];
		}
		average /= QUARTERS;


	}

	Sales::Sales(const double ar[], int n)
	{
		double max = *ar;
		double min = *ar;
		double average = 0.0;

		if (n < QUARTERS)
		{
			for (int i = n; i < QUARTERS; i++)
			{
				sales[n - 1] = 0.0;
			}
		}
		for (int i = 0; i < n; i++)
		{
			sales[i] = ar[i];
			max = (max > ar[i]) ? max : ar[i];
			min = (min < ar[i]) ? min : ar[i];
			average += ar[i];
		}
		average = average / QUARTERS;
		max = max;
		min = min;

	
     }


		void Sales::showSales() const
		{
			cout << "Zawartosc sturktry:\n";
			cout << "Tablica sales:" << endl;
			for (int i = 0; i < QUARTERS; i++)

				cout << (i + 1) << ". " << sales[i] << endl;
			cout << "Wartosc minimalna: " << min << endl;
			cout << "Wartosc maksymalna: " << max << endl;
			cout << "Wartosc srednia: " << average << endl;

		}

}