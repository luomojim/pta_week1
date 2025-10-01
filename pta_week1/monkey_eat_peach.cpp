#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int eat_peach()
{
	int n = 0;
	cin >> n;
	double per = 1 - (float)n / 100;
	double times = 1 / per;
	times *= 10;
	times = round(times);
	times /= 10;
	long long nums = 1;
	nums++;
	nums *= times;
	nums++;
	nums *= times;
	nums++;
	nums *= times;

	cout << nums << endl;


	return 0;
}