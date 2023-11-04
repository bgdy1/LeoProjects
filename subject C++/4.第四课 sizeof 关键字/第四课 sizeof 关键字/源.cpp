#include<iostream>
using namespace std;

int main() {

	//整形: short(2字节) int（4字节） long（4字节)  long long(8字节)
	
	//可以使用siteof来求出数据类型占用的内存大小
	//语法:sizeof (数据类型/变量）

	//1.短整型//利用sizeof（num1）可以求出 num1的内存占用
	short num1 = 10;
	cout << "short占用的内存空间为:" << sizeof(num1) << endl;
	
	//2.整型//利用sizeof（num2）可以求出 num2的内存占用
	int num2 = 10;
	cout << "int占用的内存空间为:" << sizeof(num2) << endl;
	
	//3.长整形//利用sizeof（num3）可以求出 num3的内存占用
	long num3 = 10;
	cout << "long占用的内存空间为:" << sizeof(num3) << endl;
	
	//4.长长整形//利用sizeof(num4)可以求出 num4的内存占用
	long long num4 = 10;
	cout << "long long 占用的内存空间为：" << sizeof(num4) << endl;

	//整形大小比较
	//short < int ≤ long ≤ long long
	
	system("pause");
		return 0;
}