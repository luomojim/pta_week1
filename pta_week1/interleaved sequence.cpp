#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int interleaved_sequence()
{
	int n = 0;
	double sum = 1.0;
	cin >> n;		//10
	vector <int> s(n, 0);
	s[0] = 1;

	for (int i = 1; i < n; i++)
	{
		s[i] = s[i - 1] + 3;
	}

	for (int i = 1; i < n; i++)
	{
		sum = sum + pow(-1,i) * (double)1 / s[i];
	}

	cout << fixed << setprecision(3) << "sum = " << sum << endl;



	return 0;
}