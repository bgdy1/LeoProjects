#include<iostream>
using namespace std;

//左移运算符重载

class person
{
	friend ostream& operator<<(ofstream& cout, person& p);

	//利用成员函数重载 左移运算符是不合理的
public:
	person(int a, int b)
	{
		m_a = a;
		m_b = b;
	}

	int m_a;
	int m_b;
};

//只能利用全局函数重载左移运算符
ostream& operator<< (ostream& cout, person& p) // 本质operator << (cout,p) 简化为 cout<<p;
{
	cout << "m_a = " << p.m_a << "m_b = " << p.m_b;
	return cout;
}

void test01()
{
	person p1(10, 10);
	cout << p1 << endl;
}

int main()
{
	test01();
}