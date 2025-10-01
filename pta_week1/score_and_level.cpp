#include <iostream>

using namespace std;

int score_and_level()
{
	int score = 0;
	int temp = 0;
	char level[] = { ' ','A','B','C','D','E' };

	cin >> score;
	temp = score / 5;

	if (score > 100 || score < 0)
	{
		cout << "成绩超出范围";
		return 0;
	}

	switch (temp)
	{
	case(20):
	case(19):
	case(18):
		cout << "score=" << score << ",grade=" << level[1];
		break;
	case(17):
	case(16):
		cout << "score=" << score << ",grade=" << level[2];
		break;
	case(15):
	case(14):
		cout << "score=" << score << ",grade=" << level[3];
		break;
	case(13):
	case(12):
		cout << "score=" << score << ",grade=" << level[4];
		break;
	default:
		cout << "score=" << score << ",grade=" << level[5];
		break;
	}

	return 0;
}