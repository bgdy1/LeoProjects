#include<iostream>
using namespace std;

//����ӷ�����
//��������ʱ num1��num2û������������,ֻ��һ����ʽ�ϵĲ���,�׳��β�
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	cout << "��������������" << endl;
	int a, b;
	cin >> a;
	cin >> b;
	//main��������add����
	//�����ú�����ʱ��,ʵ�ε�ֵ�ش����β�
	int c = add(a, b);
	cout << "����" << c << endl;

} 