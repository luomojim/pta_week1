#include <iostream>

using namespace std;

int opptri()
{
	int space = 0;
	int n = 0;
	for (int i = 4; i > 0; i--)
	{
		while (n != space)
		{
			cout << ' ';
			n++;
		}
		for (int j = i; j > 0; j--)
		{
			cout << "* ";
		}
		space++;
		n = 0;
		cout << endl;
		
	}

	return 0;
}