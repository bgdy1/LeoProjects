#include<iostream>
using namespace std;

//��ָ����ó�Ա����
class person
{
public:
	void showClassName()
	{
		cout << "this is person class" << endl;
	}

	void showPersonAge()
	{
		//����ԭ���Ǵ���ָ����NULL
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