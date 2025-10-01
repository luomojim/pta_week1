#include <iostream>

using namespace std;

int poker_point()
{
	int n = 0;
	cin >> n;
	string poker[] = {"0","A", "2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K"};

	switch(n)
	{
	case(1):
		cout << poker[1] << endl;
		break;
	case(2):
		cout << poker[2] << endl;
		break;
	case(3):
		cout << poker[3] << endl;
		break;
	case(4):
		cout << poker[4] << endl;
		break;
	case(5):
		cout << poker[5] << endl;
		break;
	case(6):
		cout << poker[6] << endl;
		break;
	case(7):
		cout << poker[7] << endl;
		break;
	case(8):
		cout << poker[8] << endl;
		break;
	case(9):
		cout << poker[9] << endl;
		break;
	case(10):
		cout << poker[10] << endl;
		break;
	case(11):
		cout << poker[11] << endl;
		break;
	case(12):
		cout << poker[12] << endl;
		break;
	case(13):
		cout << poker[13] << endl;
		break;
	default:
		cout << "none" << endl;
		break;
	}


	return 0;
}