#include<iostream>
using namespace std;

int main()
{
	//1.逻辑运算符 非 !
	int a = 10;
	cout << !a << endl;

	cout << !!a << endl;

	//2.逻辑运算符 与 &&
	//int a = 10
	int b = 10;
	cout << (a && b) << endl;
	
	//int b = 10
	a = 0;
	cout << (a && b) << endl;
	//同真为真 其余为假

	//3.逻辑运算符 或 ||
	//a=10
	//b=10
	cout << (a || b) << endl;

	//a = 2
	//b = 2
	cout << (a || b) << endl;
	//0 证明是错的

	//同假为假 其余为真

	system("pause");
	return 0;

}