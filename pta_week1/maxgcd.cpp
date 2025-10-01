#include <iostream>

using namespace std;

int maxgcd()
{
	int a = 0;
	int b = 0;
	int max_gcd = 0;
	int r = 1;
	cin >> a >> b;
	while (r != 0)
	{
		r = a % b;
		a = b;
		b = r;
		if (r != 0)
		{
			max_gcd = r;
		}
	}

	cout << max_gcd << endl;

	return 0;
}