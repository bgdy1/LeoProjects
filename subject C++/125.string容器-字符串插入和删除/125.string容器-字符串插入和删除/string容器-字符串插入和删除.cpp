#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str = "hello";
	//插入
	str.insert(1, "111");//h111ello 右手边弄其他数据类型也行
	cout << "str = " << str << endl;

	//删除
	str.erase(1,3);//删第几个到几个
	cout << "str = " << str << endl;
}

int main()
{
	test01();
}