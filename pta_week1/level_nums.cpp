#include <iostream>
#include <vector>

using namespace std;

int level_nums() {
    long long n;
    cin >> n;
    vector<long long> count(11, 0);  

    for (int i = 0; i < n; i++) {
        long long s;
        cin >> s;
        if (s == 100) 
        {
            count[10]++;
        }
        else if (s >= 0 && s <= 99) 
        {
            count[s / 10]++;
        }
    }

    for (int i = 0; i < 11; i++) 
    {
        cout << i << ": " << count[i];
        if(i != 10) 
		{
			cout << endl;
		}
    }

    return 0;
}