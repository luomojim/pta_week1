#include <iostream>
#include <iomanip>

using namespace std;

int rice_price()
{
	int level = 0;
	double kg = 0.0;
	double price = 0.0;
	cin >> level >> kg;
	if (level > 3)
	{
		cout << "Not available!";
		return 0;
	}

	switch (level)
	{
	case(1):
		price = kg * 4.68;
		break;
	case(2):
		price = kg * 6.26;
		break;
	case(3):
		price = kg * 8.16;
		break;
	}

	cout << fixed << setprecision(2) << price;
	return 0;
}