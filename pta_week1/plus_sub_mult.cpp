#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cctype>
#include <istream>

using namespace std;

int add_sub()
{
	int a = 0;
	int b = 0;
	int count = 0;
	int pna = 0;
	int pnb = 0;
	char sign = '0';
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[0] == '-') 
		{
			pna = 1;
			continue;
		}
		if (isdigit(s[i]))
		{
			a = a * 10 + s[i] - 48;
		}
		count++;
		if (ispunct(s[i]))
		{
			sign = s[i];
			break;
		}
		
	}

	for (int i = count; i < s.size(); i++)
	{
		if (s[i] == '-')
		{
			pnb = 1;
			continue;
		}
		if (isdigit(s[i]))
		{
			b = b * 10 + s[i] - 48;
		}
	}
	
	if (pna == 1)
	{
		a = a - 2 * a;
	}
	if (pnb == 1)
	{
		b = b - 2 * b;
	}

	if (sign == '+')
	{
		cout << a + b << endl;
		return 0;
	}
	if (sign == '-')
	{
		cout << a - b << endl;
		return 0;
	}
	if (sign == '*')
	{
		cout << a * b << endl;
		return 0;
	}
	
	cout << "error" << endl;
	return 0;
}