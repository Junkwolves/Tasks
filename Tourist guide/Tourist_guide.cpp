#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <stdio.h>

using namespace std;

struct hoteldb
{
	char hotelname[100];
	int hotelprice;
	int hotelrating;
};

struct excursiondb
{
	char excursionname[200];
	char excursioninfio[100];
	char excursiondata[40];
	char excursiontime[40];
	int excursionprice;
};

struct sightdb
{
	char sightname[100];
	char sightlocation[100];
	int  sightrating;
};

void hotelnamefind(hoteldb *hotels, int n)
{
	int l = 0;
	char q[20];
	cout << "\t                       - Enter the name of the hotel:   "; cin >> q; cout << endl;
	for (int i = 0; i <= n; ++i)
	{
		if (strcmp(hotels[i].hotelname, q) == 0)
		{
			cout << "\t  The name of the hotel:" << "  " << "\t         Price UAH/day:" << "  " << "\t             Hotel rating:" << endl << endl;
			cout << "\t  " << left << setw(39) << hotels[i].hotelname << setw(36) << hotels[i].hotelprice << setw(23) << hotels[i].hotelrating << endl;
			l++;
		}
	}
	if (l == 0) {
		cout << "\t                       - No hotels found with that name!   \n";
	}
}

void output_sights(sightdb *sights, int w)
{
	cout << "\t |_____________________________________LIST OF SIGHTS_____________________________________|" << endl << endl;
	cout << "\t  Names of sight:" << "                        " << "Sight location:" << "                     " << "Sight rating:" << endl << endl;
	for (int i = 1; i < w; i++)
	{
		cout << "\t  " << left << setw(39) << sights[i].sightname << setw(36) << sights[i].sightlocation << setw(13) << sights[i].sightrating << endl;
	}
}

void output_excursiondb(excursiondb *excursions, int c)
{
	cout << "\t |___________________________________LIST OF EXCURSIONS___________________________________|" << endl << endl;
	cout << "\t  Names of excursions:" << "  " << "Excursion route:" << "           " << "Day and time:" << "  " << "\t        Price UAH:" << endl << endl;
	for (int i = 1; i < c; i++)
	{
		cout << "\t  " << left << setw(22) << excursions[i].excursionname << setw(27) << excursions[i].excursioninfio;
		cout << setw(8) << excursions[i].excursiondata << setw(21) << excursions[i].excursiontime << setw(8) << excursions[i].excursionprice << endl;
	}
}

void output_hoteldb(hoteldb *hotels, int n)
{
	cout << "\t |_____________________________________LIST OF HOTELS_____________________________________|" << endl << endl;
	cout << "\t  The name of the hotel:" << "  " << "\t         Price UAH/day:" << "  " << "\t             Hotel rating:" << endl << endl;
	for (int i = 1; i < n; i++)
	{
		cout << "\t  " << left << setw(39) << hotels[i].hotelname << setw(36) << hotels[i].hotelprice << setw(23) << hotels[i].hotelrating << endl;
	}
}

void input_hoteldb(hoteldb *hotels, int n)
{
	ofstream hdb; string path = "HotelDatabase.txt";
	hdb.open(path, ofstream::app);
	for (int i = 1; i < 2; i++)
	{
		cout << "\t     - Enter the name of the hotel:   "; cin >> hotels[n].hotelname; hdb << " " << hotels[n].hotelname << " "; cout << endl;
		cout << "\t     - Enter price UAH/day:   "; cin >> hotels[n].hotelprice; hdb << hotels[n].hotelprice << " "; cout << endl;
		cout << "\t     - Enter hotel rating from one to one hundred:   "; cin >> hotels[n].hotelrating; hdb << hotels[n].hotelrating; cout << endl;
	}
	hdb.close();
}

void SortHigherToLeast(hoteldb *hotels, int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (hotels[j].hotelprice > hotels[i].hotelprice)
				swap(hotels[j], hotels[i]);
		}
	}
}

void SortSmallestToLargest(hoteldb *hotels, int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (hotels[j].hotelprice < hotels[i].hotelprice)
				swap(hotels[j], hotels[i]);
		}
	}
}

void SortABC(hoteldb *hotels, int n)
{
	hoteldb tmp;
	for (int i = 1; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(hotels[i].hotelname, hotels[j].hotelname) > 0)
			{
				tmp = hotels[i];
				hotels[i] = hotels[j];
				hotels[j] = tmp;
			}
		}
	}
}

int main()
{
	struct hoteldb hotels[20]; struct excursiondb excursions[20]; struct sightdb sights[20];
	int a, h, n = 1, c = 1, w = 1;
	ifstream hdb; string path = "HotelDatabase.txt";
	hdb.open(path);
	if (!hdb.is_open()) {
		cout << "\t     - HotelDatabase.Error: could not open file!" << endl;
	}
	else {
		while (!hdb.eof()) {
			hdb >> hotels[n].hotelname; hdb >> hotels[n].hotelprice; hdb >> hotels[n].hotelrating; n++;
		}
		hdb.close();
	}
	ifstream edb; string pathedb = "ExcursionsDatabase.txt";
	edb.open(pathedb);
	if (!edb.is_open()) {
		cout << "\t     - ExcursionsDatabase.Error: could not open file!" << endl;
	}
	else {
		while (!edb.eof()) {
			edb >> excursions[c].excursionname; edb >> excursions[c].excursioninfio; edb >> excursions[c].excursiondata;
			edb >> excursions[c].excursiontime; edb >> excursions[c].excursionprice; c++;
		}
		edb.close();
	}
	ifstream sdb; string pathsdb = "sightdb.txt";
	sdb.open(pathsdb);
	if (!sdb.is_open()) {
		cout << "\t     - SightDatabase.Error: could not open file!" << endl;
	}
	else {
		while (!sdb.eof()) {
			sdb >> sights[w].sightname; sdb >> sights[w].sightlocation; sdb >> sights[w].sightrating; w++;
		}
		sdb.close();
	}
	cout << endl; cout << "\t                                Welcome to the tourist guide          \t" << endl; cout << endl;
	cout << "\t                                        City - Kiev          \t" << endl; cout << endl; choice:
	cout << "\t  ----------------------------------------------------------------------------------------" << endl;
	cout << endl;  cout << "\t                       - To view the list of hotels, enter  1   \t" << endl; cout << endl;
	cout << "\t                       - To see a list of available excursions, enter  2   \t" << endl; cout << endl;
	cout << "\t                       - To view the list of attractions in the city, enter  3   \t" << endl; cout << endl;
	cout << "\t                       - To add a hotel to the list, enter  4   \t" << endl; cout << endl;
	cout << "\t                       - To sort hotels, enter  5   \t" << endl; cout << endl;
	cout << "\t                       - To search by hotel name, enter  6   \t" << endl; cout << endl;
	cout << "\t                       - To exit the program, enter  7   \t" << endl; cout << endl;

	cout << "\t  ----------------------------------------------------------------------------------------" << endl;
	cout << "\t                       - Enter a number to select the action:   "; cin >> a;
	cout << "\t  ----------------------------------------------------------------------------------------" << endl;
	switch (a)
	{
	case 1:
	{
		system("CLS");
		output_hoteldb(hotels, n);
		goto choice;
		break;
	}
	case 2:
	{
		system("CLS");
		output_excursiondb(excursions, c);
		goto choice;
		break;
	}
	case 3:
	{
		system("CLS");
		output_sights(sights, w);
		goto choice;
		break;
	}
	case 4:
	{
		system("CLS");
		input_hoteldb(hotels, n);
		n++;
		goto choice;
		break;
	}
	case 5:
	{
		system("CLS");
	choicesorthl:
		cout << "\t                       - To sort out from greater to less enter  1" << endl;
		cout << "\t                       - To sort out from less to greater enter  2" << endl;
		cout << "\t                       - To sort alphabetically, enter  3" << endl;
		cout << "\t  ----------------------------------------------------------------------------------------" << endl;
		cout << "\t                       - Enter a number to select the action:   ";
		cin >> h;
		switch (h)
		{
		case 1:
		{
			system("CLS");
			SortHigherToLeast(hotels, n);
			cout << "\t  ----------------------------------------------------------------------------------------" << endl;
			output_hoteldb(hotels, n);
			goto choice;
			break;
		}
		case 2:
		{
			system("CLS");
			SortSmallestToLargest(hotels, n);
			cout << "\t  ----------------------------------------------------------------------------------------" << endl;
			output_hoteldb(hotels, n);
			goto choice;
			break;
		}
		case 3:
		{
			system("CLS");
			SortABC(hotels, n);
			cout << "\t  ----------------------------------------------------------------------------------------" << endl;
			output_hoteldb(hotels, n);
			goto choice;
			break;
		}
		default:
			system("CLS");
			cout << "\t  ----------------------------------------------------------------------------------------" << endl;
			cout << "\t                    - Invalid number entered   \t" << endl;
			cout << "\t  ----------------------------------------------------------------------------------------" << endl;
			goto choicesorthl;
		}
		break;
	}
	case 6:
	{
		system("CLS");
		hotelnamefind(hotels, n);
		goto choice;
		break;
	}
	case 7:
	{
		system("CLS");
		return(0);
		break;
	}
	default:
		system("CLS");
		cout << "\t  ----------------------------------------------------------------------------------------" << endl;
		cout << "\t                    - Invalid number entered   \t" << endl;
		cout << "\t  ----------------------------------------------------------------------------------------" << endl;
		goto choice;
	}
}