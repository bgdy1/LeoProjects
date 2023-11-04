#include<iostream>
using namespace std;
#include"MyArray.hpp"



void printArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	MyArray<int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}
	cout << "arr1�Ĵ�ӡ���Ϊ:" << endl;
	printArray(arr1);
	cout << "arr1������Ϊ:";
	cout << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ:";
	cout << arr1.getSize() << endl;
	
	arr1.Pop_Back();
	cout << "βɾ��arr1������Ϊ:";
	cout << arr1.getCapacity() << endl;
	cout << "βɾ��arr1�Ĵ�СΪ:";
	cout << arr1.getSize() << endl;
}

class person
{
public:
	person(){}
	person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void printArray(MyArray<person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "��" << i + 1 << "����Ϊ:" << arr[i].m_Name << " " << "����Ϊ:" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<person>arr2(4);
	person p1("John",15);
	person p2("Tom",16);
	person p3("Henry", 18);
	person p4("Audi", 18);
	arr2.Push_Back(p1);
	arr2.Push_Back(p2);
	arr2.Push_Back(p3);
	arr2.Push_Back(p4);
	printArray(arr2);
}

int main()
{
	//test01();
	test02();
}