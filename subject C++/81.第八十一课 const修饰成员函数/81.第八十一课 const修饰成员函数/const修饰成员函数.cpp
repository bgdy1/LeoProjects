#include<iostream>
using namespace std;

//������
class person
{
public:
	//thisָ��ı��� ��ָ�볣�� ������֮���ָ��ָ���ǲ������޸ĵ�
	//const person*const this;			
	//������������ǰ���constΪ�������޸�ָ�� ����()���ǲ������޸�ֵ
	const void showperson() const
	{
		//m_A = 100;
		//this->m_A = 100;
		//this = NULL;
		m_B = 100;
	}

	void func()
	{
		m_B = 200;
	}

	int m_A;
	mutable int m_B;//�������,��ʹ�ڳ�������,Ҳ�����޸����ֵ,�ӹؼ���mutable
};

void test01()
{
	person p;
	p.showperson();
}

//������
void test02()
{
	const person p;
	//p.m_A = 100; ��
	p.m_B = 100;//m_B������ֵ ��������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showperson();
	//p.func(); �� �������ܵ�����ͨ��Ա
}


int main()
{
	test02();
}