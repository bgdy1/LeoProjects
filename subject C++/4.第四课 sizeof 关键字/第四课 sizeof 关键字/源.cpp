#include<iostream>
using namespace std;

int main() {

	//����: short(2�ֽ�) int��4�ֽڣ� long��4�ֽ�)  long long(8�ֽ�)
	
	//����ʹ��siteof�������������ռ�õ��ڴ��С
	//�﷨:sizeof (��������/������

	//1.������//����sizeof��num1��������� num1���ڴ�ռ��
	short num1 = 10;
	cout << "shortռ�õ��ڴ�ռ�Ϊ:" << sizeof(num1) << endl;
	
	//2.����//����sizeof��num2��������� num2���ڴ�ռ��
	int num2 = 10;
	cout << "intռ�õ��ڴ�ռ�Ϊ:" << sizeof(num2) << endl;
	
	//3.������//����sizeof��num3��������� num3���ڴ�ռ��
	long num3 = 10;
	cout << "longռ�õ��ڴ�ռ�Ϊ:" << sizeof(num3) << endl;
	
	//4.��������//����sizeof(num4)������� num4���ڴ�ռ��
	long long num4 = 10;
	cout << "long long ռ�õ��ڴ�ռ�Ϊ��" << sizeof(num4) << endl;

	//���δ�С�Ƚ�
	//short < int �� long �� long long
	
	system("pause");
		return 0;
}