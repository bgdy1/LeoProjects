#include<iostream>
using namespace std;

//�������������

class person
{
	friend ostream& operator<<(ofstream& cout, person& p);

	//���ó�Ա�������� ����������ǲ������
public:
	person(int a, int b)
	{
		m_a = a;
		m_b = b;
	}

	int m_a;
	int m_b;
};

//ֻ������ȫ�ֺ����������������
ostream& operator<< (ostream& cout, person& p) // ����operator << (cout,p) ��Ϊ cout<<p;
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