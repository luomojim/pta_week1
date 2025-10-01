#include <iostream>

using namespace std;

int odd_1()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	cin >> a >> b;
	int i = a;
	while (i <= b)
	{
		if (i % 2 == 1)
		{
			sum += i;
		}
		i++;
	}


	cout << sum << endl;
	return 0;
}