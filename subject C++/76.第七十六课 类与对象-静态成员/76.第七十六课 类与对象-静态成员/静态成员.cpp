#include<iostream>
using namespace std;

//��̬��Ա����
class person
{
public:

	//1���г�Ա������ͬһ������
	//2����׶ξͷ����ڴ�
	//3���ڽ������� ������г�ʼ������
	static int m_A;
};

int person::m_A = 100;

void test01()
{
	person p1;
	cout << p1.m_A << endl;

	person p2;
	p2.m_A = 200;
	cout << p1.m_A << endl;

	person::m_A = 300;
	cout << p1.m_A << endl;
}

void test02()
{
	//��̬��Ա���� ������ĳ�������� ���ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ

	//1.ͨ��������з���
	person p;
	cout << p.m_A << endl;

	//2.ͨ���������з���
	cout << person::m_A << endl;

	//����˾�̬��Ա��˽�еĻ� �޷�����

}

int main()
{
	test01();
	test02();
	cout << "�������" << person::m_A << endl;
}