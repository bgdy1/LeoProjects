#include<iostream>
using namespace std;

//函数调用运算符重载

//打印输出类
class print
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}

};

void print02(string test)
{
	cout << test << endl;
}

void test01()
{
	print p;

	p("helloworld");//由于使用起来非常类似于函数调用，因此叫做仿函数
	print02("helloword");
}

//仿函数非常灵活，没有固定的写法
//加法类

class add
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}

};

void test02()
{
	add a;
	int ret = a(100, 100);
	cout << "ret = " << ret << endl;

	//匿名函数对象 如果不想创建类 就可以使用
	cout << add()(100, 100) << endl;
}

int main()
{
	//test01();
	test02();
}