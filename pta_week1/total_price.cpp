#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float price = 0.0;
	float total = 0.0;
	int x = 0;
	cin >> price >> x;
	int num = x;
	x /= 5;

	total = price * num * 0.94;

	switch (x)
	{
	case(0):
		total = price * num;
		break;
	case(1):
		total = price * num * 0.99;
		break;
	case(2):
	case(3):
		total = price * num * 0.98;
		break;
	case(4):
	case(5):
		total = price * num * 0.96;
		break;
	}

	cout << fixed << setprecision(2) << total;

	return 0;
}