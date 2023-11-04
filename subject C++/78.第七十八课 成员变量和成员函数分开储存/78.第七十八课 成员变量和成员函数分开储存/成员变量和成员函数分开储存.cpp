#include<iostream>
using namespace std;

//成员变量和成员函数是分开存储
class person
{
public:
	int m_A;//非静态成员变量 属于类对象上
	static int m_B;//静态成员变量 不属于类对象上
	void func1() {}//非静态成员函数 不属于类对象上
	static void func2() {}//静态成员函数 不属于类对象上
};

int person::m_B;

void test01()
{
	person p;
	//空对象所含的内存空间为1
	//C++编译器会给每个空对象也分配一个字节的空间 为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "sizeof p = " << sizeof(p) << endl;
}

void test02()
{
	person p1;
	cout << "sizeof p1 = " << sizeof(p1) << endl;
}

int main()
{
	test01();
	test02();
}