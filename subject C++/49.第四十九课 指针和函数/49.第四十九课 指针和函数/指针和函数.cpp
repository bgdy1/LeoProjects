#include<iostream>
#include"swap.h"

//实现两个数字进行互换

int main()
{
	//指针和函数
	//1.值传递
	
	int a = 10;
	int b = 20;
	swap01(a, b);
					//请看其他源文件以及头文件
	swap02(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	//2.地址传递
	//如果是地址传递,可以修饰实参




	system("pause");
	return 0;
}