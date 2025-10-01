#include <iostream>

using namespace std;

int astring()
{
	int space = 0;
	for (int i = 10; i >= 1; i--)
	{
		space = 10 - i;
		while (space != 0)
		{
			cout << ' ';
			space--;
		}
		cout << i;
		cout << endl;
	}


	return 0;
}