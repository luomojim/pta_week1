#include <iostream>

using namespace std;

int aftertomorrow()
{
	int day = 0;
	cin >> day;
	if (day < 1 || day > 7)
	{
		cout << "Invalid Input!" << endl;
		return 0;
	}

	day += 2;
	if (day > 7)
	{
		day -= 7;
	}

	cout << day << endl;

	return 0;
}