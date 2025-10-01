#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int log_math()
{
	float x = 0.0;
	cin >> x;
	float sin_x = sin(x);
	float cos_x = cos(x / 2);
	float sq = sqrt(x + 168);

	float ans = log10(fabs(sin_x - cos_x + sq));

	cout << fixed << setprecision(4) << ans << endl;
	return 0;
}