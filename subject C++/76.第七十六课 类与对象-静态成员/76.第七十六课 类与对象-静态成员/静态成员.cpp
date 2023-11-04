#include<iostream>
using namespace std;

//静态成员变量
class person
{
public:

	//1所有成员都共享同一份数据
	//2编译阶段就分配内存
	//3类内进行声明 类外进行初始化操作
	static int m_A;
};

int person::m_A = 100;

void test01()
{
	person p1;
	cout << p1.m_A << endl;

	person p2;
	p2.m_A = 200;
	cout << p1.m_A << endl;

	person::m_A = 300;
	cout << p1.m_A << endl;
}

void test02()
{
	//静态成员变量 不属于某个对象上 所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式

	//1.通过对象进行访问
	person p;
	cout << p.m_A << endl;

	//2.通过类名进行访问
	cout << person::m_A << endl;

	//如果此静态成员是私有的话 无法访问

}

int main()
{
	test01();
	test02();
	cout << "类外调用" << person::m_A << endl;
}