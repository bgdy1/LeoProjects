#include<iostream>
using namespace std;

//常函数
class person
{
public:
	//this指针的本质 是指针常量 被修饰之后的指针指向是不可以修改的
	//const person*const this;			
	//函数数据类型前面加const为不可以修改指向 而在()则是不可以修改值
	const void showperson() const
	{
		//m_A = 100;
		//this->m_A = 100;
		//this = NULL;
		m_B = 100;
	}

	void func()
	{
		m_B = 200;
	}

	int m_A;
	mutable int m_B;//特殊变量,即使在常函数中,也可以修改这个值,加关键字mutable
};

void test01()
{
	person p;
	p.showperson();
}

//常对象
void test02()
{
	const person p;
	//p.m_A = 100; 错
	p.m_B = 100;//m_B是特殊值 常对象下也可以修改

	//常对象只能调用常函数
	p.showperson();
	//p.func(); 错 常对象不能调用普通成员
}


int main()
{
	test02();
}