#include<iostream>
using namespace std;

//如果我们传入值 则用我们传入的值 如果没有传入 则使用默认值
int func1(int a = 10, int b = 20, int c = 30)
{
	return a + b + c;
}

//注意:如果某个位置已经有了默认参数,那个这个位置往后 从左到右都必须有默认值
int func2(int a, int b = 10, int c = 10)
{
	return a + b + c;
}
//如果函数声名有默认参数 函数实现就不能有默认参数
int func3(int a = 10, int b = 20);

//int func3(int a = 10,int b = 20)
//{
//	retrun a+b;  //错误 会显示重命名
//}

int main()
{
	int a = 10;
	int b = 10;
	int c = 10;
	int d = func2(a, b, c);
	cout << d << endl;
}

