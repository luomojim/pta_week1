#include <iostream>

using namespace std;

int xiangxi_red_view() 
{
    int age;
    cin >> age;

    if (age < 10 || age >= 80) 
    {
        cout << "不推荐" <<endl;
    }
    else if (age < 20) 
    {
        cout << "十八洞" << endl;
    }
    else if (age < 40) 
    {
        cout << "龙山茨岩塘" << endl;
    }
    else if (age < 60) 
    {
        cout << "永顺塔卧" << endl;
    }
    else 
    { 
        cout << "湘西州博物馆" << endl;
    }

    return 0;
}