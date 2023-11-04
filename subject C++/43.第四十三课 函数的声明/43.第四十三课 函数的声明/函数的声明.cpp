#include<iostream>
using namespace std;

//函数的声明,实现两个整型数字进行比较,返回较大的值

//提前告诉编译器函数的存在，可以利用函数的声明
int compare(int a, int b);

int main()
{
	cout << "please enter two numbers" << endl;

	int a, b;
	cin >> a >> b;
	cout << "the answer is " << compare(a, b) << endl;


	system("pause");
	return 0;
}


//定义
int compare(int a, int b)
{
	return a > b ? a : b;
}