#include<iostream>
using namespace std;

//加号运算符重载
class person
{
public:
	//1.成员函数重载+号

	/*person operator+ (person& p)
	{
		person temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}*/

	int m_a;
	int m_b;
};

//2.全局函数重载+号

person operator+(person& p1,person& p2)
{
	person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}

//3.加号运算符重载实战

person operator+(person& p, int num)
{
	person temp;
	temp.m_a += p.m_a + num;
	temp.m_b += p.m_b + num;
}

void test01()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 10;
	person p2;
	p2.m_a = 10;
	p2.m_b = 10;

	/*person p3 = p1 + p2;//因为1.成员函数重载+号 或 2.成员函数重载+号 
	才可以做出这种效果*/

	//成员函数重载本质调用
	//person p3 = p2.operator+(p1);

	//全局函数重载的本质调用
	person p3 = operator+(p1, p2);

	//3.例子
	person p4 = p1 + 10;
	

	cout << "p3.m_a = " << p3.m_a << endl;
	cout << "p3.m_b = " << p3.m_b << endl;
}

int main()
{
	test01();
}