#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int n_jiecheng()
{
	int n = 0;
	int x = 0;
	long long ret = 1;
	long double ans = 0;
	cin >> n;
	vector <long double> s(n+1, 0);
	s[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		x = i * 2 - 1;
		/*for (int j = 1; j <= x; j++)
		{
			ret = ret * j;
		}*/
		s[i] = s[i-1] * (x - 1);
		s[i] *= x;
		/*ret = s[i];*/
	}

	for (int i = 1; i <= n; i++)
	{
		ans += pow(-1, i - 1) / s[i];
	}

	cout << fixed << setprecision(6) << ans << endl;
	return 0;
}