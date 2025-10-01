#include <iostream>

using namespace std;

//arithmetic sequence
int arithmetic_sequence()
{
	int total = 0;
	for (int i = 1; i <= 100; i++)
	{
		total += i;
	}

	cout << "sum = " << total << endl;
	return 0;
}