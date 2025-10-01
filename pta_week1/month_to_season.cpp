#include <iostream>

using namespace std;

class season
{
	public:
		int month;

		void set(int nums)
		{
			month = nums;
		}

		string judge(void)
		{
			switch (month)
			{
			case(1):
			case(2):
			case(3):
				return "第一季度";
				break;
			case(4):
			case(5):
			case(6):
				return "第二季度";
				break;
			case(7):
			case(8):
			case(9):
				return "第三季度";
				break;
			case(10):
			case(11):
			case(12):
				return "第四季度";
				break;
			}
		}

		bool legal(void)
		{
			if (month < 1 || month > 12)
			{
				return true;
			}
			return false;
		}
};


int month_to_season()
{
	int month = 0;
	string ans;
	cin >> month;
	season a;
	a.set(month);
	ans = a.judge();

	if (a.legal())
	{
		cout << "输入月份无效" << endl;
		return 0;
	}

	cout << ans << endl;

	return 0;
}