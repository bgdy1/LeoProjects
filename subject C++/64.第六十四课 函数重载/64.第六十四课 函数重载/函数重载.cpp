#include<iostream>
using namespace std;

//��������
//�����ú�������ͬ,��߸�����


void func(int a)
{
	cout << "func �ĵ���" << endl;
}

void func()
{
	cout << "func �ĵ���!" << endl;
}
void func(int a,double b)
{
	cout << "func �ĵ���!(int a double b)" << endl;
}
void func(double a,int b)
{
	cout << "func �ĵ���!(double a int b)" << endl;
}
//int func(double a, int b)
//{
//	cout << "func �ĵ���!(double a int b)" << endl;
//}
//���� ��Ϊ����ֵ��������Ϊ�������ص�����



int main()
{
	int a = 10;
	func(a);
	//func();
}