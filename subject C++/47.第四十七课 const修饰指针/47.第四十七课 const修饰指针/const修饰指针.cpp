#include<iostream>
using namespace std;

int main()
{
	//1.const ����ָ�롪������ָ��
	//ָ��ָ���ֵ�����Ը��� ָ���ָ����Ը���
	int a = 10;
	int b = 10;

	const int* p = &a;

	//*p = 20;//����
	p = &b;//��ȷ

	//2.const ���γ��� ָ�볣��
	//ָ��ָ���ֵ���Ը� ָ���ָ�򲻿��Ը���
	int* const p2 = &a;
	//p2 = &b;//����
	*p2 = 100;//��ȷ

	//3.const ����ָ��ͳ���
	//ָ���ָ�� ��ָ��ָ���ֵ �������Ը���
	const int* const p3 = &a;
	//p3 = &b;//����
	//*p3 = 1000;//����

	system("pause");
	return 0;
}