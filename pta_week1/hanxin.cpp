#include <iostream>

using namespace std;

int hanxin()
{
	int count = 0;
	int ans = count * 105 + 23;
	int a = 0;
	int b = 0;
	cin >> a >> b;
	while (ans < a)
	{
		count++;
		int ans = count * 105 + 23;
		if (ans <= b && ans >= a)
		{
			cout << ans << endl;
			return 0;
		}
		if (ans > b && ans > a)
		{
			cout << "no" << endl;
			return 0;
		}
	}
	if (ans >= a && ans <= b)
	{
		cout << ans << endl;
	}
	return 0;
}