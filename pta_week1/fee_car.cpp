#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class fee
{
	public:
		char type;
		float fees;
		float distance;

		void set(char set_type,float set_distance)
		{
			type = set_type;
			distance = set_distance;
		}

		float process(void)
		{
			if (type == 'A')
			{
				fees = 20;
				fees = fees + (distance - 3) * 5;
				return fees;
			}
			else if (type == 'B')
			{
				fees = 15;
				fees = fees + (distance - 3) * 4;
				return fees;
			}
			else if (type == 'C')
			{
				fees = 10;
				fees = fees + (distance - 3) * 3;
				return fees;
			}
		}

		bool judge(void)
		{
			if (distance <= 3)
			{
				return true;
			}
			return false;
		}

		float process_less3(void)
		{
			if (type == 'A')
				return 20;
			if (type == 'B')
				return 15;
			if (type == 'C')
				return 10;
		}
};

int main()
{
	char type = 0;
	float input = 0.0;
	fee a;

	cin >> type >> input;
	a.set(type, input);

	if (a.judge())
	{
		cout << "车费的整数部分：" << a.process_less3() << endl;
		return 0;
	}

	int out = round(a.process());
	cout << "车费的整数部分：" << fixed << setprecision(0) << out << endl;
	return 0;
}