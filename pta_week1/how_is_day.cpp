#include <iostream>

using namespace std;

int how_is_day()
{
	int day = 0;
	cin >> day;
	if (day < 1 || day > 7)
	{
		cout << "输入有误";
		return 0;
	}

	switch (day)
	{
	case(1):
		cout << "星期一";
		break;
	case(2):
		cout << "星期二";
		break;
	case(3):
		cout << "星期三";
		break;
	case(4):
		cout << "星期四";
		break;
	case(5):
		cout << "星期五";
		break;
	case(6):
		cout << "星期六";
		break;
	case(7):
		cout << "星期天";
		break;
	}



	return 0;
}