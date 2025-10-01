#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int a_plus_b2()
{
	string s;
	float a = 0;
	float b = 0;
	int input = 0;
	int count = 0;
	int j = 0;
	int pna = 0;
	int pnb = 0;
	char type = '0';
	cin >> s;

	if (s[0] == '-')
	{
		pna = 1;
		count++;
		j++;
	}
	for (int i = j; i < s.size(); i++)
	{
		
		if (ispunct(s[i]))
		{
			type = s[i];
			count++;
			break;
		}
		count++;
		a = a * 10 + s[i] - 48;
	}

	for (int i = count; i < s.size(); i++)
	{
		if (s[i] == '-')
		{
			pnb = 1;
			continue;
		}
		b = b * 10 + s[i] - 48;
	}

	if (pna == 1)
	{
		a = a - 2 * a;
	}
	if (pnb == 1)
	{
		b = b - 2 * b;
	}

	if (type == '+')
	{
		cout << fixed << setprecision(2) << a + b << endl;
		return 0;
	}
	else if (type == '-')
	{
		cout << fixed << setprecision(2) << a - b << endl;
		return 0;
	}
	else if (type == '*')
	{
		cout << fixed << setprecision(2) << a * b << endl;
		return 0;
	}
	else if (type == '/')
	{
		if (b == 0)
		{
			cout << "除零错误!" << endl;
			return 0;
		}
		cout << fixed << setprecision(2) << a / b << endl;
		return 0;
	}
	else
	{
		cout << "运算符输入错误!" << endl;
		return 0;
	}

	return 0;
}