#include<iostream>
using namespace std;

//�Ӻ����������
class person
{
public:
	//1.��Ա��������+��

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

//2.ȫ�ֺ�������+��

person operator+(person& p1,person& p2)
{
	person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}

//3.�Ӻ����������ʵս

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

	/*person p3 = p1 + p2;//��Ϊ1.��Ա��������+�� �� 2.��Ա��������+�� 
	�ſ�����������Ч��*/

	//��Ա�������ر��ʵ���
	//person p3 = p2.operator+(p1);

	//ȫ�ֺ������صı��ʵ���
	person p3 = operator+(p1, p2);

	//3.����
	person p4 = p1 + 10;
	

	cout << "p3.m_a = " << p3.m_a << endl;
	cout << "p3.m_b = " << p3.m_b << endl;
}

int main()
{
	test01();
}