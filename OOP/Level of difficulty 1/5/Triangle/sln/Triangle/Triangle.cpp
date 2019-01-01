#include "pch.h"

#include <iostream>

using namespace std;

const double P = 3.14;

class Triangle
{

public:

	Triangle()
	{
		a = 0;

		b = 0;

		Angle = 0;

		Set_a_b_angle();

		S = 0.5 * a * b * sin(Angle * P/180 );
	}

	void Set_a_b_angle()
	{
		cout << endl << "       Side a: ";
		cin >> a;
		cout << endl;

		cout << "       Side b: ";
		cin >> b;
		cout << endl;

		cout << "       Angle between them: ";
		cin >> Angle;
		cout << endl;
	}

	void Print_All()
	{
		cout << " -----------------------------------------" << endl;
		cout << endl << "       a = " << a << endl;
		cout << endl << "       b = " << b << endl;
		cout << endl << "       Angle = " << Angle << endl;
		cout << endl << "       Area of a triangle = " << S << endl;
	}

private:

	double a;

	double b;

	double Angle;

	double S;

};

int main()
{

	Triangle Tri;

	Tri.Print_All();

	return 0;
}