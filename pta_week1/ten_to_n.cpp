#include <iostream>
#include <stack>

using namespace std;

int ren_to_n()
{
	int n = 0;
	int input = 0;
	int res = 0;
	int temp = 0;
	stack <int> s;

	cin >> input;
	cin >> n;

	while (input != 0)
	{
		temp = input % n;
		s.push(temp);
		input = input / n;
	}

	while (!s.empty())
	{
		temp = s.top();
		cout << temp;
		s.pop();
	}

	cout << endl;
	return 0;
}