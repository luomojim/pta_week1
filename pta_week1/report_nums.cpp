#include <iostream>
#include <vector>

using namespace std;

int report_nums()
{
	int n = 0;
	int count = 0;
	cin >> n;
	vector <int> flag(n+1, 0);

	//0 前 1 后 
	//first
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0 || i % 4 == 0 || i % 5 == 0)
		{
			flag[i] = 1;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (flag[i] == 0)
		{
			count++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (flag[i] == 0)
		{
			cout << i;
		}
		if (count > 1)
		{
			cout << ' ';
			count--;
		}
	}

	cout << endl;
	return 0;
}