#include<iostream>
using namespace std;

//���캯���ĵ��ù���
//1.����һ����,C++�༭�����ÿһ���඼��������3������
//Ĭ�Ϲ��캯��(��ʵ��)
//��������(��ʵ��)
//��������(ֵ����)

//2.���ù���
//�������д���вι��캯�� �༭�������ṩĬ�Ϲ��� ��Ȼ�ṩ��������

class person
{
public:
	person()
	{
		cout << "person��Ĭ�Ϲ��캯������" << endl;
	}

	person(int age)
	{
		cout << "person���вι��캯������" << endl;
		m_Age = age;
	}
	person(const person* p)//�������캯�����п��� ����������вι��캯����ϵͳ���ṩ �������캯��
	{
		cout << "person�Ŀ������캯������" << endl;
		m_Age = p->m_Age;
	}
	~person()
	{
		cout << "person��������������" << endl;
	}

public:
	int m_Age;
};

void test01()
{
	person p1(10);
	person p2(p1);

	cout << "p2������Ϊ" << p2.m_Age << endl;
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