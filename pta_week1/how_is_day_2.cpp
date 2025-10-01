#include <iostream>

using namespace std;

class week
{
	public:
		long long day = 6;

		void set_day(int d)
		{
			day += d;
			day %= 7;
			while (day < 0)
			{
				day += 7;
			}
		}

		string process(void)
		{
			switch (day)
			{
			case(1):
				return "星期一";
				break;
			case(2):
				return "星期二";
				break;
			case(3):
				return "星期三";
				break;
			case(4):
				return "星期四";
				break;
			case(5):
				return "星期五";
				break;
			case(6):
				return "星期六";
				break;
			case(0):
				return "星期日";
				break;
			}
		}
};





int how_is_day_2()
{
	long long d = 0;
	week w;
	cin >> d;
	w.set_day(d);

	cout << w.process() << endl;

	return 0;
}