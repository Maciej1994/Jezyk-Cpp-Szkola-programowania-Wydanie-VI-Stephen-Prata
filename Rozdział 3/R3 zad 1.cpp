#include <iostream>
using namespace std;

const float cal = 2.54;
const float stopa = 30.48;

int wczytanie_wzrostu();
float cm_na_cale(float cm);
float cm_na_stopy(float cm);
void prezentacja(float cale, float stopy, float cm);



int main()
{
	int cm = wczytanie_wzrostu();
	float cale = cm_na_cale(cm);
	float stopy = cm_na_stopy(cm);
	prezentacja(cm , cale, stopy);
   
}

int wczytanie_wzrostu()
{
	cout << "podaj wzrost w cm: " << endl;
	int wzrost;
	cin >> wzrost;
	return wzrost;
}

float cm_na_cale(float cm)
{
	return cm / cal;
}

float cm_na_stopy(float cm)
{
	return cm / stopa;
}

void prezentacja(float cm, float cale, float stopy)
{
	cout << cm << " centymetrow to : " << cale << " cali i " << stopy << " stop" << endl;
}