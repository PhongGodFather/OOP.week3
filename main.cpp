#include <iostream>
#include "MyString.h"
using namespace std;
int main()
{
	MyString s, t;
	cin >> s >> t;
	cout << s << endl;
	cout << s.length() << endl;
	cout << s.substring(0, 2) << endl;
	cout << s + t << endl;
	cout << s.insert(1, "!") << endl;
	cout << s << endl;
}