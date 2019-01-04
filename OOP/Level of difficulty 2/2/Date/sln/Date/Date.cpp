#include "pch.h"

#include <iostream>

using namespace std;

class Date
{

public:

	Date()
	{
		Set_D_M_Y();
	}

	void Set_D_M_Y()
	{
		cout << endl << "      |   Year: ";
		cin >> Year;
		cout << endl;

		M_Choice:

		cout << endl << "      |   Month: ";
		cin >> Month;

		if (Month > 12 || Month < 0)
		{
			cout << endl << "      |   Month: (1 - 12)! " << endl;
			goto M_Choice;
		}
		cout << endl;

		D_Choice:

		cout << endl << "      |   Day: ";
		cin >> Day;

		if (Day < 0 || Day > 31)
		{
			cout << endl << "      |   Day: (1 - 31)!" << endl;
			goto D_Choice;
		}
		else if (Day == 31)
		{
			if (Month != 1 && Month != 3 && Month != 5 && Month != 7 && Month != 8 && Month != 10 && Month != 12)
			{
				cout << endl << "      |   Day: (1 - 30)! ((31) 1, 3, 5, 7, 8, 10, 12)" << endl;
				goto D_Choice;
			}
		}
		else
		{

		}
	}

	void Print_1()
	{
		cout << endl << " -------------------------------------------------" << endl;
		cout << endl << "  >       " << Day << "." << Month << "." << Year << endl;
		cout << endl << " -------------------------------------------------" << endl;
	}

	void Print_2()
	{
		cout << endl << " -------------------------------------------------" << endl;
		cout << endl << "  >       " << Day << "th ";

		switch (Month)
		{
		case 1:
			cout << "January ";
			break;
		case 2:
			cout << "February ";
			break;
		case 3:
			cout << "March ";
			break;
		case 4:
			cout << "April ";
			break;
		case 5:
			cout << "May ";
			break;
		case 6:
			cout << "June ";
			break;
		case 7:
			cout << "July ";
			break;
		case 8:
			cout << "August ";
			break;
		case 9:
			cout << "September ";
			break;
		case 10:
			cout << "October ";
			break;
		case 11:
			cout << "November ";
			break;
		case 12:
			cout << "December ";
			break;
		}

		cout << Year << endl;

		cout << endl << " -------------------------------------------------" << endl;
	}

private:

	int Day;

	int Month;

	int Year;

};

int main()
{

	Date myDate;

	myDate.Print_1();

	myDate.Print_2();
	
	return 0;

}