#include<iostream>
using namespace std;

//空指针调用成员函数
class person
{
public:
	void showClassName()
	{
		cout << "this is person class" << endl;
	}

	void showPersonAge()
	{
		//报错原因是传入指针是NULL
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << m_Age << endl;
	}

	int m_Age;
};

void test01()
{
	person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}

int main()
{
	test01();
}