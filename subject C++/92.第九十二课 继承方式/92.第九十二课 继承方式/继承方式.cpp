#include<iostream>
using namespace std;

//�̳з�ʽ 
//�����̳�
class base
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class son1 :public base
{
public:
	void func()
	{
		a = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		b = 20;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//c = 30 ���ɷ��ʸ���˽�г�Ա
	}
};

class son2 :protected base
{
public:
	void func()
	{
		a = 10;//�����й�����Ա ���������ɱ���Ȩ��
		b = 20;//�����б���Ȩ�� ����������Ȼ����
		//c = 30; ���ɷ��ʸ���˽�г�Ա
	}
};

class son3 :private base
{
public:
	void func()
	{
		a = 10;//�����й�����Ա �������б�Ϊ˽�г�Ա
		b = 20;//�����б�����Ա �������б�Ϊ˽�г�Ա
		//c = 30; ���ɷ��ʸ���˽�г�Ա
	}
};

void test01()
{
	son1 s1;
	s1.a = 100;
	//s1.m_B = 100; ����Ȩ�������޷�����
}

void test02()
{
	son2 s2;
	//s2.a = 10; a��Ϊ����Ȩ�� ���������ʲ���
	//s2.b = 20; b��ɱ���Ȩ�� �����Է���
	//s2.c = 30;���ɷ���
}

void test03()
{
	son3 s3;
	//s3.a = 10; //a��Ϊ����Ȩ�� ���������ʲ���
	//s3.b = 20; //b��ɱ���Ȩ�� �����Է���
	//s3.c = 30;//���ɷ���
}

int main()
{

}