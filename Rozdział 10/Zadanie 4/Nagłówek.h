#include <iostream>
using namespace std;


namespace SALES
{
	
	class Sales
	{
	private:
		enum { QUARTERS = 4 };
		double sales[QUARTERS];
		double average;
		double max;
		double min;

	public:
		Sales();
		
		Sales(const double ar[], int n);
		void showSales() const;

	};


}

