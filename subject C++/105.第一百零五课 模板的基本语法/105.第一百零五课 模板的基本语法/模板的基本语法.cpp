#include<iostream>
using namespace std;

template<typename T>
void my_swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	//1.�Զ������Ƶ�
	int a = 10;
	int b = 20;
	my_swap(a, b);
	cout << a << " " << b << endl;
	//2.�ֶ�ѡ������
	my_swap<int>(a, b);
	cout << a << " " << b << endl;
}

int main()
{
	test01();
}