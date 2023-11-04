#include<iostream>
using namespace std;

class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}

	string m_name;
	int m_age;
};

//对比两个数据是否相等函数
template<typename T> bool myCompare(T& a, T& b)
{
	if (a == b)
		return true;
	else
		return false;
}


//利用具体化person的版本实现代码 具体化优先调用
template<> bool myCompare(person& p1, person& p2)
{
	if (p1.m_age == p2.m_age && p1.m_name == p2.m_name) return true;
	else return false;
}

void test01()
{
	int a = 10;
	int b = 20;
	int rent = myCompare(a, b);

	if (rent) 
		cout << "equal" << endl;
	else if (!rent) 
		cout << "not equal" << endl;
}

void test02()
{
	person p1("Tom", 10);
	person p2("Tom", 10);
	int rent = myCompare(p1, p2);
	if (rent)
	{
		cout << "equal" << endl;
	}
	else if (!rent)
	{
		cout << "not equal" << endl;
	}
}

int main()
{
	test01();
	test02();
}