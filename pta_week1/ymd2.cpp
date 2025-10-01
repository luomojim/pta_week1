#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cctype>
#include <algorithm>
#include <cstdio>


using namespace std;

int ymd2()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int count = 0;
	scanf("%d/%d/%d", &year, &month, &day);
	
	day++;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day > 31)
		{
			month++;
			day -= 31;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 30)
		{
			month++;
			day -= 30;
		}
	}
	else if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year >= 400))
		{
			if (day > 29)
			{
				month++;
				day -= 29;
			}
		}
		else
		{
			if (day > 28)
			{
				month++;
				day -= 28;
			}
		}
	}

	if (month > 12)
	{
		year++;
		month -= 12;
	}
	cout << year << '-';
	if (month < 10)
	{
		cout << '0' << month << '-';
	}
	else
	{
		cout << month << '-';
	}
	if (day < 10)
	{
		cout << '0' << day;
	}
	else
	{
		cout << day;
	}
	return 0;
}