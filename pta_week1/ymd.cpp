#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int ymd_i()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int count = 0;
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (ispunct(input[i]))
		{
			count++;
			break;
		}
		year = year * 10 + input[i] -48;
		count++;
	}

	for (int i = count; i < input.size(); i++)
	{
		if (ispunct(input[i]))
		{
			count++;
			break;
		}
		month = month * 10 + input[i] -48;
		count++;
	}

	for (int i = count; i < input.size(); i++)
	{
		if (ispunct(input[i]))
		{
			count++;
			break;
		}
		day = day * 10 + input[i] -48;
		count++;
	}

	if (month > 12 )
	{
		cout << "无效日期";
		return 0;
	}

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)		//大月
	{
		if (day > 31)
		{
			cout << "无效日期" ;
			return 0;
		}
		cout << year << "年" << month << "月有" << 31 << "天";
		return 0;
	}

	if (month == 4 || month == 6 || month == 9 || month == 11)		//小月
	{
		if (day > 30)
		{
			cout << "无效日期";
			return 0;
		}
		cout << year << "年" << month << "月有" << 30 << "天";
		return 0;
	}

	if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year >= 400))
		{
			if (day > 29)
			{
				cout << "无效日期";
				return 0;
			}
			cout << year << "年" << month << "月有" << 29 << "天";
			return 0;
		}
		if (day > 28)
		{
			cout << "无效日期";
			return 0;
		}
		cout << year << "年" << month << "月有" << 28 << "天";
		return 0;
	}

	cout << "无效日期";
	return 0;
}