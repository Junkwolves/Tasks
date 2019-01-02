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

		S = P * pow(Radius, 2) * Height;
	}

	Cylinder()
	{
		Radius = 0;
		Height = 0;

		Set_Width_Height();

		S = P * pow(Radius, 2) * Height;
	}

	void Set_Width_Height()
	{
		cout << endl << "       Radius: ";
		cin >> Radius;
		cout << endl;

		cout << "       Height: ";
		cin >> Height;
		cout << endl;
	}

	void Print_All()
	{
		cout << " -----------------------------------------" << endl;
		cout << endl << "       Height = " << Height << endl;
		cout << endl << "       Radius = " << Radius << endl;
		cout << endl << "       S = " << S << endl;
	}

private:

	double Radius;

	double Height;

	double S;

};

int main()
{

	Cylinder Cyl;

	Cyl.Print_All();

	return 0;
}