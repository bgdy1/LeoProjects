#include<iostream>
using namespace std;

void test01()
{
	string str = "hello";

	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//ÐÞ¸Äµ¥¸ö×Ö·û
	str[0] = 'x';
	cout << "str = " << str << endl;

	str.at(1) = 'x';
}

int main()
{
	test01();
}