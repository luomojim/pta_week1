#include <iostream>

using namespace std;

class age_stage
{
	public:
		int age;
		int stage;

		void set(int set_age)
		{
			age = set_age;
			stage = age / 5;
		}

		string judge(void)
		{
			switch (stage)
			{
			case(0):
			case(1):
				return "垂髫之年";
			case(2):
			case(3):
				return "志学之年";
			case(4):
			case(5):
				return "弱冠之年";
			case(6):
			case(7):
				return "而立之年";
			case(8):
			case(9):
				return "不惑之年";
			case(10):
			case(11):
				return "知命之年";
			case(12):
			case(13):
				return "花甲之年";
			case(14):
			case(15):
				return "古稀之年";
			case(16):
			case(17):
				return "杖朝之年";
			case(18):
			case(19):
				return "耄耋之年";
			}
		}
};

int age_stage_level()
{
	int age = 0;
	age_stage s;
	cin >> age;
	s.set(age);
	cout << s.judge() << endl;
}