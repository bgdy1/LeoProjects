#include<iostream>
#include"swap.h"

//ʵ���������ֽ��л���

int main()
{
	//ָ��ͺ���
	//1.ֵ����
	
	int a = 10;
	int b = 20;
	swap01(a, b);
					//�뿴����Դ�ļ��Լ�ͷ�ļ�
	swap02(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	//2.��ַ����
	//����ǵ�ַ����,��������ʵ��




	system("pause");
	return 0;
}