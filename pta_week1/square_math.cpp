#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int five_square()
{
	double a = 0.0;
	cin >> a;
	double s = 0.25 * a * a * sqrt(25 + sqrt(5) * 10);

	cout << fixed << setprecision(4) << s << endl;
	cout << fixed << setprecision(0) << a * 5;


	return 0;
}