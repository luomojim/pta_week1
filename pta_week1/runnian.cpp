#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int runnian()
{
	string n;
	cin >> n;
	int day = (n == "true");
	cout << day + 28 << endl;

	return 0;
}