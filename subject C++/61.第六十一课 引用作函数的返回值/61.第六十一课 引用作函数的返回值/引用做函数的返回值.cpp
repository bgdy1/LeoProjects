#include<iostream>
using namespace std;

int& test01()
{
	static int a = 10;//静态变量存放与全局区
	return a;
}

int main()
{
	int& ref = test01();
	cout << "ref = " << ref << endl;//实参被引用修改
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	ref = 1000;
	cout << "ref = " << ref << endl;//实参被引用修改
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

}