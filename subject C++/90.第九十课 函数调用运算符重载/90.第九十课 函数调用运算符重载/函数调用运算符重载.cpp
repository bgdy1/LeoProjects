#include<iostream>
using namespace std;

//�����������������

//��ӡ�����
class print
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}

};

void print02(string test)
{
	cout << test << endl;
}

void test01()
{
	print p;

	p("helloworld");//����ʹ�������ǳ������ں������ã���˽����º���
	print02("helloword");
}

//�º����ǳ���û�й̶���д��
//�ӷ���

class add
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}

};

void test02()
{
	add a;
	int ret = a(100, 100);
	cout << "ret = " << ret << endl;

	//������������ ������봴���� �Ϳ���ʹ��
	cout << add()(100, 100) << endl;
}

int main()
{
	//test01();
	test02();
}