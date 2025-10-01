#include <iostream>

using namespace std;

int game_score2()
{
	float score = 0.0;
	char out = 'C';
	cin >> score;
	int in = score / 5;
	switch (in)
	{
	case(20):
	case(19):
	case(18):
		out = 'S';
		break;
	case(17):
	case(16):
		out = 'A';
		break;
	case(15):
	case(14):
	case(13):
	case(12):
		out = 'B';
		break;

	}

	cout << "等级为" << out << endl;
	return 0;
}