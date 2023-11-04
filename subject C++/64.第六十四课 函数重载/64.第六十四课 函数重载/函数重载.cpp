#include<iostream>
using namespace std;

//函数重载
//可以让函数名相同,提高复用性


void func(int a)
{
	cout << "func 的调用" << endl;
}

void func()
{
	cout << "func 的调用!" << endl;
}
void func(int a,double b)
{
	cout << "func 的调用!(int a double b)" << endl;
}
void func(double a,int b)
{
	cout << "func 的调用!(double a int b)" << endl;
}
//int func(double a, int b)
//{
//	cout << "func 的调用!(double a int b)" << endl;
//}
//不可 因为返回值不可以作为函数重载的条件



int main()
{
	int a = 10;
	func(a);
	//func();
}