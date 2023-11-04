#include<iostream>
using namespace std;

//�̳��е�ͬ����̬��Ա����ʽ

class base
{
public:
	static void func()
	{
		cout << "base - static void func()����" << endl;
	}

	static int m_A;
};

int base::m_A = 100;

class son :public base
{
public:
	static void func()
	{
		cout << "son - static void func()����" << endl;
	}

	static int m_A;
};

int son::m_A = 200;

//ͬ����̬��Ա����
void test01()
{
	//1.ͨ���������
	cout << "ͨ���������:" << endl;
	son s;
	cout << "son �µ� m_A = " << s.m_A << endl;
	cout << "base �µ� m_A = " << s.base::m_A << endl;

	//2.ͨ����������
	cout << "ͨ����������:" << endl;
	cout << "son �µ� m_A = " << son::m_A << endl;
	cout << "base �µ� m_A = " << son::base::m_A << endl;
}

void test02()
{
	//1.ͨ���������
	son s;
	s.func();
	s.base::func();

	//2.ͨ����������
	son::func();
	son::base::func();
}

int main()
{
	//test01();
	test02();
}