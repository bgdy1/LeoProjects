#include<iostream>
using namespace std;

//类模板对象做函数参数

template<typename TypeName,typename TypeAge> class person
{
public:
	person(TypeName name, TypeAge age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "姓名:" << this->m_Age << " " << "年龄:" << this->m_Name << endl;
	}

	TypeName m_Name;
	TypeAge m_Age;
};

//1.指定传入类型
void printPerson1(person<string, int>& p)
{
	p.showPerson();
}

void test01()
{
	person<string, int>p("Tom", 10);
	printPerson1(p);
}

//2.参数模板化
template<typename T1, typename T2> void printPerson2(person<T1, T2>&p)
{
	p.showPerson();
	cout << "TypeName的类型为" << typeid(T1).name() << endl;//查看类型
	cout << "TypeAge的类型为" << typeid(T2).name() << endl;
}

void test02()
{
	person<string, int>p("Jimmy", 20);
	printPerson2(p);
}

//3.整个类模板化
template<class T> void printPerson3(T& p)
{
	p.showPerson();
	cout << "T的数据类型为:" << typeid(T).name() << endl;
}

void test03()
{
	person<string, int>p("Amy", 30);
	printPerson3(p);
}

int main()
{
	test01();
	test02();
	test03();
}