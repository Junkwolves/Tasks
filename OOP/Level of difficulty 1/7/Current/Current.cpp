#include <iostream>

using namespace std;

class Current
{

public:

	Current(double Voltage, double Resistance)
	{
		this->Voltage = Voltage;

		this->Resistance = Resistance;

		Amperage = pow(Voltage, 2) / Resistance;
	}

	Current()
	{
		Voltage = 0;
		Resistance = 0;

		Set_Width_Height();

		Amperage = pow(Voltage, 2) / Resistance;
	}

	void Set_Width_Height()
	{
		cout << endl << "       Voltage: ";
		cin >> Voltage;
		cout << endl;

		cout << "       Resistance: ";
		cin >> Resistance;
		cout << endl;
	}

	void Print_All()
	{
		cout << " -----------------------------------------" << endl;
		cout << endl << "       Voltage = " << Voltage << endl;
		cout << endl << "       Resistance = " << Resistance << endl;
		cout << endl << "       Amperage = " << Amperage << endl;
	}

private:

	double Voltage;

	double Resistance;

	double Amperage;

};

int main()
{

	Current Cur;

	Cur.Print_All();

	return 0;
}