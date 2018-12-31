#include "pch.h"

#include <iostream>

using namespace std;

const double P = 3.14;

class Circle
{

public:

	Circle()
	{
		R = 0;

		Set_R();

		D = R * 2;

		S = P * pow(R, 2);
	}

	void Set_R()
	{
		cout << endl << "       Enter the radius: ";
		cin >> R;
		cout << endl;
	}

	void Print_All()
	{
		cout << " ----------------------------------------- " << endl;
		cout << endl << "       Diameter = " << D << endl;
		cout << endl << "       Radius = " << R << endl;
		cout << endl << "       S = " << S << endl;
	}

private:

	double D;

	double R;

	double S;

};

int main()
{

	Circle Circ;

	Circ.Print_All();

	return 0;
}