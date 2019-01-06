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

	Circle(double R)
	{
		this->R = R;

		D = R * 2;

		S = P * pow(R, 2);
	}

	void Set_R()
	{
		cout << endl << "   =---------Set_R=---------=" << endl;
		cout << endl << "        |  Enter R: ";
		cin >> R;
		cout << endl;
		cout << endl << "   =---------Set_R=---------=" << endl;

	}

	void Print_All()
	{
		cout << endl << "   =---------Print_All=---------=" << endl;
		cout << endl << "        |   Diameter = " << D << endl;
		cout << endl << "        |   Radius = " << R << endl;
		cout << endl << "        |   S = " << S << endl;
		cout << endl << "   =---------Print_All=---------=" << endl;
	}

	bool operator >(Circle & Other_Circle)
	{
		cout << endl << "   =---------operator >=---------=" << endl;
		if (this->R > 0)
		{
			cout << endl << "          R > 0  =  true         " << endl;
			cout << endl << "   =---------operator >=---------=" << endl;
			return true;
		}
		else
		{
			cout << endl << "          R > 0  =  false        " << endl;
			cout << endl << "   =---------operator >=---------=" << endl;
			return false;
		}
	}

	Circle& operator +()
	{

		cout << endl << "   =---------operator +=---------=" << endl;

		R++;
		R++;
		cout << endl << "              R + 2               " << endl;
		D = R * 2;

		S = P * pow(R, 2);

		cout << endl << "   =---------operator +=---------=" << endl;

		return *this;
	}

private:

	double R;

	double D;

	double S;

};

int main()
{ 

	Circle Test_Circle_1;

	+Test_Circle_1;

	Test_Circle_1.Print_All();

	Circle Test_Circle_2(1);

	Test_Circle_1 > Test_Circle_2;

	return 0;
}