#include<iostream>
using namespace std;

//�̳���ͬ����Ա����ʽ
class base
{
public:
	base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "base - func()����" << endl;
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
		cout << "son - func()����" << endl;
	}

	int m_A;
};

void test01()
{
	son s;
	cout << "son�µ� m_A = " << s.m_A << endl;
	//���ͨ�����������ʸ����е�ͬ����Ա ��Ҫ��������
	cout << "base�µ� m_A = " << s.base::m_A << endl;
}

//ͬ����Ա��������
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