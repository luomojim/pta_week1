#include <iostream>
#include <cstdio>

using namespace std;

unsigned long Fact(unsigned int  n)
{
    int  i;
    unsigned long result = 1;
    for (i = 2; i <= n; i++)
        result *= i;
    return result;
}

int num_jiecheng()
{
    unsigned long n = 0;
    unsigned long sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += Fact(i);
        
    }

    sum *= 5;
    printf("sum=%u", sum);

    cout << endl;
    return 0;
}