#include<iostream>
using namespace std;

//通过全局函数打印person信息
template<class T1,class T2> class person;

//类外实现
template<typename T1,typename T2>
void printPerson2(person<T1, T2>p)
{
	cout << "类外实现---姓名:" << p.m_Name << " " << "岁数" << p.m_Age << endl;
}

template<class T1,class T2>
class person
{
	//全局函数 类内实现
	friend void printPerson(person <T1, T2> p)
	{
		cout << "类内实现---姓名:" << p.m_Name << " " << "岁数" << p.m_Age << endl;
	}

	//全局函数类外实现
	//加空模板参数列表
	//如果全局函数是类外实现 需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(person <T1, T2> p);

public:
	person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};




//1.全局函数在类内实现
void test01()
{
	//1.全局函数在类内实现
	//person<string, int>p("Tom", 20);
	//printPerson(p);

	//2.全局函数在类外实现
	person<string, int>p("Tom", 20);
	printPerson2(p);
}

int main()
{
	test01();
}