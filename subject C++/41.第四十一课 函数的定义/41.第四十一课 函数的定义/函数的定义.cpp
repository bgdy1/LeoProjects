#include<iostream>
using namespace std;

//定义加法函数
//函数定义时 num1和num2没有真正的数据,只是一个形式上的参数,俗称形参
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	cout << "请输入两个数字" << endl;
	int a, b;
	cin >> a;
	cin >> b;
	//main函数调用add函数
	//当调用函数的时候,实参的值回传给形参
	int c = add(a, b);
	cout << "答案是" << c << endl;

} 