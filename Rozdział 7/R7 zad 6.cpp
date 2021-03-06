#include <iostream>
#include <algorithm>
using namespace std;

 int fill_array(double tablica[], const int Size);
 void show_arry(double tablica[], const int Size);
 void reverse_arry(double tablica[], const int Size);

 const int Size = 5;
 double tablica[Size];
 

 int main()
{
    fill_array(tablica,Size);

     cout << " liczby: " << endl;

     show_arry(tablica,Size);
     
     cout << " odrwocenie kolejnosci: " << endl;

     reverse(tablica, tablica + 5); // funkcja zmieniajaca kolejnosc objektow w tablicy #include<algorithm>
     reverse_arry(tablica, Size);    
     
}

 int fill_array(double tablica[], const int Size)
 {
     cout << " podaj 1 liczbe : ";
     int i = 0;
     while (i < Size && cin >> tablica[i]) {

         if (++i < Size) {
             cout << " podaj " << i + 1 << " liczbe : ";
         }

     }
        
     return i;
 }
 void show_arry(double tablica[], const int Size)
 {
     for (int i = 0; i < Size; i++) {
         cout << tablica[i] << endl;
     }

 }


 void reverse_arry(double tablica[], const int Size)
 {
    
     for (int i = 0; i < Size; i++)
     {
         cout << tablica[i] <<endl;
     }   

 }

