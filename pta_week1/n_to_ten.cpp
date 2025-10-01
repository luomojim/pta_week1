#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int n_to_ten()
{
	int n = 0;
	char input = 0;
	int res = 0;
	vector <char> s;
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		s.push_back(input);
	}

	cin >> n;
	for (int i = 0; i < 3; i++)
	{
		res += (s[i] - 48) * pow(n, 2 - i);
	}

	cout << res;
	return 0;
}