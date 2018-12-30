#include "pch.h"

#include <iostream>

using namespace std;

class Triangle
{

public:

	Triangle(double Dlina_osnovy, double Height)
	{
		this->Dlina_osnovy = Dlina_osnovy; 

		this->Height = Height;

		Area_of_a_triangle = 0.5 * Height * Dlina_osnovy;
	}

	Triangle()
	{
		Dlina_osnovy = 0;
		Height = 0;

		Set_Width_Height();

		Area_of_a_triangle = 0.5 * Height * Dlina_osnovy;
	}

	void Set_Width_Height()
	{
		cout << endl << "       Vvedite dlinu osnovy: ";
		cin >> Dlina_osnovy;
		cout << endl;

		cout << "       Vvedite vysotu: ";
		cin >> Height;
		cout << endl;
	}

	void Print_All()
	{
		cout << " -----------------------------------------" << endl;
		cout << endl << "       Height = " << Height << endl;
		cout << endl << "       Dlina osnovy = " << Dlina_osnovy << endl;
		cout << endl << "       Area of a triangle = " << Area_of_a_triangle << endl;
	}

private:

	double Dlina_osnovy;

	double Height;

	double Area_of_a_triangle;

};

int main()
{

	Triangle Tri;

	Tri.Print_All();

	return 0;
}