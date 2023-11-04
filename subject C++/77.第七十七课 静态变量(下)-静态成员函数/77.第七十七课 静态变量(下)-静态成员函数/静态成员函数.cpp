#include<iostream>
using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class person
{
public:
	//静态成员函数
	static void func()
	{
		cout << "static void func的函数调用" << endl;
		a = 100;//可以访问 因为是静态成员变量
		//b = 100; 静态成员函数只能访问静态成员变量
	}
	static int a;//静态成员变量
	int b;//非静态成员变量
};

int person::a = 100;

//两种访问方式
void test01()
{
	//1.通过对象访问
	person p1;
	p1.func();
	//2.通过类名进行访问
	person::func();
}

int main()
{
	test01();
}