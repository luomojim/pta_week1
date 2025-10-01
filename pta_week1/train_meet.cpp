#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int train_meet()
{
	int x = 0;
	int y = 0;
	cin >> x >> y;
	double t = (double)350 / (x + y);

	cout << fixed << setprecision(2) << t << " seconds." << endl;

	return 0;
}