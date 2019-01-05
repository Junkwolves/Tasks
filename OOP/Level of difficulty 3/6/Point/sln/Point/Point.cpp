#include "pch.h"

#include <iostream>

#include <string>

using namespace std;

class Point
{

public:

	Point()
	{

		Set_x_y();

	}

	Point(int x, int y)
	{

		this->x = x;

		this->y = y;
	}

	void Print_All()
	{

		cout << endl << "              =-----------------------=" << endl;
		cout << endl << "                  >   x = " << x << endl;
		cout << endl << "                  >   y = " << y << endl;
		cout << endl << "              =-----------------------=" << endl;
	}

	Point& operator++() // postfix
	{

		++x;
		++y;

		return *this;
	}

	Point& operator--() // postfix
	{

		--x;
		--y;

		return *this;
	}

	bool operator==(Point &OtherPoint)
	{

		if (this->x == OtherPoint.x && this->y == OtherPoint.y)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

private:

	int x = 0;

	int y = 0;

	void Set_x_y()
	{

		cout << endl << "            |   Enter x: ";
		cin >> x;
		cout << endl;

		cout << endl << "            |   Enter y: ";
		cin >> y;
		cout << endl;

	}

};

int main()
{
   
	Point myPoint;

	myPoint.Print_All();

	++myPoint; 
	cout << "                      ++myPoint;      ";

	myPoint.Print_All();

	--myPoint;
	cout << "                      --myPoint;      ";

	myPoint.Print_All();

	cout << endl << "         =----=-----------------------=----=         " << endl;

	Point myPoint_2(2, 6);

	cout << "        myPoint ";
	myPoint.Print_All();

	cout << "        myPoint_2 ";
	myPoint_2.Print_All();

	if (bool Check = myPoint == myPoint_2)
	{
		cout << endl << "            =-- myPoint == myPoint_2 --=" << endl;
	}
	else
	{
		cout << endl << "            =-- myPoint != myPoint_2 --=" << endl;
	}

	return 0;

}