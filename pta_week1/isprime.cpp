#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int isprime()
{
	int n = 0;
	cin >> n;
	vector <int> isprime(n + 5, 1);
	isprime[0] = 0;
	isprime[1] = 0;
	for (int i = 2; i * i <= n + 5; i++)
	{
		for (int j = i; i * j <= n + 2; j++)
		{
			isprime[i * j] = 0;
		}
	}

	for (int i = 0; i <= n; i++)
	{
		if (isprime[i] == 1)
		{
			cout << i << ' ';
		}
	}

	cout << endl;
	return 0;
}