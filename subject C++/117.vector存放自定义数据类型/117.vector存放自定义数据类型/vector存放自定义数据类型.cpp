#include<iostream>
using namespace std;
#include<vector>

class person
{
public:
	person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

public:
	string m_Name;
	int m_Age;
};

void test01()
{
	vector<person>p;
	person p1("aaa", 16);
	person p2("bbb", 17);
	person p3("ccc", 16);
	//向容器中添加数据
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);

	for (vector<person>::iterator it = p.begin(); it != p.end(); it++)
	{
		//cout << "m_Name = " << (*it).m_Name << " m_Age = " << (*it).m_Age << endl;
		cout << "m_Name = " << it->m_Name << " m_Age = " << it->m_Name << endl;
	}
}

void test02()
{
	vector<person*>p;
	person p1("aaa", 16);
	person p2("bbb", 17);
	person p3("ccc", 16);
	//向容器中添加数据
	p.push_back(&p1);
	p.push_back(&p2);
	p.push_back(&p3);

	for (vector<person*>::iterator it = p.begin(); it != p.end(); it++)
	{
		//cout << "m_Name = " << (**it).m_Name << " m_Age = " << (**it).m_Age << endl;
		//cout << "m_Name = " << (*it)->m_Name << " m_Age = " << (*it)->m_Name << endl;

		person* p = (*it);
		cout << "m_Name = " << p->m_Name << " m_Age = " << p->m_Age << endl;
	}
}

int main()
{
	test01();
	test02();
}