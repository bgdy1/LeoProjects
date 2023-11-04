#include<iostream>
using namespace std;

//构造函数的调用规则
//1.创建一个类,C++编辑器会给每一个类都增加至少3个函数
//默认构造函数(空实现)
//析构函数(空实现)
//拷贝函数(值拷贝)

//2.调用规则
//如果我们写了有参构造函数 编辑器不再提供默认构造 依然提供拷贝构造

class person
{
public:
	person()
	{
		cout << "person的默认构造函数调用" << endl;
	}

	person(int age)
	{
		cout << "person的有参构造函数调用" << endl;
		m_Age = age;
	}
	person(const person* p)//拷贝构造函数可有可无 当你调用了有参构造函数后系统会提供 拷贝构造函数
	{
		cout << "person的拷贝构造函数调用" << endl;
		m_Age = p->m_Age;
	}
	~person()
	{
		cout << "person的析构函数调用" << endl;
	}

public:
	int m_Age;
};

void test01()
{
	person p1(10);
	person p2(p1);

	cout << "p2的年龄为" << p2.m_Age << endl;
}

void test02()
{
	person p3;

}
int main()
{
	test01();
	system("pause");
	return 0;
}