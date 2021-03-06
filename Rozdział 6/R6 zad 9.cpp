#include <iostream>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;

struct dane
{
	string nazwiska;
	double kwota;
};

int main()
{
	const int SIZE = 100;
	char filename[SIZE];
	ifstream inFile;

	cout << " podaj nazwe pliku z danymi: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);

	if (!inFile.is_open()) {
		cout << "otwarcie pliku nie powiodlo sie";
		exit(EXIT_FAILURE);
	}

    
    inFile.close();
    
    return 0;
}
