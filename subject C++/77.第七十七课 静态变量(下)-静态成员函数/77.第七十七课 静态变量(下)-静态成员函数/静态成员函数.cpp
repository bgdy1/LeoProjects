#include<iostream>
using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class person
{
public:
	//��̬��Ա����
	static void func()
	{
		cout << "static void func�ĺ�������" << endl;
		a = 100;//���Է��� ��Ϊ�Ǿ�̬��Ա����
		//b = 100; ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	}
	static int a;//��̬��Ա����
	int b;//�Ǿ�̬��Ա����
};

int person::a = 100;

//���ַ��ʷ�ʽ
void test01()
{
	//1.ͨ���������
	person p1;
	p1.func();
	//2.ͨ���������з���
	person::func();
}

int main()
{
	test01();
}