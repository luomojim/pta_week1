#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int chu3()
{
	int m = 0;
	int n = 0;
	cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		if (i % 3 == 1 || i % 3 == 2)
		{
			cout << i << ' ';
		}
	}

	cout << endl;
	return 0;
}