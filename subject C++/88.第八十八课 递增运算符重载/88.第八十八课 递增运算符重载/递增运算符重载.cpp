#include<iostream>
using namespace std;

//重载递增运算符

//自定义整型
class integer
{
	friend ostream& operator<<(ostream& cout, integer i);
public:
	integer()
	{
		num = 0;
	}

	//重载前置++运算符

	//返回引用为了一直对一个数据进行递增: ++(++integer)
	integer& operator++()
	{
		//先进行++运算
		num++;

		//在将自身做返回
		return *this;
	}

	//重载后置++运算符
	// int代表占位参数,可以用于区分前置和后置运算符
	integer operator++(int)
	{
		//先 记录当时结果
		integer temp = *this;
		//后 递增
		num++;
		//最后将记录结果进行返回操作
		return temp;
	}

private:
	int num;
};

//重载左移运算符
ostream& operator<<(ostream& cout, integer i)
{
	cout << i.num << endl;
	return cout;
}

void test01()
{
	integer i;
	cout << ++i << endl;
	cout << i << endl;
}

void test02()
{
	integer i;
	cout << i++ << endl;
	cout << i << endl;
}

int main()
{
	test01();
	test02();
}