#include<iostream>
using namespace std;

int main()
{
	//空指针
	//1.空指针用于给指针变量进行初始化
	int* p = NULL;

	//2.空指针不可进行访问
	//0~255之间的内存编号是系统占用的 因此不可访问
	//*p = 100;

	//野指针
	//一种错误 在程序中尽量避免出现
	int* p = (int*)0x1100;


	//总结:空指针和野指针都不是我们申请的空间,因此不要访问


	system("pause");
	return 0;
}