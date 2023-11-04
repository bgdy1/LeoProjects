#include<iostream>
using namespace std;

//继承中同名成员处理方式
class base
{
public:
	base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "base - func()调用" << endl;
	}

	int m_A;
};

class son :public base
{
public:
	son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "son - func()调用" << endl;
	}

	int m_A;
};

void test01()
{
	son s;
	cout << "son下的 m_A = " << s.m_A << endl;
	//如果通过子类对象访问父类中的同名成员 需要加作用域
	cout << "base下的 m_A = " << s.base::m_A << endl;
}

//同名成员函数处理
void test02()
{
	son s;
	s.func();
	s.base::func();
}

int main()
{
	test01();
}