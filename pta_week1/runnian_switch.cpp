#include <iostream>

using namespace std;

int runnian_switch()
{
	int month = 0;
	int year = 0;
	int day = 0;

	cin >> year >> month;

	if (month > 12 || month < 1)
	{
		cout << "月份有误";
		return 0;
	}
	switch (month)
	{
	case(1):
	case(3):
	case(5):
	case(7):
	case(8):
	case(10):
	case(12):
		day = 31;
		break;
	case(4):
	case(6):
	case(9):
	case(11):
		day = 30;
		break;
	case(2):
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year >= 400))
		{
			day = 29;
			break;
		}
		day = 28;

	}

	
	cout << year << "年" << month << "月有" << day << "天。";


	return 0;
}