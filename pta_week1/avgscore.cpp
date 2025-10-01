#include <iostream>
#include <iomanip>

using namespace std;

int avgscore()
{
	int n = 0;
	int input = 0;
	float avg = 0.0;
	int total = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		total += input;
	}

	avg = total / n;
	cout << fixed << setprecision(1) << "average = " << avg << endl;

	return 0;
}