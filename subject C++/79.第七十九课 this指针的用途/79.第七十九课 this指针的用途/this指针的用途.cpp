#include<iostream>
using namespace std;

class person
{
public:
	person(int age)
	{
		//thisָ��ָ�򱻵��õĳ�Ա���� �����Ķ���
		this->age = age;
		//this�����age�ǳ�Ա�ڵı���
	}
	person& personAddage(person& p)
	{
		this->age+=p.age;
		//thisָ��p2��ָ��,��*thisָ��ľ���p2�������ı���
		return *this;
	}
	
	int age;
};

//1.������Ƴ�ͻ
void test01()
{
	person p1(18);
	cout << "p1������Ϊ:" << p1.age << endl;
}

//2.���ض�������*this
void test02()
{
	person p1(10);
	person p2(10);
	//��ʽ���˼��
	p2.personAddage(p1).personAddage(p1).personAddage(p1);
	cout << "p2������:" << p2.age << endl;
}


int main()
{
	test01();
	test02();
}