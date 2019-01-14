#include <iostream>

using namespace std;

int main()
{

	double a = 0;

	double b = 0;

	double result = 0;

	double choice = 0;

	cout <<"Enter the number a : ";
	cin >> a;
	cout << endl;
	cout << "Enter the number b : ";
	cin >> b;
	cout << endl;

	choise_1:

	cout << endl << " | Choose an action :  \n 1 Addition \n 2 Subtraction \n 3 Multiplication \n 4 Division \n \n";

	cin >> choice;

	if (choice == 1)
	{
		result = a + b;
	}
	else if(choice == 2)
	{
		result = a - b;
	}
	else if (choice == 3)
	{
		result = a * b;
	}
	else if (choice == 4)
	{
		result = a / b;
	}
	else
	{
		cout << endl << " |  This action is not listed \n" << endl;
		goto choise_1;
	}

	cout << endl << " |  Result = " << result << endl;

	cout << endl << "..." << endl;
	
	double Stop_prog; cin >> Stop_prog;

	return 0;

}