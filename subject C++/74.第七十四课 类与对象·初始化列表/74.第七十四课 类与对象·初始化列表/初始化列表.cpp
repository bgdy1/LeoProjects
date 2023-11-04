#include<iostream>
using namespace std;

class person
{
public:

	//传统初始化操作
	person(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}

	person() :m_A(10), m_B(20), m_C(30)
	{

	}

	person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
	{

	}


	int m_A;
	int m_B;
	int m_C;

};

void test01()
{
	/*person p1(10, 20, 30);*/
	person p2;
	person p(10, 20, 30);
	cout << p2.m_A << endl;
	cout << p2.m_B << endl;
	cout << p2.m_C << endl;
}

int main()
{
	test01();
}