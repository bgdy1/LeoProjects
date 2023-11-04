#include<iostream>
using namespace std;

//ͨ��ȫ�ֺ�����ӡperson��Ϣ
template<class T1,class T2> class person;

//����ʵ��
template<typename T1,typename T2>
void printPerson2(person<T1, T2>p)
{
	cout << "����ʵ��---����:" << p.m_Name << " " << "����" << p.m_Age << endl;
}

template<class T1,class T2>
class person
{
	//ȫ�ֺ��� ����ʵ��
	friend void printPerson(person <T1, T2> p)
	{
		cout << "����ʵ��---����:" << p.m_Name << " " << "����" << p.m_Age << endl;
	}

	//ȫ�ֺ�������ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ���������ʵ�� ��Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(person <T1, T2> p);

public:
	person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};




//1.ȫ�ֺ���������ʵ��
void test01()
{
	//1.ȫ�ֺ���������ʵ��
	//person<string, int>p("Tom", 20);
	//printPerson(p);

	//2.ȫ�ֺ���������ʵ��
	person<string, int>p("Tom", 20);
	printPerson2(p);
}

int main()
{
	test01();
}