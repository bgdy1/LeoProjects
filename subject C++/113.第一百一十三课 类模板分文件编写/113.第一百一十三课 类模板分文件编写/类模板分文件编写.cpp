#include<iostream>
//��һ�ֽ����ʽ
//#include"person.cpp"

//�ڶ��ַ���
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