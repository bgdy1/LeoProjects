#include<iostream>
using namespace std;

template<typename T1,typename T2>
class person
{
public:
	person(T1 name, T2 age);

	void showPerson();

	T1 m_Name;
	T2 m_Age;
};

//构造函数类外实现
template<typename T1, typename T2> 
person<T1, T2>::person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

template<typename T1, typename T2> 
void person<T1, T2>::showPerson()
{
	cout << "姓名:" << this->m_Name << "  " << "岁数:" << this->m_Age << endl;
}

void test01()
{
	person<string, int>p("Tom", 20);
	p.showPerson();
}

int main()
{
	test01();
}