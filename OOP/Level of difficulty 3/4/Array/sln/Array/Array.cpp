#include "pch.h"

#include <iostream>

using namespace std;

class Array
{

public:

	Array()
	{
		cout << endl << "            |   Enter Array Size: ";
		cin >> SIZE;
		cout << endl;

		Filling_Array();
	}

	Array(int SIZE)
	{

		this->SIZE = SIZE;

		Filling_Array();

	}

	void Filling_Array()
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << endl << "            |   Array[" << i << "] = ";
			cin >> Array_1[i];
			cout << endl;
		}
	}

	void Print_Array()
	{
		cout << endl << "              =-----------------------=" << endl;

		for (int i = 0; i < SIZE; i++)
		{
			cout << endl << "            |   Array[" << i << "] = " << Array_1[i] << endl;
		}

		cout << endl << "              =-----------------------=" << endl;
	}

	Array& operator++() // postfix
	{

		for (int i = 0; i < SIZE; i++)
		{
			++Array_1[i];
		}

		return *this;

	}

	Array& operator--() // postfix
	{

		for (int i = 0; i < SIZE; i++)
		{
			--Array_1[i];
		}

		return *this;

	}


	bool operator !()
	{

		for (int i = 0; i < SIZE; i++)
		{
			if(Array_1[i] > Array_1[i + 1])
			{
				return false;
			}
		}

		return true;

	}

	Array& operator*(int value)
	{

		for (int i = 0; i < SIZE; i++)
		{
			Array_1[i] = Array_1[i] * value;
		}

		return *this;

	}

private:

	int SIZE;

	int *Array_1 = new int [SIZE];

};

int main()
{

	Array myArray;

	myArray.Print_Array();

	/*

	myArray * 2;

	myArray.Print_Array();

	*/

	//-----------------------------------------------------------

	/*

	if (!myArray)
	{
		cout << "+";
	}
	else
	{
		cout << "-";
	}

	*/

	//-----------------------------------------------------------

	/*

	++myArray;

	myArray.Print_Array();

	--myArray;

	myArray.Print_Array();

	*/

	return 0;

}