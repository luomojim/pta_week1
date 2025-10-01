#include <iostream>
#include <vector>

using namespace std;

int oddnums()
{
	int n = 0;
	int count = 0;
	int total = 0;
	int i = 1;
	cin >> n;
	vector <int> odd(n,0);
	for (i = 1; count < n; i++)
	{
		if (i % 2 == 1)
		{
			total += i;
			count++;
		}
	}

	cout << "第" << n << "个奇数为：" << i-1 << endl << "前" << n << "个奇数的和为：" << total ;

	return 0;
}