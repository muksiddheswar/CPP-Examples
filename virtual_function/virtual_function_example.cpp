// CPP program to illustrate
// concept of Virtual Functions

#include<iostream>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class\n";
	}

	void show()
	{
		cout << "show base class\n";
	}
};

class derived : public base {
public:
	void print()
	{
		cout << "print derived class\n";
	}

	void show()
	{
		cout << "show derived class\n";
	}
};

class derived2 : public base {
public:
	void print()
	{
		cout << "print second derived class\n";
	}

	void show()
	{
		cout << "show second derived class\n";
	}
};

int main()
{
	base *bptr;
	derived d;
	derived2 d2;
	bptr = &d;

	// Virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();

	bptr = &d2;
	bptr->print(); // This is where the vtable lookup happens.

	d.print(); // Compiletime binding.
	
	return 0;
}
