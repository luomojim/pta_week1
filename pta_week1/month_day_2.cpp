#include <iostream>

using namespace std;

class days
{
public:
	int day;
	int month;

	int total(void);
	void nums(int day, int month);
};

int days::total(void)
{
	switch (month)
	{
	case(1):
		return day;
		break;
	case(2):
		return day + 31;
		break;
	case(3):
		return day + 59;
		break;
	case(4):
		return day + 90;
		break;
	case(5):
		return day + 120;
		break;
	case(6):
		return day + 151;
		break;
	case(7):
		return day + 181;
		break;
	case(8):
		return day + 212;
		break;
	case(9):
		return day + 243;
		break;
	case(10):
		return day + 273;
		break;
	case(11):
		return day + 304;
		break;
	case(12):
		return day + 334;
		break;
	default:
		return 0;
		break;
	}
}

void days::nums(int set_day, int set_month)
{
	day = set_day;
	month = set_month;
}

int month_day2()
{
	int day = 0;
	int month = 0;
	int total_days = 0;
	cin >> month >> day;
	days a;
	a.nums(day, month);
	total_days = a.total();

	cout << month << "月" << day << "日是平年的第" << total_days << "天" << endl;

	return 0;
}