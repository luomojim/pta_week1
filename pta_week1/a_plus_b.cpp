#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

int a_plus_b()
{
	int n = 0;
	cin >> n;
	vector <int> groupa(n,0);
	vector <int> groupb(n,0);
	for (int i = 0; i < n; i++)
	{
		cin >> groupa[i];
		cin >> groupb[i];
	}


	for (int i = 0; i < n; i++)
	{
		if (groupa[i] == 0 && groupb[i] == 0)
		{
			cout << 1 << endl;
		}


	}


	return 0;
}