#include<iostream>
using namespace std;

class person
{
public:
	person()
	{
		cout << "�޲ι���ĵ���" << endl;
	}
	
	~person()
	{
		cout << "������������" << endl;
		//�������������������������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}

	}
	person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout <<"p1.m_Height = " << m_Height << endl;
		cout << "�вι������" << endl;
	}
	//�Լ�д�������캯��������p1 �� p2��ָ��m_Height
	person(const person &p)
	{
		cout << "�������캯���ĵ���" << endl;
		m_Age = p.m_Age;

		//�������
		m_Height = new int(*p.m_Height);
		cout << "p2.m_Height = " << m_Height << endl;
	}
	int m_Age;
	int* m_Height;
};

void test01()
{
	person p1(18,160);
	cout << "p1��������: " << p1.m_Age << " p1�����" << *p1.m_Height << endl;
	person p2(p1);
	cout << "p2��������: " << p2.m_Age << " p2�����" << *p2.m_Height << endl;
}

int main()
{
	test01();
}