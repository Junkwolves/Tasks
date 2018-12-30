#include "pch.h"

#include <iostream>

using namespace std;

class Rectangle
{

public:

	Rectangle(int Width, int Height)
	{
		this->Width = Width;

		this->Height = Height;

		Perimeter = (Width + Height) * 2;
	}

	Rectangle()
	{
		Width = 0;
		Height = 0;

		Set_Width_Height();

		Perimeter = (Width + Height) * 2;
	}

	void Set_Width_Height()
	{
		cout << endl << "       Enter width: ";
		cin >> Width;
		cout << endl;

		cout << "       Enter height: ";
		cin >> Height;
		cout << endl;
	}

	void Print_All()
	{
		cout << " -----------------------------------------" << endl;
		cout << endl << "       Height = " << Height << endl;
		cout << endl << "       Width = " << Width << endl;
		cout << endl << "       Perimeter = " << Perimeter << endl;
	}

private:

	int Width;

	int Height;

	int Perimeter;

};

int main()
{

	Rectangle Rec;

	Rec.Print_All();

	return 0;
}