#include <iostream>
using namespace std;


template <typename T>            
T SumArray(T arr[], int n);

template <typename T>            
T SumArray(T* arr[], int n);


struct debts
{
	char name[50];
	double amount;
};


int main()
{
	
	int things[6] = { 13,31,103,301,310,130 };

	struct debts mr_E[3] =
	{
		{"Ima Wolfe",2400.0},
		{"Ura Foxe",1300.0},
		{"Iby Stout",1800.0}
	};

	double* pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	
	
	cout << "Wyliczanie rzeczy pana E.:\n";
	cout << SumArray(things, 6) << endl;
	int liczba_e = sizeof(things) / sizeof(int);
	cout << "laczna liczba przedmiotow: " << liczba_e << endl;
	

	cout << "Wyliczanie dlugow pana E:\n";      
	cout << SumArray(pd, 3) << endl;
	cout << "laczna liczba przedmiotow: " << 3;

	return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
	using namespace std;
	T suma = 0;
	cout << "szablon A\n";
	for (int i = 0; i < n; i++)
		suma += arr[i];
	return suma;
}

template <typename T>
T SumArray(T* arr[], int n)
{
	using namespace std;
	T suma = 0;
	cout << "szablon B\n";
	for (int i = 0; i < n; i++)
		suma += *arr[i];
	return suma;
}




