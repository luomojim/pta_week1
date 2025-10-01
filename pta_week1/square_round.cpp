#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int round()
{
	const double pi = 3.1415926;
	double r = 0;
	cin >> r;
	double s = pi * r * r;
	cout << fixed << setprecision(2) << s << endl;
	return 0;
}