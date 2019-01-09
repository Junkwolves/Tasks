#include "pch.h"

#include <iostream>

#include <cmath>

using namespace std;

class Triangle
{

public:

	Triangle()
	{

		Set_a_b_c();

		S_P();

	}

	Triangle(double a, double b, double c)
	{

		this->a = a;

		this->b = b;

		this->c = c;

		S_P();

	}

	void Print_All()
	{

		cout << endl << "              =-----------------------=" << endl;
		cout << endl << "                  >   a = " << a << endl;
		cout << endl << "                  >   b = " << b << endl;
		cout << endl << "                  >   c = " << c << endl;
		cout << endl << "                  >   S = " << S << endl;
		cout << endl << "                  >   P = " << P << endl;
		cout << endl << "              =-----------------------=" << endl;
	}

	void S_P()
	{
		P = (a + b + c) * 2;

		P_P = (a + b + c) / 2;

		S = sqrt(P_P * (P_P - a) * (P_P - b) * (P_P - c));
	}

	Triangle& operator++() // postfix
	{

		++a;
		++b;
		++c;

		S_P();

		return *this;
	}

	Triangle& operator--() // postfix
	{

		--a;
		--b;
		--c;

		S_P();

		return *this;
	}

	bool operator==(Triangle &OtherPoint)
	{

		if (a == b && b == c)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	Triangle& operator*(int value)
	{

		a = a * value;

		b = b * value;

		c = c * value;

		S_P();

		return *this;
	}

private:

	double a = 0;

	double b = 0;

	double c = 0;

	double	S = 0;

	double	P = 0;

	double P_P = 0;

	void Set_a_b_c()
	{

		cout << endl << "            |   Enter a: ";
		cin >> a;
		cout << endl;

		cout << endl << "            |   Enter b: ";
		cin >> b;
		cout << endl;

		cout << endl << "            |   Enter c: ";
		cin >> c;
		cout << endl;

	}

};

int main()
{

	Triangle myTriangle;

	myTriangle.Print_All();

	return 0;

}