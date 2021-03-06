#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <new>
using namespace std;

struct chaff
{
	char dross[20];
	int slag;
};

char buffer1[50];
char buffer2[500];

int main()
{
	char tablica[100];
    chaff* pt1 = new (tablica) chaff[2];
    strcpy(pt1[0].dross, "Maciej");
    strcpy(pt1[1].dross, "Michal");

    pt1[0].slag = 10;
    pt1[1].slag = 20;

    chaff* pt2 = new chaff[2];
    strcpy(pt2[0].dross, "Wojtek");
    strcpy(pt2[1].dross, "Alicja");

    pt2[0].slag = 30;
    pt2[1].slag = 40;


    for (int i = 0; i < 2; i++) {
        std::cout << "pt1 ....... " << std:: endl;
        std::cout << "lancuch : " << pt1[i].dross << std::endl;
        std::cout << "liczba : " << pt1[i].slag << std::endl;
        std::cout << "pt2 =......." << std::endl;
        std::cout << "lancuch : " << pt2[i].dross << std::endl;
        std::cout << "liczba : " << pt2[i].slag << std::endl;
    }
    delete[] pt2;

	
}
#endif
