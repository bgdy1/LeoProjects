#include<iostream>
using namespace std;

//�������ʹ�������

class Animal
{
public:
	Animal()
	{
		cout << "animal�Ĺ��캯������" << endl;
	}
	
	/*virtual ~Animal()
	{
		cout << "Animal��������������" << endl;
	}*/

	//���麯��
	virtual void speak() = 0;

	//�������� ��Ҫ������Ҫʵ��
	//���˴�������֮�� �����Ҳ���ڳ�����,�޷�ʵ����
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "������������" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat���캯������" << endl;
		m_Name = new string(name);
	}
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "cat������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	virtual void speak()
	{
		cout << *m_Name << "Сè��˵��" << endl;
	}

	string* m_Name;
};

void test01()
{
	Animal* a = new Cat("Tom");
	a->speak();
	//����ָ����������ʱ�� ������������е��������� ������������ж������� �����ڴ�й¶
	delete a;
}

int main()
{
	test01();
}