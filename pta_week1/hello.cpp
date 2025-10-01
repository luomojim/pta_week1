#include <iostream>

using namespace std;

int hello()
{
	cout << "Hello!What's your name?" << endl;
	string name;
	cin >> name;
	cout << name << ",Welcome to learn C++ with Cinger!";

	return 0;
}