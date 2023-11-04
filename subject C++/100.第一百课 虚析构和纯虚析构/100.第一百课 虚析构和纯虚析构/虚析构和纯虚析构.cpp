#include<iostream>
using namespace std;

//虚析构和纯虚析构

class Animal
{
public:
	Animal()
	{
		cout << "animal的构造函数调用" << endl;
	}
	
	/*virtual ~Animal()
	{
		cout << "Animal的析构函数调用" << endl;
	}*/

	//纯虚函数
	virtual void speak() = 0;

	//纯虚析构 需要声明需要实现
	//有了纯虚析构之后 这个类也属于抽象类,无法实例化
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "纯虚析构调用" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	virtual void speak()
	{
		cout << *m_Name << "小猫在说话" << endl;
	}

	string* m_Name;
};

void test01()
{
	Animal* a = new Cat("Tom");
	a->speak();
	//父类指针在析构的时候 不会调用子类中的析构函数 导致子类如果有堆区属性 出现内存泄露
	delete a;
}

int main()
{
	test01();
}