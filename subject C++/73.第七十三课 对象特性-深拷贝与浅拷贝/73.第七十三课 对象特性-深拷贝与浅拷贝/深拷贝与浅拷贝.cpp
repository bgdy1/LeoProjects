#include<iostream>
using namespace std;

class person
{
public:
	person()
	{
		cout << "无参构造的调用" << endl;
	}
	
	~person()
	{
		cout << "析构函数调用" << endl;
		//析构函数将堆区开辟数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}

	}
	person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout <<"p1.m_Height = " << m_Height << endl;
		cout << "有参构造调用" << endl;
	}
	//自己写拷贝构造函数来避免p1 和 p2都指向m_Height
	person(const person &p)
	{
		cout << "拷贝构造函数的调用" << endl;
		m_Age = p.m_Age;

		//深拷贝操作
		m_Height = new int(*p.m_Height);
		cout << "p2.m_Height = " << m_Height << endl;
	}
	int m_Age;
	int* m_Height;
};

void test01()
{
	person p1(18,160);
	cout << "p1的年龄是: " << p1.m_Age << " p1的身高" << *p1.m_Height << endl;
	person p2(p1);
	cout << "p2的年龄是: " << p2.m_Age << " p2的身高" << *p2.m_Height << endl;
}

int main()
{
	test01();
}