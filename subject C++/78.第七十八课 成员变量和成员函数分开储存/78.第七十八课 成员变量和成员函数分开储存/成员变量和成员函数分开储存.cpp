#include<iostream>
using namespace std;

//��Ա�����ͳ�Ա�����Ƿֿ��洢
class person
{
public:
	int m_A;//�Ǿ�̬��Ա���� �����������
	static int m_B;//��̬��Ա���� �������������
	void func1() {}//�Ǿ�̬��Ա���� �������������
	static void func2() {}//��̬��Ա���� �������������
};

int person::m_B;

void test01()
{
	person p;
	//�ն����������ڴ�ռ�Ϊ1
	//C++���������ÿ���ն���Ҳ����һ���ֽڵĿռ� Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "sizeof p = " << sizeof(p) << endl;
}

void test02()
{
	person p1;
	cout << "sizeof p1 = " << sizeof(p1) << endl;
}

int main()
{
	test01();
	test02();
}