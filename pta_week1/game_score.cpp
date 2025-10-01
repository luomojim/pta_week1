#include <iostream>

using namespace std;

int game_score_1()
{
	float score = 0.0;
	char out = 'C';
	cin >> score;
	if (score >= 95)
		out = 'S';
	else if (score >= 90)
		out = 'A';
	else if (score >= 80)
		out = 'B';


	cout << "等级为" << out <<endl;
	return 0;
}