#include <iostream>
using namespace std;

static const int Len = 40;

class Golf
{
private:

	char fullname[Len];
	int handicap;

public:

	Golf(const char* name, int hc);
	~Golf();
	

	void handicap_n(int hc);
	void showgolf() const;

};
