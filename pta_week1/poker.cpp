#include <iostream>

using namespace std;

int poker()
{
	string poker[13] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13" };
	int num = 0;
	cin >> num;
	if(num < 0 || num > 51)
	{
		cout << "none" << endl;
		return 0;
	}
	if (num >= 0 && num <= 12)
	{
		cout << "spade" << ' ';
		num %= 13;
		cout << poker[num] << endl;
	}
	else if (num >= 13 && num <= 25)
	{
		cout << "heart" << ' ';
		num %= 13;
		cout << poker[num] << endl;
	}
	else if (num >= 26 && num <= 38)
	{
		cout << "club" << ' ';
		num %= 13;
		cout << poker[num] << endl;
	}
	else if (num >= 39 && num <= 51)
	{
		cout << "diamond" << ' ';
		num %= 13;
		cout << poker[num] << endl;
	}

	return 0;
}