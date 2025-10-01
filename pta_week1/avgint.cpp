#include <iostream>
#include <iomanip>

using namespace std;

int avgint()
{
	int a, b, c = 0;
	cin >> a >> b >> c;
	float total = a + b + c;
	total /= 3;
	cout << fixed << setprecision(3) << total << ' ';
	cout << (int)total << endl;

	return 0;
}