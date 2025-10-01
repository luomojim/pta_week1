#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int add_prime()
{
	int m = 0;
	int n = 0;
	int count = 0;
	cin >> m >> n;
	vector <int> isprime(n + 5, 1);
	isprime[0] = 0;
	isprime[1] = 0;
	for (int i = 2; i * i <= n + 4; i++)
	{
		for (int j = i; i * j <= n + 2; j++)
		{
			isprime[i * j] = 0;
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (isprime[i] == 1)
		{
			count++;
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (isprime[i] == 1)
		{
			cout << i;
			if (count > 1)
			{
				cout << ',';
				count--;
			}
		}
	}


	cout << endl;
	return 0;
}