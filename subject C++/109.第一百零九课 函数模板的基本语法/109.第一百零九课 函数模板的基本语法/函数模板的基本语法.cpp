#include<iostream>
using namespace std;

template<typename NameType,typename AgeType> class person
{
public:
	person(NameType name,AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	
	void showInfo()
	{
		cout << "m_Name = " << m_Name << "     " << "m_Age = " << m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

void test01()
{
	person<string, int>p1("Tom", 18);
	p1.showInfo();
}

int main()
{
	test01();
}