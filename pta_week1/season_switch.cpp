#include <iostream>

using namespace std;

int season_switch()
{
	int n = 0;
	cin >> n;
	switch (n)
	{
	case(1):
	case(2):
	case(3):
		cout << "春季";
		break;
	case(4):
	case(5):
	case(6):
		cout << "夏季";
		break;
	case(7):
	case(8):
	case(9):
		cout << "秋季";
		break;
	case(10):
	case(11):
	case(12):
		cout << "冬季";
		break;
	}

	if (n < 1 || n >12)
	{
		cout << "输入有误";
	}

	return 0;
}