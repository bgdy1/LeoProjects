#include<iostream>
using namespace std;


class person
{
public:
	person()
	{
		cout << "person��Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	person(int age)
	{
		cout << "person���вι��캯���ĵ���" << endl;
		m_age = age;
	}
	person(const person* p)
	{
		cout << "person�Ŀ������캯���ĵ���" << endl;
		m_age = p->m_age;
	}
	~person()
	{
		cout << "person�����������ĵ���" << endl;
	}

	int m_age;
};

//�������캯���ĵ���ʱ��

//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	person p1(20);
	person p2(p1);
	cout << "p2��������" << p2.m_age << endl;
}

//2.ֵ���ݵķ�ʽ������������ֵ
void dowork(person p)
{

}

void test02()
{
	person p;
	dowork(p);
}
//3.��ֵ��ʽ���ؾֲ�����
person dowork2()
{
	person p1;
	return p1;
}
void test03()
{
	person p3 = dowork2();
}

int main()
{
	test01();
	test02();
	test03();
}