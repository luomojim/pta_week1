#include <iostream>
#include <vector>

using namespace std;

int inversion_pair()
{
	int n = 0;
	int count = 0;
	cin >> n;
	vector <int> s(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (s[i] > s[j])
			{
				count++;
			}
		}
	}

	cout << count;
	return 0;
}