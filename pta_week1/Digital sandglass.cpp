#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int digital_sand()
{
	int n = 0;
	int printn = 0;
	int nums = 0;
	int space = 0;
	cin >> n;
	printn = n;
	for (int i = 0; i < n; i++)
	{
		nums = printn * 2 - 1;
		while (space != 0)
		{
			cout << ' ';
			space--;
		}
		while (nums != 0)
		{
			cout << printn;
			nums--;
		}
		printn--;
		cout << endl;
		space = i+1;
	}

	space -= 2;
	for (int i = 2; i <= n; i++)
	{
		while (space != 0)
		{
			cout << ' ';
			space--;
		}
		nums = i * 2 - 1;
		printn = i;
		while (nums != 0)
		{
			cout << printn;
			nums--;
		}
		printn--;
		if (i < n)
		{
			cout << endl;
		}
		
		space = n-i-1;
	}


	return 0;
}