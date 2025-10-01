#include <iostream>
#include <cmath>

using namespace std;

int heigh()
{
	long long r = 0;
	long long d = 0;
	cin >> r >> d;
	long long s = r * r + d * d;
	s = sqrt(s);

	cout << s - r << endl;

	return 0;
}