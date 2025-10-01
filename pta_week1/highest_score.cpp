#include <iostream>
#include <set>

using namespace std;

int highest_score()
{
	int input = 0;
	int score = 0;
	set <int> s;
	
	for (int i = 0; i < 7; i++)
	{
		cin >> input;
		s.insert(input);
	}

	score = *s.rbegin();

	cout << "选手最高得分：" << score;

	cout << endl;
	return 0;
}