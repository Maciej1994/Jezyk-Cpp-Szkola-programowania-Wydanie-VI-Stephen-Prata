#include <iostream>
using namespace std;


struct customer
{

	char fullname[35];
	double payment;

};

typedef customer Item;


class Stack
{
private:

    enum { MAX = 10 };    
    Item items[MAX];     
    int x;            
public:

    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item& item);     
    bool pop(Item& item); 
    void funkcja();
};
