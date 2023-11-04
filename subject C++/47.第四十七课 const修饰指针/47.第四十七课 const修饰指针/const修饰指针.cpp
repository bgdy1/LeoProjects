#include<iostream>
using namespace std;

int main()
{
	//1.const 修饰指针——常量指针
	//指针指向的值不可以更改 指针的指向可以更改
	int a = 10;
	int b = 10;

	const int* p = &a;

	//*p = 20;//错误
	p = &b;//正确

	//2.const 修饰常量 指针常量
	//指针指向的值可以改 指针的指向不可以更改
	int* const p2 = &a;
	//p2 = &b;//错误
	*p2 = 100;//正确

	//3.const 修饰指针和常量
	//指针的指向 和指针指向的值 都不可以更改
	const int* const p3 = &a;
	//p3 = &b;//错误
	//*p3 = 1000;//错误

	system("pause");
	return 0;
}