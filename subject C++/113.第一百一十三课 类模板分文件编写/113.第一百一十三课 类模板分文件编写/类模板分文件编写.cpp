#include<iostream>
//第一种解决方式
//#include"person.cpp"

//第二种方法
#include"person.hpp"

using namespace std;

void test01()
{
	person<string, int>p("Tom", 18);
	p.showPerson();
}

int main()
{
	test01();
}