#include <iostream>
#include <vector>

using namespace std;

int lannaluo()
{
	int t = 0;
	cin >> t;		//10
	int temp = 0;
	int num = 0;
	vector <int> check;
	vector <int> love; 
	num = 1;     
	while (love.size() < 2000) 
	{
		if (num % 3 != 0 && num % 10 != 3) 
		{
			love.push_back(num);
		}
		num++;
	}

	for (int i = 0; i < t; i++)
	{
		cin >> temp;
		check.push_back(temp);
	}

	for (int i = 0; i < t; i++)
	{
		int k = check[i];	//1000
		cout << love[k-1];		//999
		if (i < t - 1)
		{
			cout << endl;
		}
	}


	return 0;
}