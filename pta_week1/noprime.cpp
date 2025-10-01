#include <iostream>
#include <vector>

using namespace std;

int noprime()
{
	int n = 0;
	cin >> n;
	vector <int> flag(n+5, 0);
	for (int i = 1; i * i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i * j == n)
			{
				flag[i] = 1;
				flag[j] = 1;
			}
		}
	}

	for (int i = 0; i <= n; i++)
	{
		if (flag[i] == 1)
		{
			cout << i << ' ';
		}
	}

	cout << endl;
	return 0;
}