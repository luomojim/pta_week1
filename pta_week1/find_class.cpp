#include <iostream>

using namespace std;

class class_name
{
	public:
		int day;

		void set_day(int day)
		{
			this->day = day;
		}

		bool range(void)
		{
			if (day >= 1 && day <= 5)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		string process(void)
		{
			if (range())
			{
				switch (day)
				{
				case(1):
					return "《C语言程序设计》";
					break;
				case(2):
					return "没课";
					break;
				case(3):
					return "《数据结构》";
					break;
				case(4):
					return "没课";
					break;
				case(5):
					return "《python语言程序设计》";
					break;
				}
			}

			return "输入数字需要在1~5之间";
		}
		
};


int find_class ()
{
	int day = 0;
	class_name class1;
	cin >> day;
	class1.set_day(day);

	cout << class1.process() << endl;

	return 0;
}