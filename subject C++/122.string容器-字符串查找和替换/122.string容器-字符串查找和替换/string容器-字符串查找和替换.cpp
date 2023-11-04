#include<iostream>
using namespace std;

//1.查找
void test01()
{
	string str1 = "abcdefg";
	int pos01 = str1.find("de");
	int pos02 = str1.find("df");
	cout << "pos01 = " << pos01 << endl;
	cout << "pos02 = " << pos02 << endl;

	//rfind和find的区别:rfind从右往左查找
	int pos03 = str1.rfind("de");
	cout << "pos03 = " << pos03 << endl;
	string str2 = "abcdefgde";
	int pos04 = str2.rfind("de");
	cout << "pos04 = " << pos04 << endl;
}

void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");
}

int main()
{
	test01();
}