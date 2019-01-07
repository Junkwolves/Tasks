#include "pch.h"

#include <iostream>

using namespace std;

class Money
{

public:

	Money()
	{

		Set_F_S();

		all_money = first * second;

	}

	Money(double first, double second, double item_price)
	{

		this->first = first;

		this->second = second;

		this->item_price = item_price;

		all_money = first * second;

	}

	void Print_All()
	{

		cout << endl << "         =----=-----------------------=----=         " << endl;
		cout << endl << "                  >   Face value = " << first << endl;
		cout << endl << "                  >   Quantity = " << second << endl;
		cout << endl << "                  >   Item price = " << item_price << endl;
		cout << endl << "                  >   All money = " << all_money << endl;
		cout << endl << "         =----=-----------------------=----=         " << endl;

		if (check_item_price())
		{
			cout << endl << "             >   You can buy an item     " << endl;
		}
		else 
		{
			cout << endl << "             >   You can't buy an item     " << endl;
		}

		cout << endl << "         =----=-----------------------=----=         " << endl;

		if (!check_item_price())
		{
			cout << endl << "             >   You can buy 0 items     " << endl;
		}
		else
		{

			can_buy = all_money / item_price;

			cout << endl << "             >   You can buy " << can_buy << " items     " << endl;

		}
	}

	Money& operator++() // postfix
	{

		++first;
		++second;

		all_money = first * second;

		return *this;
	}

	Money& operator--() // postfix
	{

		--first;
		--second;

		all_money = first * second;

		return *this;
	}

	Money& operator +(double number)
	{

		second = second + number;

		return *this;
	}

	bool operator !()
	{
		if (second != 0)
		{
			cout << endl << "             >   True      " << endl;
			return true;
		}
		else
		{
			cout << endl << "             >   False      " << endl;
			return false;
		}
	}

private:

	double first = 0; // Face value

	double second = 0; // Quantity

	double all_money = 0;

	double item_price = 0;

	double can_buy = 0;

	void Set_F_S()
	{

		cout << endl << "            |   Enter face value: ";
		cin >> first;
		cout << endl;

		cout << endl << "            |   Enter quantity: ";
		cin >> second;
		cout << endl;

		cout << endl << "            |   Enter item price: ";
		cin >> item_price;
		cout << endl;

	}

	bool check_item_price()
	{
		if (item_price <= all_money) { return true; }
		else { return false; }
	}

};

int main()
{

	Money myMoney;

	myMoney.Print_All();

	myMoney + 3;

	--myMoney;

	++myMoney;

	myMoney.Print_All();

	!myMoney;

	return 0;

}