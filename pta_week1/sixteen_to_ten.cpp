#include <iostream>
#include <vector>

using namespace std;

int sixteen_to_ten()
{
	vector <char> s;
	vector <int> p;
	char input;
	int total = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		s.push_back(input);
		input = s[i] - 55;
		p.push_back(input);
	}

	for (int i = 0; i < 3; i++)
	{
		total = total + p[i];
		total = total * 16;
	}

	cout << total / 16 << endl;

	return 0;
}