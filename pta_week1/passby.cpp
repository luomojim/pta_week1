#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int passby()
{
	int day, hour, min = 0;
	int pass = 0;
	int temp = 0;
	scanf("%d:%d:%d", &day, &hour, &min);
	cin >> pass;

	min += pass;
	hour += min / 60;
	min = min % 60;

	day += hour / 24;
	hour = hour % 24;

	cout << day << ':' << hour << ':' << min << endl;
	return 0;
}
