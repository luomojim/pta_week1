#include <iostream>

using namespace std;

class score
{
	public:
		int score;
		int level;
		char grade[6] = { ' ','A','B','C','D','E' };

		void set_score(int s)
		{
			score = s;
		}

		void set_level(void)
		{
			level = score / 5;
		}
		
		char result(void)
		{
			switch (level)
			{
			case(20):
			case(19):
			case(18):
				return grade[1];
				break;
			case(17):
			case(16):
				return grade[2];
				break;
			case(15):
			case(14):
				return grade[3];
				break;
			case(13):
			case(12):
				return grade[4];
				break;
			default:
				return grade[5];
				break;
			}
		}

		bool judge(void)
		{
			if (score < 0 || score >100)
			{
				return true;
			}
			return false;
		}
};


int score_five_split()
{
	int scores = 0;
	cin >> scores;
	score a;
	a.set_score(scores);
	a.set_level();
	if (a.judge())
	{
		cout << "输入成绩有误" << endl;
		return 0;
	}

	cout << a.result() << endl;

	return 0;
}