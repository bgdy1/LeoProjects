#include<iostream>
using namespace std;

//������
class animal
{
public:
	int m_Age;
};

//������̳� ����������⡢
//�ڼ̳�֮ǰ����virtual�ؼ��� ��Ϊ��̳�
// animal�� ��Ϊ�����
//����
class sheep :virtual public animal{};
//����
class camel :virtual public animal{};
//������
class sheepcamel :public sheep, public camel{};

void test01()
{
	sheepcamel sc;
	sc.sheep::m_Age = 18;
	sc.camel::m_Age = 28;
	//�����μ̳�,��������ӵ����ͬ���� ��Ҫ������������
	cout << sc.sheep::m_Age << endl;
	cout << sc.camel::m_Age << endl;
	cout << sc.m_Age << endl;
}

int main()
{
	test01();
}