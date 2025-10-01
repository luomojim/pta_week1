#include <iostream>

using namespace std; 

int poker_flower()
{
	int n = 0;
	cin >> n;
	char flower[] = { '\x06','\x03','\x05','\x04' };

	switch (n)
	{
	case(0):
		cout << flower[0] << endl;
		break;
	case(1):
		cout << flower[1] << endl;
		break;
	case(2):
		cout << flower[2] << endl;
		break;
	case(3):
		cout << flower[3] << endl;
		break;
	default:
		cout << "none" << endl;
	}

	return 0;
}