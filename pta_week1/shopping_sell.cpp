#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int shopping_sell()
{
	int n = 0;
	double input = 0;
	double total = 0;
	double avg = 0;
	int count = 0;
	vector <double> a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		a.push_back(input);
		total += input;
	}

	avg = total / n;
	count = n;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > avg)
		{
			a[i] *= 0.9;
		}
		cout << fixed << setprecision(1) << a[i];
		if (count > 1)
		{
			cout << ' ';
			count--;
		}
	}


	cout << endl;
	return 0;
}