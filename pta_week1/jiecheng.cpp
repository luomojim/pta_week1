#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

int jiecheng()
{
	int n = 0;
	const double a = 1.0;
	double ans = 0.0;
	cin >> n;		//10
	vector <int> floor(n+1,0);
	floor[0] = 1;
	floor[1] = 1;
	for (int i = 2; i < n; i++)
	{
		floor[i] = floor[i - 1] * i;	//1 1 2 6 24 120
	}
	
	for (int i = 0; i < n; i++)
	{
		ans = ans + a / floor[i];
	}

	cout << fixed << setprecision(6) << ans << endl;

	return 0;
}