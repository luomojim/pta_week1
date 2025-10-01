#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int float_n()
{
	vector <int> s(5, 0);
	double n = 0.0;
	double out = 0.0;
	int temp = 0;
	cin >> n;
	double in = n;
	for (int i = 0; i < 5; i++)
	{
		n = n * 2;
		temp = n / 1;
		s[i] = temp;
		n = n - temp;
	}

	for (int i = 0; i < 5; i++)
	{
		out += s[i] * pow(2, -(i + 1));
	}

	if (out >= in)
	{
		cout << fixed << setprecision(4) << out - in << endl;
	}
	if (out < in)
	{
		cout << fixed << setprecision(4) << in - out << endl;
	}

	
	return 0;
}