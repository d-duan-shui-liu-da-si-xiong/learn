#include <iostream>
#include <string>
#include <cstring>

int main()
{
	using namespace std;
	string str1 = "learning cpp primer plus.";
	char cstr1[] = "learning cpp primer plus.";
	cout << str1 << sizeof(str1) << endl;
	cout << strlen(cstr1) << endl;
	cout << str1.size() << endl;
	
	//input a string to string obj
	string s;
	cout << "please input your name:";
	getline(cin, s);
	cout << "you input is:"
		 << "Hello, " + s << endl;

	return 0;
}
