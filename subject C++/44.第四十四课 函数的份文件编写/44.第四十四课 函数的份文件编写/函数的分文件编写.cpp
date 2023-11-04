#include<iostream>
using namespace std;

//函数的分文件编写
//实现两个数字进行交换的函数


//1.创建.h后缀名的头文件
//2.创建.cpp后缀名的源文件
//1.在头文件中写函数的声明
//4.在源文件中先写函数的定义
#include"swap.h"

int main()
{
	int a, b;
	cin >> a >> b;

	swap(a, b);


	system("pause");
	return 0;
}