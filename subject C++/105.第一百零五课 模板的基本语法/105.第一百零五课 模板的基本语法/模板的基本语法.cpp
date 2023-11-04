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
	//1.自动类型推导
	int a = 10;
	int b = 20;
	my_swap(a, b);
	cout << a << " " << b << endl;
	//2.手动选择类型
	my_swap<int>(a, b);
	cout << a << " " << b << endl;
}

int main()
{
	test01();
}