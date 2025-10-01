#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int compare_float() 
{
    float a, b, c;
    scanf("%f,%f,%f", &a, &b, &c);

    float ab = a - b;
    float ans = fabs(ab - c);

    cout << boolalpha << (ans <= 1e-4) << endl;

    return 0;
}