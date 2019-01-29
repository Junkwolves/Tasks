#include <iostream>
#include <string>

using namespace std;

class Person
{

public:

	Person()
	{
		name = new char[20];
		strcpy(name, "Username");
		weight = 0;
		height = 0;
		SetData();
	}

	Person(const char* Username, int weight, int height)
	{
		name = new char[20];
		strcpy(name, Username);
		this->weight = weight;
		this->height = height;
	}

	~Person()
	{
		delete[] name;
		cout << "\n\t> Destructor is executed \n";
	}

private:

	char *name;
	int weight;
	int height;

	void SetData();
	friend void getData(Person&);
	friend void advise(Person& object);

};

void Person::SetData()
{
	cout << "\t> Name: ";
	cin >> name;
	cout << "\n \t> Weight (kg): ";
	cin >> weight;
	cout << "\n\t> Height (cm): ";
	cin >> height;
	cout << "\n\n";
}

void getData(Person& object)
{
	cout << "\tName: " << object.name << " \t Weight: " << object.weight << " kg\t Height: " << object.height << " cm\n\n";
}

void advise(Person& object)
{
	if (object.height >= 150 && object.height <= 160)
	{
		if (object.weight == 57)
		{
			cout << "\n\t> Congratulations, your weight is perfect\n";
		}
		else if (object.weight > 57)
		{
			cout << "\n\t> It will be helpful for you to eat less\n";
		}
		else
		{
			cout << "\n\t> It will be helpful for you to eat more\n";
		}
	}
	else if (object.height >= 160 && object.height <= 170)
	{
		if (object.weight == 67)
		{
			cout << "\n\t> Congratulations, your weight is perfect\n";
		}
		else if (object.weight > 67)
		{
			cout << "\n\t> It will be helpful for you to eat less\n";
		}
		else
		{
			cout << "\n\t> It will be helpful for you to eat more\n";
		}
	}
	else if (object.height >= 170 && object.height <= 180)
	{
		if (object.weight == 77)
		{
			cout << "\n\t> Congratulations, your weight is perfect\n";
		}
		else if (object.weight > 77)
		{
			cout << "\n\t> It will be helpful for you to eat less\n";
		}
		else
		{
			cout << "\n\t> It will be helpful for you to eat more\n";
		}
	}
	else if (object.height >= 180 && object.height <= 190)
	{
		if (object.weight == 87)
		{
			cout << "\n\t> Congratulations, your weight is perfect\n";
		}
		else if (object.weight > 87)
		{
			cout << "\n\t> It will be helpful for you to eat less\n";
		}
		else
		{
			cout << "\n\t> It will be helpful for you to eat more\n";
		}
	}
	else
	{
		cout << "\n\t> Sorry, your height is not listed in the table (MIN = 150 MAX = 190)\n\n";
	}
}

int main()
{

	cout << "\n\t>-------------------------START-------------------------<\n \n";

	Person Bob("Bob", 80, 187);

	getData(Bob);

	advise(Bob);

	cout << "\n\t>-------------------------------------------------------<\n \n";

	Person Dorothy;

	getData(Dorothy);

	advise(Dorothy);

	return 0;
}