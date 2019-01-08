#include "pch.h"

#include <iostream>

using namespace std;

class Rectangle
{

public:

	Rectangle()
	{

		Set_a_b();

		S_P();

	}

	Rectangle(int a, int b)
	{

		this->a = a;

		this->b = b;

		S_P();

	}

	void Print_All()
	{

		cout << endl << "              =-----------------------=" << endl;
		cout << endl << "                  >   a = " << a << endl;
		cout << endl << "                  >   b = " << b << endl;
		cout << endl << "                  >   S = " << S << endl;
		cout << endl << "                  >   P = " << P << endl;
		cout << endl << "              =-----------------------=" << endl;
	}

	void S_P()
	{
		S = a * b;

		P = (a + b) * 2;
	}

	Rectangle& operator++() // postfix
	{

		++a;
		++b;

		S_P();

		return *this;
	}

	Rectangle& operator--() // postfix
	{

		--a;
		--b;

		S_P();

		return *this;
	}

	bool operator==(Rectangle &OtherPoint)
	{

		if (a == b)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	Rectangle& operator*( int value)
	{

		a = a * value;

		b = b * value;

		S_P();

		return *this;
	}

private:

	int a = 0;

	int b = 0;

	int	S = 0;

	int	P = 0;

	void Set_a_b()
	{

		cout << endl << "            |   Enter a: ";
		cin >> a;
		cout << endl;

		cout << endl << "            |   Enter b: ";
		cin >> b;
		cout << endl;

	}

};

int main()
{

	Rectangle myRectangle;

	myRectangle.Print_All();

	cout << endl << "         =----=-----------------------=----=         " << endl;

	cout << endl << "  =------------------------------------------------=" << endl;

	if (myRectangle == myRectangle)
	{
		cout << endl << "         Side a is equal to side b = Square          " << endl;
	}
	else
	{
		cout << endl << "      Side a is not equal to side b = Not square          " << endl;
	}

	cout << endl << "  =------------------------------------------------=" << endl;

	/*

	++myRectangle;

	myRectangle.Print_All();

	--myRectangle;

	myRectangle.Print_All();

	*/

	myRectangle * 2;

	myRectangle.Print_All();

	return 0;

}