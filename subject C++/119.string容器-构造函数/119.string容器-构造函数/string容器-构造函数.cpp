#include<iostream>
using namespace std;

void test01()
{
	string s1 = "Helloworld";
	cout << "s1 = " << s1 << endl;

	const char* str = "Helloworld";
	string s2(str);
	cout << "s2 = " << s2 << endl;

	string s3(s2);
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}

int main()
{
	test01();
}