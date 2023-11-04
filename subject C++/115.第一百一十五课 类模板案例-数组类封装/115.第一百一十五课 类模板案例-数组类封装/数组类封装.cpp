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
		//利用尾插法向数组中插入数组
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出为:" << endl;
	printArray(arr1);
	cout << "arr1的容量为:";
	cout << arr1.getCapacity() << endl;
	cout << "arr1的大小为:";
	cout << arr1.getSize() << endl;
	
	arr1.Pop_Back();
	cout << "尾删后arr1的容量为:";
	cout << arr1.getCapacity() << endl;
	cout << "尾删后arr1的大小为:";
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
		cout << "第" << i + 1 << "姓名为:" << arr[i].m_Name << " " << "年龄为:" << arr[i].m_Age << endl;
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