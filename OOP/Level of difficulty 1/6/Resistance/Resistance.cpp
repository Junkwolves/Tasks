#include <iostream>

using namespace std;

class Resistance
{

public:

	Resistance(double R1, double R2)
	{
		this->R1 = R1;

		this->R2 = R2;

		Res = 1 / ((1 / R1) + (1 / R2));
	}

	Resistance()
	{
		R1 = 0;
		R2 = 0;

		Set_R1_R2();

		Res = 1 / ((1 / R1) + (1 / R2));
	}

	void Set_R1_R2()
	{
		cout << endl << "       R1: ";
		cin >> R1;

		cout << endl << "       R2: ";
		cin >> R2;
	}

	void Print_All()
	{
		cout << " -----------------------------------------" << endl;
		cout << endl << "       R1 = " << R1 << " Om "<< endl;
		cout << endl << "       R2 = " << R2 << " Om " << endl;
		cout << endl << "       Resistance = " << Res << " Om " << endl;
	}

private:

	double R1;

	double R2;

	double Res;

};

int main()
{

	Resistance Res;

	Res.Print_All();

	return 0;
}