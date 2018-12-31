#include "pch.h"

#include <iostream>

using namespace std;

const double P = 3.14;

class Cylinder
{

public:

	Cylinder(double Radius, double Height)
	{
		this->Radius = Radius;

		this->Height = Height;

		Volume = P * pow(Radius, 2) * Height;
	}

	Cylinder()
	{
		Radius = 0;
		Height = 0;

		Set_Radius_Height();

		Volume = P * pow(Radius, 2) * Height;
	}

	void Set_Radius_Height()
	{
		cout << endl << "       Enter radius: ";
		cin >> Radius;
		cout << endl;

		cout << "       Enter height: ";
		cin >> Height;
		cout << endl;
	}

	void Print_All()
	{
		cout << " -----------------------------------------" << endl;
		cout << endl << "       Height = " << Height << endl;
		cout << endl << "       Radius = " << Radius << endl;
		cout << endl << "       Volume = " << Volume << endl;
	}

private:

	double Radius;

	double Height;

	double Volume;

};

int main()
{

	Cylinder Cyl;

	Cyl.Print_All();

	return 0;
}