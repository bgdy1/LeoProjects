#include<iostream>
using namespace std;

//��ֵͨ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
}

//��ַ����
void mySwap02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//���ô���
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	a = a + 1;
}

int main()
{
	int a = 20;
	int b = 30;
	mySwap01(20, 30);
	mySwap02(&a, &b);
	mySwap03(a, b);

	system("pause");
	return 0;
}