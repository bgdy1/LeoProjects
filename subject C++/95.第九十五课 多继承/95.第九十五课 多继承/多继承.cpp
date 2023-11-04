#include<iostream>
using namespace std;

//∂‡ºÃ≥–”Ô∑®

class base1
{
public:
	base1()
	{
		m_A = 100;
	}

	int m_A;
};

class base2
{
public:
	base2()
	{
		m_B = 200;
	}

	int m_B;
};

class son :public base1, public base2
{
public:
	son()
	{
		m_C = 300;
		m_D = 400;
	}

	int m_C;
	int m_D;
};

void test01()
{
	son s;
	cout << "sizeof son = " << sizeof(s) << endl;
	cout << "base1::m_A = " << s.base1::m_A << endl;
	cout << "base2::m_B = " << s.base2::m_B << endl;
}

int main()
{
	test01();
}
