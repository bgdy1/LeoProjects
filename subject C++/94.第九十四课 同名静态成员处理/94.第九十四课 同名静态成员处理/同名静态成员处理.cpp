#include<iostream>
using namespace std;

//继承中的同名静态成员处理方式

class base
{
public:
	static void func()
	{
		cout << "base - static void func()调用" << endl;
	}

	static int m_A;
};

int base::m_A = 100;

class son :public base
{
public:
	static void func()
	{
		cout << "son - static void func()调用" << endl;
	}

	static int m_A;
};

int son::m_A = 200;

//同名静态成员属性
void test01()
{
	//1.通过对象访问
	cout << "通过对象访问:" << endl;
	son s;
	cout << "son 下的 m_A = " << s.m_A << endl;
	cout << "base 下的 m_A = " << s.base::m_A << endl;

	//2.通过类名访问
	cout << "通过类名访问:" << endl;
	cout << "son 下的 m_A = " << son::m_A << endl;
	cout << "base 下的 m_A = " << son::base::m_A << endl;
}

void test02()
{
	//1.通过对象访问
	son s;
	s.func();
	s.base::func();

	//2.通过类名访问
	son::func();
	son::base::func();
}

int main()
{
	//test01();
	test02();
}