#include <iostream>

using namespace std;

int score_split()
{
	int score = 0;
	cin >> score;
	if (score > 100 || score < 0)
	{
		cout << "输入成绩有误" << endl;
		return 0;
	}

	if (score >= 90)
	{
		cout << "A" << endl;
	}
	else if (score >= 80)
	{
		cout << "B" << endl;
	}
	else if (score >= 70)
	{
		cout << "C" << endl;
	}
	else if (score >= 60)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "E" << endl;
	}


	return 0;
}