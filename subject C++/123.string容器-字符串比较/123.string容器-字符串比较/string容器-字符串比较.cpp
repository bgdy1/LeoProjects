#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str1 = "hello";
	string str2 = "hello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 equal to str2" << endl;
	}
	
	str1.replace(0, 0, "x");

	if (str1.compare(str2) > 0)
	{
		cout << "str1 larger than str2" << endl;
	}

	str1.replace(0, 0, "h");
	str2.replace(0, 0, "x");
	if (str1.compare(str2) < 0)
	{
		cout << "str2 larger than str2" << endl;
	}
	
}

int main()
{
	test01();
}