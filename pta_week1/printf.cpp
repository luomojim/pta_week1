#include <iostream>
#include <string>
#include <vector>

using namespace std;

int printout()
{
	int n = 0;
	string s;
	cin >> n;
	cin.ignore();

	getline(cin, s);

	cout << s << '-' << n-1 << endl;

	return 0;
}