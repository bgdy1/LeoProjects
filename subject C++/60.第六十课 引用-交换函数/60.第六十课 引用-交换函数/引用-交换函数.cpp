#include<iostream>
using namespace std;

//普通值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
}

//地址传递
void mySwap02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//引用传递
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