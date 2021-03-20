#include <iostream>
using namespace std;

class Plorg
{

private:
	static const int LIMIT = 19;
	char name[LIMIT];
	int sytosc;

public:
	Plorg();
	Plorg(const char* str, const int s = 20);
	void zmien_sytosc(const int s);
	void pokaz() const;

};
