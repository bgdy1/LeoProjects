#include<iostream>
using namespace std;

//重载关系运算符
class person
{
public:
	person(string name, int age) :m_name(name), m_age(age){}

	bool operator==(person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		return false;
	}

	bool operator!=(person& p)
	{
		if (this->m_name != p.m_name || this->m_age != p.m_age)
		{
			return true;
		}
		return false;
	}

	string m_name;
	int m_age;
};

void test01()
{
	person p1("Tom", 18);

	person p2("Tom", 18);

	//等于
	if (p1 == p2)
		cout << "p1和p2相等" << endl;
	else
		cout << "p1和p2不相等" << endl;
	//不等于
	if (p1 != p2)
		cout << "p1和p2不相等" << endl;
	else
		cout << "p1和p2相等" << endl;
}

int main()
{
	test01();
}