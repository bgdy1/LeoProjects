#include<iostream>
using namespace std;

//������Ǵ���ֵ �������Ǵ����ֵ ���û�д��� ��ʹ��Ĭ��ֵ
int func1(int a = 10, int b = 20, int c = 30)
{
	return a + b + c;
}

//ע��:���ĳ��λ���Ѿ�����Ĭ�ϲ���,�Ǹ����λ������ �����Ҷ�������Ĭ��ֵ
int func2(int a, int b = 10, int c = 10)
{
	return a + b + c;
}
//�������������Ĭ�ϲ��� ����ʵ�־Ͳ�����Ĭ�ϲ���
int func3(int a = 10, int b = 20);

//int func3(int a = 10,int b = 20)
//{
//	retrun a+b;  //���� ����ʾ������
//}

int main()
{
	int a = 10;
	int b = 10;
	int c = 10;
	int d = func2(a, b, c);
	cout << d << endl;
}

