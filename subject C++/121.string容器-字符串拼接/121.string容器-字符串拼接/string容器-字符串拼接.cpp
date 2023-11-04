#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str1 = "Œ“";
	str1 += "∞Æ van you see";
	cout << "str1 = " << str1 << endl;

	str1 += ':';
	cout << "str1 = " << str1 << endl;

	string str2 = "EC 5k ";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << "str3 = " << str3 << endl;

	str3.append("game abcde", 4);
	cout << "str3 = " << str3 << endl;

	//str3.append(str2);
	str3.append(str2, 0, 2);
	cout << "str3 = " << str3 << endl;
}

int main()
{
	test01();
}