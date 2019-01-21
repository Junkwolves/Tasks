#include "pch.h"

#include <iostream>

using namespace std;

class DoubleArray
{

public:

	DoubleArray()
	{

		int number;

		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)

			{

				cout << " Double_Array [" << i << "] [" << j << "] = ";

				cin >> number;

				Double_Array[i][j] = number;

				cout << endl;

			}

		}
	}

	void print_array()
	{

		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)

			{

				cout << " " << Double_Array[i][j] << " ";

			}

			cout << endl << endl;

		}

		cout << endl;
	}

	void operator--()
	{
		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)

			{

				--Double_Array[i][j];

			}

		}
	}

	void operator++()
	{
		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)

			{

				++Double_Array[i][j];

			}

		}
	}

	void operator*(int number)
	{
		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)

			{

				Double_Array[i][j] = Double_Array[i][j] * number;

			}

		}
	}

private:

	double Double_Array[3][3]{};

};

int main()
{

	DoubleArray DoAr;

	DoAr.print_array();

	--DoAr;

	DoAr.print_array();

	++DoAr;

	DoAr.print_array();

	DoAr * 2;

	DoAr.print_array();

	return 0;
}